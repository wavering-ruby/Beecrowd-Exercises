-- CREATE TABLE customers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     street VARCHAR(100) NOT NULL,
--     city VARCHAR(50) NOT NULL
-- );

-- INSERT INTO customers (id, name, street, city) VALUES
-- (1, 'Giovanna Goncalves Oliveira', 'Rua Mato Grosso', 'Canoas'),
-- (2, 'Kauã Azevedo Ribeiro', 'Travessa Ibiá', 'Uberlândia'),
-- (3, 'Rebeca Barbosa Santos', 'Rua Observatório Meteorológico', 'Salvador'),
-- (4, 'Sarah Carvalho Correia', 'Rua Antônio Carlos da Silva', 'Uberlândia'),
-- (5, 'João Almeida Lima', 'Rua Rio Taiuva', 'Ponta Grossa'),
-- (6, 'Diogo Melo Dias', 'Rua Duzentos e Cinqüenta', 'Várzea Grande');

SELECT c.city
FROM customers c
GROUP BY c.city