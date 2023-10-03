sumMass :: [Int] -> [Int] -> [Int]
sumMass x [] = x
sumMass [] y = y
sumMass (x:xs)(y:ys) = (x + y) : sumMass xs ys