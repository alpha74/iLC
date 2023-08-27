# Sum of investments in 2016
# https://leetcode.com/problems/investments-in-2016/description/
# Aman Kumar

# Runtime 1152 ms Beats 46.23%
SELECT ROUND(SUM(A.tiv_2016),2) as tiv_2016
FROM Insurance A
WHERE 0 < (
    SELECT COUNT(*)
    FROM Insurance B
    WHERE A.pid != B.pid
    AND A.tiv_2015 = B.tiv_2015
) AND 0 = (
    SELECT COUNT(*)
    FROM Insurance C
    WHERE C.lat = A.lat
    AND C.lon = A.lon
    AND C.pid != A.pid
);
