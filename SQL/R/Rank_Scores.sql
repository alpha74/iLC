# Given Scores, generate score and its rank
# https://leetcode.com/problems/rank-scores/description/
# Aman Kumar

# Beats 10.02% of users with MySQL
# 0.00MB Beats 100.00% of users with MySQL
SELECT S.Score, 
       (SELECT COUNT(DISTINCT S2.Score) 
        FROM Scores S2 
        WHERE S2.Score >= S.Score) AS "rank"
FROM Scores S
ORDER BY S.Score DESC;
