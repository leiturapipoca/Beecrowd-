SELECT
prod.name,
prov.name,
cat.name
FROM products AS prod JOIN categories AS cat ON prod.id_categories = cat.id
JOIN providers AS prov ON prod.id_providers = prov.id WHERE prov.name = 'Sansul SA' 
AND cat.name = 'Imported'
