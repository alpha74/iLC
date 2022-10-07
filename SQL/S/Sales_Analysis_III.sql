# Return list of products sold only in first quarter of 2019
# https://leetcode.com/problems/sales-analysis-iii/
# Aman Kumar

# Runtime: 1497 ms, faster than 62.83% of MySQL online submissions for Sales Analysis III.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Sales Analysis III.

SELECT Product.product_id, Product.product_name 
FROM Product JOIN Sales 
ON Product.product_id = Sales.product_id 
GROUP BY Sales.product_id 
HAVING MIN(Sales.sale_date) >= "2019-01-01" AND MAX(Sales.sale_date) <= "2019-03-31";
