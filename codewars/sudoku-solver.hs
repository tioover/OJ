module Sudoku where
import           Data.List
import           Data.Maybe

type Matrix = [[Int]]


available :: Matrix -> Int -> Int -> Maybe Int
available m i j
    | row !! j /= 0 = Nothing
    | not (null result) && null (tail result) = Just $ head result
    | otherwise = Nothing
    where
        result = notIn $ grid ++ row ++ colum
        row = m !! i
        colum = map (!! j) m
        grid = take3 i m >>= take3 j
        take3 n xs = take 3 $ drop (n - mod n 3) xs
        notIn = (\\) [0..9]


update :: Matrix -> [(Int, (Int, Int))] -> Matrix
update m [] = m
update m ((n, (i, j)):xs) = update (front ++ (line : back)) xs
    where
        (front, row: back) = splitAt i m
        line = take j row ++ (n: drop (j+1) row)


sudoku :: Matrix -> Matrix
sudoku m
    | all (notElem 0) m = m
    | otherwise = sudoku $ update m $ do
        i <- [0..8]; j <- [0..8]
        let a = available m i j
        if isJust a then return (fromJust a, (i, j)) else []
