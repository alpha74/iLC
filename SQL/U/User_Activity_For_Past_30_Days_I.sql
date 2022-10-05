# Number of DAU in 30days by date
# https://leetcode.com/problems/user-activity-for-the-past-30-days-i/
# Aman Kumar

# Runtime: 555 ms, faster than 62.67% of MySQL online submissions for User Activity for the Past 30 Days I.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for User Activity for the Past 30 Days I.
SELECT activity_date AS day, 
COUNT(DISTINCT user_id) AS active_users
 
FROM Activity 
WHERE activity_date > "2019-06-27" AND activity_date < "2019-07-28"
GROUP BY activity_date ;
