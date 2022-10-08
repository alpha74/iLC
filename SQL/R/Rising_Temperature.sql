# Return id where temperature is greater than last date's temperature
# https://leetcode.com/problems/rising-temperature/
# Aman Kumar

# Runtime: 751 ms, faster than 51.71% of MySQL online submissions for Rising Temperature.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Rising Temperature.

SELECT W1.id AS id
FROM Weather W1, Weather W2
WHERE W1.temperature > W2.temperature
AND DATEDIFF( W1.recordDate, W2.recordDate) = 1 ;
