SELECT pd.name, pv.name, c.name
FROM products pd
INNER JOIN providers pv
ON pd.id_providers = pv.id AND pv.name = 'Sansul SA'
INNER JOIN categories c
ON c.id = pd.id_categories AND c.name = 'Imported';
