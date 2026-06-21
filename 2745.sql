SELECT
people.name,
ROUND(people.salary/10.0, 2) 
FROM people WHERE salary > 3000 
