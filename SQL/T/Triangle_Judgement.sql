# Check if triangle can be formed from x, y, z
# https://leetcode.com/problems/triangle-judgement/description/
# Aman Kumar

# Runtime 470 ms Beats 91.38%
SELECT x, y, z,
CASE WHEN x+y > z AND y+z > x AND z+x > y THEN 'Yes'
ELSE 'No'
END AS TRIANGLE
FROM Triangle;
