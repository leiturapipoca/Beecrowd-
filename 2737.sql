(
 SELECT
    lawyers.name,
    lawyers.customers_number
FROM lawyers
ORDER BY lawyers.customers_number DESC
LIMIT 1
)

UNION ALL

(
SELECT
    lawyers.name,
    lawyers.customers_number
FROM lawyers
ORDER BY lawyers.customers_number ASC
LIMIT 1
)

UNION ALL

(
SELECT
    'Average' AS name,
    ROUND(AVG(lawyers.customers_number))::INT AS customers_number
FROM lawyers
);
