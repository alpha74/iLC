# Return list of products sold only in first quarter of 2019
# https://leetcode.com/problems/sales-analysis-iii/
# Aman Kumar

# Runtime: 1825 ms, faster than 27.64% of MySQL online submissions for Sales Analysis III.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Sales Analysis III.
SELECT DISTINCT(S1.product_id) AS product_id, 
( 
    SELECT P1.product_name FROM Product P1
    WHERE P1.product_id = S1.product_id
) AS product_name

FROM Sales S1
WHERE S1.sale_date >= "2019-01-01" AND S1.sale_date <= "2019-03-31"
AND S1.product_id NOT IN ( 
    SELECT S2.product_id
    FROM Sales S2
    WHERE S2.sale_date NOT BETWEEN "2019-01-01" AND "2019-03-31"
) ;
