SELECT
prod.name,
prov.name
FROM providers AS prov JOIN products AS prod ON prov.id = prod.id_providers WHERE prov.name = 'Ajax SA'
