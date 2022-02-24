# Print all big countries
# https://leetcode.com/problems/big-countries/
# Aman Kumar

SELECT name, population, area
FROM World
WHERE population >= 25000000 OR area >= 3000000 ;
