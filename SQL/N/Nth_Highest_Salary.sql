# Write function to return Nth highest salary
# https://leetcode.com/problems/nth-highest-salary/description/
# Aman Kumar

# Runtime 733 ms Beats 75.25%
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N = N - 1;
  RETURN (
      SELECT DISTINCT(salary)
      FROM Employee
      ORDER BY salary DESC
      LIMIT 1 OFFSET N
  );
END
