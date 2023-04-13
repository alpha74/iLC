# Return number of unique subjects taught by each teacher
# https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/description/
# Aman Kumar

SELECT teacher_id, COUNT(DISTINCT(subject_id)) as cnt
FROM Teacher
GROUP BY teacher_id;
