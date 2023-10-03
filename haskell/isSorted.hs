isSorted :: Double - >Double -> Double -> Bool
isSorted x y z = if (x>y && y>z) || (x<y &&
y<z) then True else False