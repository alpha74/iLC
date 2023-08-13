# Return customer number which has placed largest number of orders
# https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/description/
# Aman Kumar

# Runtime 957 ms Beats 82.83%
SELECT customer_number
FROM Orders
GROUP BY customer_number
ORDER BY COUNT(*) DESC LIMIT 1 ;
