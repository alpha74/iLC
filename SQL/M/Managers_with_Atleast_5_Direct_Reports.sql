# Return names of managers having >= 5 direct reports
# https://leetcode.com/problems/managers-with-at-least-5-direct-reports/description/?envType=study-plan-v2&id=top-sql-50
# Aman Kumar

# Runtime 489 ms Beats 77.91%
SELECT E1.name
FROM Employee E1 INNER JOIN Employee E2
ON E2.managerId = E1.id
GROUP BY E1.id
HAVING COUNT(*) >= 5 ;
