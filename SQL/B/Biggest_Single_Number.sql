# Return biggest single number or null
# https://leetcode.com/problems/biggest-single-number/description/
# Aman Kumar

# Runtime 675 ms Beats 86.26%
SELECT MAX(M1.num) as num
FROM MyNumbers M1
WHERE num IN (
  SELECT num
  FROM MyNumbers M2
  GROUP BY M2.num
  HAVING COUNT(*) = 1
) ;
