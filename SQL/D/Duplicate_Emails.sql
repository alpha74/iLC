// SQL : Print duplicate emails
// https://leetcode.com/problems/duplicate-emails/
// Aman Kumar

SELECT email 
FROM Person
GROUP BY email
HAVING COUNT(*) > 1
