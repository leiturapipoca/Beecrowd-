SELECT
p.id,
p.name
FROM products as p 
    WHERE price < 10 OR price > 100;
