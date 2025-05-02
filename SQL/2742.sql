-- CREATE TABLE dimensions (
--     id INT PRIMARY KEY,
--     name VARCHAR(10)
-- );

-- INSERT INTO dimensions (id, name) VALUES
-- (1, 'C774'),
-- (2, 'C784'),
-- (3, 'C794'),
-- (4, 'C824'),
-- (5, 'C875');

-- CREATE TABLE life_registry (
--     id INT PRIMARY KEY,
--     name VARCHAR(100),
--     omega NUMERIC(3,1),
--     dimensions_id INT REFERENCES dimensions(id)
-- );

-- INSERT INTO life_registry (id, name, omega, dimensions_id) VALUES
-- (1, 'Richard Postman', 5.6, 2),
-- (2, 'Simple Jelly', 1.4, 1),
-- (3, 'Richard Gran Master', 2.5, 1),
-- (4, 'Richard Turing', 6.4, 4),
-- (5, 'Richard Strall', 1.0, 3);

SELECT l.name, ROUND(l.omega * 1.618, 3) AS Fator_N
FROM life_registry l
INNER JOIN dimensions d
ON l.dimensions_id = d.id
WHERE (d.name = 'C875' OR d.name = 'C774') AND (l.name LIKE 'Richard %')
ORDER BY l.omega ASC;
