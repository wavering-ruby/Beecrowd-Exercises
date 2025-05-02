-- CREATE TABLE customers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(150) NOT NULL,
--     street VARCHAR(100) NOT NULL,
--     city VARCHAR(50) NOT NULL,
--     state CHAR(2) NOT NULL,
--     credit_limit DECIMAL(10,2) NOT NULL
-- );

-- CREATE TABLE legal_person (
--     id_customers INT PRIMARY KEY,
--     cnpj VARCHAR(14) NOT NULL UNIQUE,
--     contact VARCHAR(15) NOT NULL,
--     CONSTRAINT fk_legal_person_customers FOREIGN KEY (id_customers) REFERENCES customers(id)
-- );

-- INSERT INTO customers (id, name, street, city, state, credit_limit) VALUES
-- (1, 'Nicolas Diogo Cardoso', 'Acesso Um', 'Porto Alegre', 'RS', 475),
-- (2, 'Cecília Olivia Rodrigues', 'Rua Sizuka Usuy', 'Cianorte', 'PR', 3170),
-- (3, 'Augusto Fernando Carlos Eduardo Cardoso', 'Rua Baldomiro Koerich', 'Palhoça', 'SC', 1067),
-- (4, 'Nicolas Diogo Cardoso', 'Acesso Um', 'Porto Alegre', 'RS', 475),
-- (5, 'Sabrina Heloisa Gabriela Barros', 'Rua Engenheiro Tito Marques Fernandes', 'Porto Alegre', 'RS', 4312),
-- (6, 'Joaquim Diego Lorenzo Araújo', 'Rua Vitorino', 'Novo Hamburgo', 'RS', 2314);

-- INSERT INTO legal_person (id_customers, cnpj, contact) VALUES
-- (4, '85883842000191', '99767-0562'),
-- (5, '47773848000117', '99100-8965');

SELECT c.name
FROM customers c
INNER JOIN legal_person l
ON c.id = l.id_customers;