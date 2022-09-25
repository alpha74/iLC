# Find products which are low in fat and recyclable.
# https://leetcode.com/problems/recyclable-and-low-fat-products/
# Aman Kumar

# Runtime: 446 ms, faster than 93.20% of MySQL online submissions for Recyclable and Low Fat Products.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Recyclable and Low Fat Products.
SELECT product_id
FROM Products
WHERE low_fats = "Y" AND recyclable = "Y" ;
