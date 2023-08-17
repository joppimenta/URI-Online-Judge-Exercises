SELECT pd.name
FROM products pd
INNER JOIN providers pv
ON pv.id = pd.id_providers AND pd.amount > 10 AND pd.amount < 20 
AND pv.name LIKE 'P%';