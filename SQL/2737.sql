-- -- Criando a tabela lawyers
-- CREATE TABLE lawyers (
--     register INT PRIMARY KEY,
--     name VARCHAR(255) NOT NULL,
--     customers_number INT NOT NULL
-- );

-- -- Inserindo os dados na tabela lawyers
-- INSERT INTO lawyers (register, name, customers_number) VALUES
-- (1648, 'Marty M. Harrison', 5),
-- (2427, 'Jonathan J. Blevins', 15),
-- (3365, 'Chelsey D. Sanders', 20),
-- (4153, 'Dorothy W. Ford', 16),
-- (5525, 'Penny J. Cormier', 6);

SELECT l.name, l.customers_number
FROM lawyers l
WHERE l.customers_number = (SELECT MAX(customers_number) FROM lawyers)

UNION ALL

SELECT l.name, l.customers_number
FROM lawyers l
WHERE l.customers_number = (SELECT MIN(customers_number) FROM lawyers)


UNION ALL

SELECT 'Average' AS name, ROUND(AVG(customers_number), 0) AS customers_number FROM lawyers;