# Return names of sales person who dont have order from cpmpany name "RED"
# https://leetcode.com/problems/sales-person/description/
# Aman Kumar

# Runtime 2294 ms Beats 85.43%
SELECT S.name
FROM SalesPerson S
WHERE S.sales_id NOT IN
(
  SELECT O.sales_id
  FROM Orders O, Company C
  WHERE O.com_id = C.com_id
  AND C.name = "RED" 
)
