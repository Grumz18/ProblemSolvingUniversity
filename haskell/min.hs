min3 :: Int -> Int -> Int -> Int
min3 x y z = if x <= y && x <= z then x
else if y <= x && y <= z then y
else z