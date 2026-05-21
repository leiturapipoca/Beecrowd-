SELECT
prod.name,
prov.name,
prod.price
FROM products AS prod JOIN categories AS cat ON prod.id_categories = cat.id
JOIN providers AS prov ON prod.id_providers = prov.id WHERE  prod.price > 1000
AND cat.name = 'Super Luxury'
