# Return second highest salary
# https://leetcode.com/problems/second-highest-salary/description/
# Aman Kumar

# Runtime 446 ms Beats 76.64%
SELECT (
  SELECT DISTINCT(salary)
  FROM Employee
  ORDER BY salary DESC
  LIMIT 1 OFFSET 1
) AS SecondHighestSalary;
