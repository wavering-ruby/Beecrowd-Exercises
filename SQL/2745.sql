-- CREATE TABLE people (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     salary NUMERIC(10,2) NOT NULL
-- );

-- INSERT INTO people (id, name, salary) VALUES
-- (1, 'James M. Tabarez', 883),
-- (2, 'Rafael T. Hendon', 4281),
-- (3, 'Linda J. Gardner', 4437),
-- (4, 'Nicholas J. Conn', 8011),
-- (5, 'Karol A. Morales', 2508),
-- (6, 'Lolita S. Graves', 8709);

SELECT p.name, ROUND(p.salary * 0.10, 2) as tax
FROM people p 
WHERE p.salary > 3000