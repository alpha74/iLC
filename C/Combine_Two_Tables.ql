# Combine two SQL table with given conditions
# https://leetcode.com/problems/combine-two-tables/
# Aman Kumar

SELECT 
Person.firstName as firstName,
Person.lastName as lastName,
Address.city as city,
Address.state as state

FROM Person 
LEFT OUTER JOIN Address
ON Person.personId = Address.personID ;
