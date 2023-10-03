sqrt2:: [Int] -> [Int]
sqrt2 = map(\x -> x^x)

topow x = [2^n | n <- [1..x] ]