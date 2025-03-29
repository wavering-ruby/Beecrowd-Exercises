-- -- Creating the table
-- CREATE TABLE providers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     street VARCHAR(150) NOT NULL,
--     city VARCHAR(100) NOT NULL,
--     state VARCHAR(2) NOT NULL
-- );

-- -- Inserting values
-- INSERT INTO clientes (id, name, street, city, state) VALUES
-- (1, 'Henrique', 'Av Brasil', 'Rio de Janeiro', 'RJ'),
-- (2, 'Marcelo Augusto', 'Rua Imigrantes', 'Belo Horizonte', 'MG'),
-- (3, 'Caroline Silva', 'Av São Paulo', 'Salvador', 'BA'),
-- (4, 'Guilerme Staff', 'Rua Central', 'Porto Alegre', 'RS'),
-- (5, 'Isabela Moraes', 'Av Juiz Grande', 'Curitiba', 'PR'),
-- (6, 'Francisco Accerr', 'Av Paulista', 'São Paulo', 'SP');

SELECT p.city
FROM clientes p
ORDER BY p.city ASC