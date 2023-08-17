SELECT pd.name, pv.name
FROM products pd
INNER JOIN providers pv
ON pd.id_providers = pv.id
INNER JOIN categories c
ON pd.id_categories = c.id AND pd.id_categories = 6;