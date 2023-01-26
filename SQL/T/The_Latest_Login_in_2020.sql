# Return latest login of user in year 2020
# https://leetcode.com/problems/the-latest-login-in-2020/submissions/885711030/
# Aman Kumar

# Runtime 1051 ms Beats 37.56%
SELECT user_id, MAX(time_stamp) AS last_stamp
FROM Logins
WHERE YEAR(time_stamp) = 2020
GROUP BY user_id ;
