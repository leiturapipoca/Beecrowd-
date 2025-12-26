SELECT
c.name,
SUM(p.amount) AS sum
FROM categories AS c JOIN products AS p ON p.id_categories = c.id
GROUP BY c.id;
