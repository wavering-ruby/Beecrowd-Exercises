-- CREATE TABLE customers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     street VARCHAR(100) NOT NULL,
--     city VARCHAR(50) NOT NULL
-- );

-- CREATE TABLE locations (
--     id SERIAL PRIMARY KEY,
--     locations_date DATE NOT NULL,
--     id_customers INT NOT NULL,
--     CONSTRAINT fk_locations_customers FOREIGN KEY (id_customers) REFERENCES customers(id)
-- );

-- INSERT INTO customers (id, name, street, city) VALUES
-- (1, 'Giovanna Goncalves Oliveira', 'Rua Mato Grosso', 'Canoas'),
-- (2, 'Kauã Azevedo Ribeiro', 'Travessa Ibiá', 'Uberlândia'),
-- (3, 'Rebeca Barbosa Santos', 'Rua Observatório Meteorológico', 'Salvador'),
-- (4, 'Sarah Carvalho Correia', 'Rua Antônio Carlos da Silva', 'Apucarana'),
-- (5, 'João Almeida Lima', 'Rua Rio Taiuva', 'Ponta Grossa'),
-- (6, 'Diogo Melo Dias', 'Rua Duzentos e Cinqüenta', 'Várzea Grande');

-- INSERT INTO locations (id, locations_date, id_customers) VALUES
-- (1, '2016-10-09', 3),
-- (2, '2016-09-02', 1),
-- (3, '2016-08-02', 4),
-- (4, '2016-09-02', 2),
-- (5, '2016-03-02', 6),
-- (6, '2016-04-04', 4);

SELECT c.id, c.name
FROM customers c
LEFT JOIN locations l
ON c.id = l.id_customers
WHERE l.id IS NULL
ORDER BY c.id;