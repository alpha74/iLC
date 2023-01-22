# Return name and balance of user having balance > 10000
# https://leetcode.com/problems/bank-account-summary-ii/description/
# Aman Kumar

# Runtime 1208 ms Beats 33.9%
SELECT U.name, SUM(T.amount) as balance
FROM Transactions T INNER JOIN Users U 
WHERE T.account = U.account
GROUP BY T.account
HAVING SUM(T.amount) > 10000;
