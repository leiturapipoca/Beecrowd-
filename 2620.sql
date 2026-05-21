SELECT
cust.name,
ord.id
FROM customers AS cust JOIN orders AS ord ON cust.id = ord.id_customers 
WHERE ord.orders_date < '2016-07-01'
