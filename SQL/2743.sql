SELECT p.name, CHAR_LENGTH(p.name) AS length 
FROM people p
ORDER BY length DESC;