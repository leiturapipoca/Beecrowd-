SELECT
c.name,
r.rentals_date
FROM customers AS c JOIN rentals as r ON c.id = r.id_customers
WHERE EXTRACT(MONTH FROM rentals_date) = 9;
