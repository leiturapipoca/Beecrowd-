SELECT
p.name,
LENGTH(p.name) AS length
FROM people AS p 
ORDER BY length DESC
