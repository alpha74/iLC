# Return moves which are not boring and have odd id
# https://leetcode.com/problems/not-boring-movies/
# Aman Kumar

SELECT * FROM Cinema
WHERE description NOT LIKE "boring"
AND id % 2 != 0
ORDER BY rating DESC ;
