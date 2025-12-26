SELECT
p.id,
p.name
FROM products AS p JOIN categories as c ON p.id_categories = c.id
WHERE 
c.name LIKE 'super%';
