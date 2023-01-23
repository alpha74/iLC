# Customer who visited but did not make any transactions
# https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/description/
# Aman Kumar

# Runtime 2310 ms Beats 22.22%
SELECT V.customer_id, COUNT(*) as count_no_trans
FROM Visits V
WHERE V.visit_id NOT IN 
(
    SELECT T.visit_id
    FROM Transactions T
)
GROUP BY V.customer_id;
