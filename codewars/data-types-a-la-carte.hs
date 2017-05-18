{-# OPTIONS_GHC -fno-warn-deprecated-flags #-}
{-# OPTIONS_GHC -fno-warn-tabs #-}
{-# LANGUAGE DeriveFunctor         #-}
{-# LANGUAGE FlexibleContexts      #-}
{-# LANGUAGE FlexibleInstances     #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE OverlappingInstances  #-}
{-# LANGUAGE TypeOperators         #-}

-- http://www.codewars.com/kata/data-types-a-la-carte

module ALaCarte where
-- Definitions
newtype Expr f = In (f (Expr f))

-- We define a separate data type for each constructor we want to use
-- then we can combine them together using the (:+:) operator to make
-- our data types à la carte.

newtype Lit a = Lit Int
data Add a = Add a a

-- Coproduct
data (f :+: g) e = Inl (f e) | Inr (g e)
infixr 1 :+:

-- By defining functor instances we can write a generic fold operator
-- which will be useful to evaluate our expressions.

instance Functor Lit where
  fmap f (Lit x) = Lit x

instance Functor Add where
  fmap f (Add a b) = Add (f a) (f b)

instance (Functor f, Functor g) => Functor (f :+: g) where
  fmap f (Inl a) = Inl $ fmap f a
  fmap f (Inr b) = Inr $ fmap f b

foldExpr :: Functor f => (f a -> a) -> Expr f -> a
foldExpr f (In e) = f $ fmap (foldExpr f) e

-- -- Now we can write a simple interpreter. Your definitions should correspond
-- -- closely with the definition for the old interpreter given in the description.

class Functor f => Eval f where
  evalAlgebra :: f Int -> Int

instance Eval Lit where
  evalAlgebra (Lit x) = x

instance Eval Add where
  evalAlgebra (Add x y) = x + y

instance (Eval f, Eval g) => Eval (f :+: g) where
  evalAlgebra (Inl l) = evalAlgebra l
  evalAlgebra (Inr r) = evalAlgebra r

eval :: Eval f => Expr f -> Int
eval = foldExpr evalAlgebra

-- HINT: Use foldExpr

-- The problem is that it is painful to write expressions.
-- This is how you would write 5+6

pain :: Expr (Lit :+: Add)
pain = In (Inr (Add (In (Inl (Lit 5))) (In (Inl (Lit 6)))))

class (Functor sub, Functor sup) => sub :<: sup where
  inj :: sub a -> sup a


-- Reflexivity
instance Functor f => f :<: f where
  inj = id

instance (Functor f, Functor g) =>  f :<: (f :+: g) where
  inj = Inl

instance (Functor f, Functor g, Functor h, f :<: g) => f :<: (h :+: g) where
  inj x = Inr (inj x)

-- Note: This part requires overlapping instances, this is safe as long as :+: associates to the right.
-- A modern implementation would use type families.

-- Then we can use this type class to write smart constructors.

inject :: (g :<: f) => g (Expr f) -> Expr f
inject x = In (inj x)

lit :: (Lit :<: f) => Int -> Expr f
lit n = inject (Lit n)

add :: (Add :<: f) => Expr f -> Expr f -> Expr f
add e1 e2 = inject (Add e1 e2)

-- -- Then as long as we specify the type, writing expressions is easy.

expr :: Expr (Add :+: Lit)
expr = add (lit 5) (lit 6)



-- We can add multiplication very easily.

data Mult a = Mult a a

instance Eval Mult where
  evalAlgebra (Mult x y) = x * y

instance Functor Mult where
  fmap f (Mult a b) = Mult (f a) (f b)

mult :: (Mult :<: f) => Expr f -> Expr f -> Expr f
mult e1 e2 = inject (Mult e1 e2)

-- We must specify the type of expressions
expr2 :: Expr (Mult :+: (Add :+: Lit))
expr2 = mult (add (lit 5) (lit 6)) (lit 2)



class Functor f => Pretty f where
    render :: Pretty g => f (Expr g) -> String

pretty :: Pretty f => Expr f -> String
pretty (In e) = render e

instance Pretty Lit where
    render (Lit x) = show x

instance Pretty Add where
    render (Add (In x) (In y)) = "(" ++ render x ++ "+" ++ render y ++ ")"

instance Pretty Mult where
    render (Mult (In x) (In y)) = "(" ++ render x ++ "*" ++ render y ++ ")"


instance (Pretty f, Pretty g) => Pretty (f :+: g) where
    render (Inl e) = render e
    render (Inr e) = render e
