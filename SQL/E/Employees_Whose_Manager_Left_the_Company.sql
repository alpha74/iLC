# Return list of employee_id whose manager have left the company
# https://leetcode.com/problems/employees-whose-manager-left-the-company/description/
# Aman Kumar

# Runtime 678 ms Beats 77.7%
SELECT employee_id
FROM Employees
WHERE salary < 30000
AND manager_id NOT IN (
    SELECT employee_id FROM Employees
)
ORDER BY employee_id;
