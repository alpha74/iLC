# Find total time send by each employee on each day
# https://leetcode.com/problems/find-total-time-spent-by-each-employee/
# Aman Kumar

# Runtime: 539 ms, faster than 68.83% of MySQL online submissions for Find Total Time Spent by Each Employee.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Find Total Time Spent by Each Employee.

SELECT event_day as day, emp_id, SUM(out_time - in_time) as total_time
FROM Employees
GROUP BY event_day, emp_id ;
