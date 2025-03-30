-- CREATE TABLE customers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     street VARCHAR(100) NOT NULL,
--     city VARCHAR(50) NOT NULL
-- );

-- CREATE TABLE rentals (
--     id SERIAL PRIMARY KEY,
--     rentals_date DATE NOT NULL,
--     id_customers INT NOT NULL,
--     CONSTRAINT fk_rentals_customers FOREIGN KEY (id_customers) REFERENCES customers(id)
-- );

-- INSERT INTO customers (id, name, street, city) VALUES
-- (1, 'Giovanna Goncalves Oliveira', 'Rua Mato Grosso', 'Canoas'),
-- (2, 'Kauã Azevedo Ribeiro', 'Travessa Ibiá', 'Uberlândia'),
-- (3, 'Rebeca Barbosa Santos', 'Rua Observatório Meteorológico', 'Salvador'),
-- (4, 'Sarah Carvalho Correia', 'Rua Antônio Carlos da Silva', 'Apucarana'),
-- (5, 'João Almeida Lima', 'Rua Rio Taiuva', 'Ponta Grossa'),
-- (6, 'Diogo Melo Dias', 'Rua Duzentos e Cinqüenta', 'Várzea Grande');

-- INSERT INTO rentals (id, rentals_date, id_customers) VALUES
-- (1, '2016-09-10', 3),
-- (2, '2016-02-09', 1),
-- (3, '2016-02-08', 4),
-- (4, '2016-02-09', 2),
-- (5, '2016-02-03', 6),
-- (6, '2016-04-04', 4);

SELECT c.name, r.rentals_date
FROM customers c
INNER JOIN rentals r
ON r.id_customers = c.id
WHERE r.rentals_date >= '2016-09-01' AND r.rentals_date <= '2016-09-30'