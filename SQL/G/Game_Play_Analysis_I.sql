# Return first login date of each player
# https://leetcode.com/problems/game-play-analysis-i/
# Aman Kumar

# Runtime: 623 ms, faster than 99.33% of MySQL online submissions for Game Play Analysis I.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Game Play Analysis I.
SELECT player_id, MIN(event_date) AS first_login
FROM Activity
GROUP BY player_id;
