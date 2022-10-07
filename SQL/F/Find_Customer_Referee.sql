# Find customer who is not referred by Customer Id = 2
# https://leetcode.com/problems/find-customer-referee
# Aman Kumar

# Runtime: 453 ms, faster than 89.36% of MySQL online submissions for Find Customer Referee.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Find Customer Referee.

SELECT name
FROM Customer
WHERE referee_id != 2 OR referee_id IS NULL ;
