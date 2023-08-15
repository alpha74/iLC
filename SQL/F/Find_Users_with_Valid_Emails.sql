# Find users with valid emails
# https://leetcode.com/problems/find-users-with-valid-e-mails/description/
# Aman Kumar

# Runtime 1447 ms Beats 60.69%
SELECT *
FROM Users
WHERE mail REGEXP '^[a-zA-Z][a-zA-Z0-9_.-]*@leetcode[.]com';
