-- CREATE TABLE customers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(255) NOT NULL,
--     street VARCHAR(255) NOT NULL,
--     city VARCHAR(100) NOT NULL,
--     state CHAR(2) NOT NULL,
--     credit_limit DECIMAL(10,2) NOT NULL CHECK (credit_limit >= 0)
-- );

-- INSERT INTO customers (id, name, street, city, state, credit_limit) VALUES
-- (1, 'Nicolas Diogo Cardoso', 'Acesso Um', 'Porto Alegre', 'RS', 475),
-- (2, 'Cecília Olivia Rodrigues', 'Rua Sizuka Usuy', 'Cianorte', 'PR', 3170),
-- (3, 'Augusto Fernando Carlos Eduardo Cardoso', 'Rua Baldomiro Koerich', 'Palhoça', 'SC', 1067),
-- (4, 'Nicolas Diogo Cardoso', 'Acesso Um', 'Porto Alegre', 'RS', 475),
-- (5, 'Sabrina Heloisa Gabriela Barros', 'Rua Engenheiro Tito Marques Fernandes', 'Porto Alegre', 'RS', 4312),
-- (6, 'Joaquim Diego Lorenzo Araújo', 'Rua Vitorino', 'Novo Hamburgo', 'RS', 2314);

-- Versão por subconsulta com tabela temporária.
-- SELECT COUNT(*) FROM (SELECT DISTINCT city FROM customers) AS temp;

SELECT COUNT(DISTINCT city) FROM customers;