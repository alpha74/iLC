# Number of employees which report to each employee
# https://leetcode.com/problems/the-number-of-employees-which-report-to-each-employee/description/
# Aman Kumar

# Runtime 1129 ms Beats 71.71%
SELECT E2.employee_id, 
    E2.name, 
    COUNT(*) as reports_count, 
    ROUND(AVG(E1.age)) AS average_age

FROM Employees E1 JOIN Employees E2
ON E1.reports_to = E2.employee_id

GROUP BY E2.employee_id
ORDER BY E2.employee_id;


# Runtime 1187 ms Beats 57.32%
SELECT E1.employee_id, 
    E1.name, 
    COUNT(*) as reports_count, 
    ROUND(AVG(E2.age)) AS average_age
FROM Employees E1 JOIN Employees E2
ON E1.employee_id = E2.reports_to
GROUP BY E1.employee_id
ORDER BY E1.employee_id;
