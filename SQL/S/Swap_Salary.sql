// Swap gender of 'm' and 'f'
// https://leetcode.com/problems/swap-salary/
// Aman Kumar

UPDATE Salary SET sex = CASE WHEN sex = "m" THEN "f" ELSE "m" END
