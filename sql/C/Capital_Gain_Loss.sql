# Return capital gain loss amount for each stock
# https://leetcode.com/problems/capital-gainloss/
# Aman Kumar

# Runtime: 4228 ms, faster than 5.00% of MySQL online submissions for Capital Gain/Loss.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Capital Gain/Loss.
SELECT A.stock_name as stock_name,
(   
    SELECT SUM(C.price) FROM Stocks C
    WHERE C.stock_name = A.stock_name
    AND operation = "Sell"
) - 
(
    SELECT SUM(B.price) FROM Stocks B
    WHERE B.stock_name = A.stock_name
    AND operation = "Buy"   

) AS capital_gain_loss
FROM Stocks A
GROUP BY A.stock_name ;
