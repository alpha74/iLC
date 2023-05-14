# Replace Employee ID with unique identifier
# https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/description/
# Aman Kumar

# Runtime 2012 ms Beats 79.39%
SELECT B.unique_id, A.name
FROM Employees A LEFT OUTER JOIN EmployeeUNI B
ON A.id = B.id ;
