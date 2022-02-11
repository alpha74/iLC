// Delete duplicates emails having id greater than id of first appearance
// https://leetcode.com/problems/delete-duplicate-emails/
// Aman Kumar

DELETE P1
FROM Person P1, Person P2
WHERE P1.email = P2.email AND P1.id > P2.id;
