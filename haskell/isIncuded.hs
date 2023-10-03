isIncluded :: (Double,Double)-> Double ->(Double,Double)-> Double-> Bool
isIncluded (a,b) c (d,e) f = if (d - a)^2 + (e - b)^2 <= (f - c)^2 then
True else False