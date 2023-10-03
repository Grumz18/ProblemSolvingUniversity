isParallel :: (Double,Double)->(Double,Double)->(Double,Double)->(Double,Double)->Bool
isParallel (a,b) (c,d) (e,f) (g,h) = if (c - a)/(g - e) == (d - b)/(h - f) then
True else Fals