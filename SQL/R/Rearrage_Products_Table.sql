# Rearrange given product table having three columns to single column format
# https://leetcode.com/problems/rearrange-products-table/description/
# Aman Kumar

# Runtime 1081 ms Beats 43.83%

# Using UNION
SELECT product_id, "store1" AS store, store1 AS price
FROM Products
WHERE store1 IS NOT NULL 

UNION

SELECT product_id, "store2" AS store, store2 AS price
FROM Products
WHERE store2 IS NOT NULL

UNION

SELECT product_id, "store3" AS store, store3 AS price
FROM Products
WHERE store3 IS NOT NULL ;
