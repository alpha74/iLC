# Return average experience of employees for each project
# https://leetcode.com/problems/project-employees-i/description/
# Aman Kumar

# Runtime 1502 ms Beats 53.63%
SELECT P.project_id, ROUND(AVG(e.experience_years),2) AS average_years
FROM Project P, Employee E
WHERE P.employee_id = E.employee_id
GROUP BY P.project_id ;
