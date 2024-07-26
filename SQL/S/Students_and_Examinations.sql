# Return student data and number of exams attended
# https://leetcode.com/problems/students-and-examinations
# Aman Kumar

# Runtime 820ms Beats68.58%
SELECT *,
    (
        SELECT COUNT(*)
        FROM Examinations E
        WHERE E.student_id = S.student_id
        AND E.subject_name = S.subject_name
    ) AS attended_exams
FROM (SELECT * FROM Students CROSS JOIN Subjects) AS S
ORDER BY S.student_id, S.subject_name;
