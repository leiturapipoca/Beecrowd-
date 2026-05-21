SELECT
prod.name,
cat.name
FROM products AS prod JOIN categories AS cat ON cat.id = prod.id_categories
WHERE prod.amount> 100 AND cat.id IN (1,2,3,6,9) ORDER BY cat.id ASC
