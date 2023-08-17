SELECT pd.name, pv.name
FROM providers pv
INNER JOIN products pd
ON pv.id = pd.id_providers AND pv.name = 'Ajax SA';