SELECT E1.name AS Employee
FROM Employee AS E1

WHERE E1.salary > (
    SELECT E2.salary 
    FROM Employee AS E2
    WHERE E1.managerId = E2.id
)
