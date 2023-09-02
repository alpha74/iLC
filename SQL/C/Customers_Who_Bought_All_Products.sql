# Return all customer_ids who bought all the products
# https://leetcode.com/problems/customers-who-bought-all-products/description/
# Aman Kumar

# Runtime 920 ms Beats 93.93%
SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT(product_key))  = (
    SELECT COUNT(*)
    FROM Product
);
