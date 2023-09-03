# Return list of travellers having travelled distance in decreasing order and names in ascending order
# https://leetcode.com/problems/top-travellers/description/
# Aman Kumar

# Runtime 1872 ms Beats 61.61%
SELECT name, SUM(IFNULL(distance,0)) AS travelled_distance
FROM Users LEFT JOIN Rides ON Users.id = Rides.user_id
GROUP BY Users.id
ORDER BY travelled_distance DESC, name ASC;
