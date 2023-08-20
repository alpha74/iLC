# Return actor and director who have cooperated atleast 3 times
# https://leetcode.com/problems/actors-and-directors-who-cooperated-at-least-three-times/description/
# Aman Kumar

# Runtime 685 ms Beats 83.85%
SELECT actor_id, director_id
FROM ActorDirector
GROUP BY actor_id, director_id
HAVING COUNT(*) >= 3;
