prime :: [Int]
prime = sieve [2..]
    where
        sieve = fix ((`ap` tail) . (. head) . liftM2 (.) (:) . (. (filter . ((0 /=) .) . flip mod)) . (.))
