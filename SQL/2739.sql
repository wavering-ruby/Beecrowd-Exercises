-- CREATE TABLE loan (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     value DECIMAL(10,2) NOT NULL,
--     payday DATE NOT NULL
-- );

-- INSERT INTO loan (id, name, value, payday) VALUES
-- (1, 'Cristian Ghyprievy', 3000.50, '2017-10-19'),
-- (2, 'John Serial', 10000.00, '2017-10-10'),
-- (3, 'Michael Seven', 5000.40, '2017-10-17'),
-- (4, 'Joana Cabel', 2000.00, '2017-10-05'),
-- (5, 'Miguel Santos', 4050.00, '2017-10-20');

SELECT l.name, SUBSTRING(l.payday::text FROM 9 FOR 2)::int as day
FROM loan l;
