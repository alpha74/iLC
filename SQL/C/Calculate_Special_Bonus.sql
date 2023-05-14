# Calculate bonus of employee based on employee_id and name
# https://leetcode.com/problems/calculate-special-bonus/description/
# Aman Kumar

# Runtime 966 ms Beats 94.94%
SELECT employee_id,
CASE
    WHEN employee_id % 2 = 1 AND name NOT LIKE "M%" THEN salary
    ELSE 0
END AS bonus
FROM Employees
ORDER BY employee_id ASC ;
