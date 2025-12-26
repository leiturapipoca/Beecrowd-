SELECT
c.id,
c.name
FROM customers AS c  LEFT JOIN locations AS l ON c.id = l.id_customers
GROUP BY c.id, c.name
HAVING COUNT(l.id_customers) < 1
ORDER BY c.id;
