# Return average processing time for each machine given machine_id, process_id, timestamp
# https://leetcode.com/problems/average-time-of-process-per-machine/description/?envType=study-plan-v2&id=top-sql-50
# Aman Kumar

# Runtime 377 ms Beats 78.59%
SELECT A1.machine_id, ROUND(AVG(A2.timestamp - A1.timestamp),3) AS processing_time

FROM Activity A1 INNER JOIN Activity A2 ON 
  A1.machine_id = A2.machine_id AND 
  A1.process_id = A2.process_id AND 
  A1.activity_type = "start" AND
  A2.activity_type = "end"

GROUP BY A1.machine_id ;
