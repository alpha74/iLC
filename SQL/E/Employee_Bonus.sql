# Return name and bonus of employees having bonus < 1000
# https://leetcode.com/problems/employee-bonus/description/
# Aman Kumar

# Runtime 1941 ms Beats 42.17%
SELECT E.name, B.bonus
FROM Employee E LEFT JOIN Bonus B USING (empId)
WHERE B.bonus < 1000 OR B.bonus IS NULL
