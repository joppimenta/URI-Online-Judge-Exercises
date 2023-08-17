(SELECT name, customers_number
FROM lawyers
WHERE customers_number IN (MAX(customers_number), MIN(customers_number)))

UNION ALL

(SELECT 'Average', round(AVG(customers_number), 0)
FROM lawyers)