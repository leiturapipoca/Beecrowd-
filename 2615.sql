SELECT 
city
FROM customers
GROUP BY city
HAVING COUNT(city) > 0;
