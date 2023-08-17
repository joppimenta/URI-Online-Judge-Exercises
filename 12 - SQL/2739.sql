SELECT name, Cast(extract (DAY FROM payday) AS Integer)
FROM loan;