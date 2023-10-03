isTriangle :: Double -> Double -> Double -> Bool
isTriangle x y z = if z<(x + y) && z>(x - y) then True else
False