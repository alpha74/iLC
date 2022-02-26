# Classes having atleast 5 students
# https://leetcode.com/problems/classes-more-than-5-students/
# Aman Kumar

SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(*) >= 5 ;
