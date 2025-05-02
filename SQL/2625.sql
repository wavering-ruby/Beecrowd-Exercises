-- -- Criando a tabela customers
-- CREATE TABLE customers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(255) NOT NULL,
--     street VARCHAR(255) NOT NULL,
--     city VARCHAR(100) NOT NULL,
--     state CHAR(2) NOT NULL,
--     credit_limit DECIMAL(10, 2) NOT NULL
-- );

-- INSERT INTO customers (id, name, street, city, state, credit_limit) VALUES
-- (1, 'Nicolas Diogo Cardoso', 'Acesso Um', 'Porto Alegre', 'RS', 475),
-- (2, 'Cecília Olivia Rodrigues', 'Rua Sizuka Usuy', 'Cianorte', 'PR', 3170),
-- (3, 'Augusto Fernando Carlos Eduardo Cardoso', 'Rua Baldomiro Koerich', 'Palhoça', 'SC', 1067),
-- (4, 'Nicolas Diogo Cardoso', 'Acesso Um', 'Porto Alegre', 'RS', 475),
-- (5, 'Sabrina Heloisa Gabriela Barros', 'Rua Engenheiro Tito Marques Fernandes', 'Porto Alegre', 'RS', 4312),
-- (6, 'Joaquim Diego Lorenzo Araújo', 'Rua Vitorino', 'Novo Hamburgo', 'RS', 2314);

-- CREATE TABLE natural_person (
--     id_customers INT PRIMARY KEY,
--     cpf CHAR(11) NOT NULL UNIQUE,
--     FOREIGN KEY (id_customers) REFERENCES customers(id) ON DELETE CASCADE
-- );

-- INSERT INTO natural_person (id_customers, cpf) VALUES
-- (1, '26774287840'),
-- (2, '97918477200');


SELECT
    CONCAT(
        SUBSTRING(cpf FROM 1 FOR 3), '.', 
        SUBSTRING(cpf FROM 4 FOR 3), '.', 
        SUBSTRING(cpf FROM 7 FOR 3), '-', 
        SUBSTRING(cpf FROM 10 FOR 2)
    )
FROM natural_person np
INNER JOIN customers c
ON c.id = np.id_customers;