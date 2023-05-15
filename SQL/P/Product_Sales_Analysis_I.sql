# Return product name, year and price from Sales and Product table
# https://leetcode.com/problems/product-sales-analysis-i/description/?envType=study-plan-v2&id=top-sql-50
# Aman Kumar

# Runtime 2094 ms Beats 59.57%
SELECT P.product_name, S.year, S.price
FROM Sales S INNER JOIN Product P
ON S.product_id = P.product_id ;
