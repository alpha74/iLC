# Return comma separated string on products sold on same date
# https://leetcode.com/problems/group-sold-products-by-the-date/description/
# Aman Kumar

# Runtime 1150 ms Beats 24.51%
SELECT sell_date, COUNT(DISTINCT(product)) AS num_sold,
GROUP_CONCAT(DISTINCT product ORDER BY product ASC separator ',') AS products
FROM Activities
GROUP BY sell_date 
ORDER BY sell_date ASC;
