substitute :: Char -> Char -> String -> String
substitute x y [] = []
substitute x y (a:as) = if a == x then y :
substitute x y as else a : 
substitute x y as