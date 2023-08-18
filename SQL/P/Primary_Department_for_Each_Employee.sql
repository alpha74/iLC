# Return priary department for each employee
# https://leetcode.com/problems/primary-department-for-each-employee/description/
# Aman Kumar

# Runtime 1535 ms Beats 14.52%
SELECT employee_id, department_id 
FROM Employee 
WHERE primary_flag = 'Y' 
UNION 
SELECT employee_id, department_id 
FROM Employee 
WHERE employee_id NOT IN (
    SELECT employee_id 
    FROM Employee 
    WHERE primary_flag = 'Y'
    )
ORDER BY employee_id
