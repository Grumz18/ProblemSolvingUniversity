trans :: [[a]] -> [[a]]
trans [] = []
trans ([] : xss) = trans xss
trans ((x:xs) : xss) = (x : [h | (h:_) <- xss]) : trans (xs : [ t | (_:t) <- xss])