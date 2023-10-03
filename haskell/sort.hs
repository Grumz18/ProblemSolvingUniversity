sort2 :: (Int -> Int -> ( Int, Int))
sort2 x y = if x > y then (y,x) else (x,y)