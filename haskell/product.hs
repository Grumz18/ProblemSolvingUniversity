data Product = Book String String | Casete String | SD String String Int deriving (Eq, Show)

getTitle :: Product -> String
getTitle (Book x y) = x
getTitle (Casete x) = x
getTitle (SD x y z) = x

lookupTitle :: String -> [Product] -> Maybe Product
lookupTitle x [] = Nothing
lookupTitle x (p:ps) | (x == (getTitle p)) = Just p
                     | otherwise = lookupTitle x ps