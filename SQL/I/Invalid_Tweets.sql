# Return ids of invalid tweets
# https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/description/
# Aman Kumar

# Runtime 1103 ms Beats 69%
SELECT B.unique_id, A.name
FROM Employees A LEFT OUTER JOIN EmployeeUNI B
ON A.id = B.id ;
