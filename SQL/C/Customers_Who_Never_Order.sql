# SQL : Get names of customers who have not ordered anytime
# https://leetcode.com/problems/customers-who-never-order/
# Aman Kumar

# Using subquery to get cutomer who have orders and then removing them from all customers list
SELECT Customers.name as Customers
FROM Customers
WHERE Customers.id NOT IN (
 SELECT Customers.id
 FROM Customers FULL JOIN Orders
 ON Customers.id = Orders.customerId
 GROUP by Customers.name
 HAVING COUNT(*) > 0
)
