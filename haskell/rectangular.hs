isRectangular ::(Double,Double)->(Double,Double)->(Double,Double)->Bool
isRectangular (a,b) (c,d) (e,f) = if (c - a)*(e - a)+(d - b)*( - b) == 0 || (a - c)*(e - c)+(b - d)*(f - d) == 0 || (a - e)*(c - e)+(b - f)*(d - f) == 0 
then True else False