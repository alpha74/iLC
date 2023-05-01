# Return total and approved transaction amounts for month and country
# https://leetcode.com/problems/monthly-transactions-i/description/
# Aman Kumar

# Runtime 1033 ms Beats 67.40%
SELECT
    DATE_FORMAT(trans_date, '%Y-%m') AS month,
    country,
    COUNT(id) AS trans_count,
    COUNT(IF(state = 'approved', 1, NULL)) AS approved_count,
    SUM(amount) AS trans_total_amount,
    SUM(IF(state='approved', amount, 0)) AS approved_total_amount
FROM Transactions
GROUP BY month, country;
