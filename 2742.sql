WITH resultado as (
SELECT      
l.name,
l.omega
FROM dimensions as d JOIN life_registry as l 
ON d.id = l.dimensions_id
WHERE (d.name = 'C875' or d.name = 'C774')
AND l.name LIKE 'Richard%'
)

SELECT 
r.name,
ROUND(r.omega*1.618, 3) as "Fator N"
FROM resultado as r
Order by r.omega ASC
