# List the products ordered in a period
# https://leetcode.com/problems/list-the-products-ordered-in-a-period/description/
# Aman Kumar

# Runtime 1112 ms Beats 84.48%
SELECT P.product_name, SUM(O.unit) AS unit
FROM Products P INNER JOIN Orders O
ON P.product_id = O.product_id
WHERE order_date LIKE "2020-02-%"

GROUP BY P.product_id
HAVING SUM(O.unit) >= 100 ;
