-- CREATE TABLE providers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     street VARCHAR(100) NOT NULL,
--     city VARCHAR(50) NOT NULL,
--     state CHAR(2) NOT NULL
-- );

-- CREATE TABLE products (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     amount INT NOT NULL,
--     value DECIMAL(10,2) NOT NULL,
--     id_providers INT NOT NULL,
--     CONSTRAINT fk_products_providers FOREIGN KEY (id_providers) REFERENCES providers(id)
-- );

-- INSERT INTO providers (id, name, street, city, state) VALUES
-- (1, 'Ajax SA', 'Presidente Castelo Branco', 'Porto Alegre', 'RS'),
-- (2, 'Sansul SA', 'Av Brasil', 'Rio de Janeiro', 'RJ'),
-- (3, 'South Chairs', 'Av Moinho', 'Santa Maria', 'RS'),
-- (4, 'Elon Electro', 'Apolo', 'São Paulo', 'SP'),
-- (5, 'Mike Electro', 'Pedro da Cunha', 'Curitiba', 'PR');

-- INSERT INTO products (id, name, amount, value, id_providers) VALUES
-- (1, 'Blue Chair', 30, 300.00, 5),
-- (2, 'Red Chair', 50, 2150.00, 1),
-- (3, 'Disney Wardrobe', 400, 829.50, 4),
-- (4, 'Blue Toaster', 20, 9.90, 3),
-- (5, 'Solar Panel', 30, 3000.25, 4);

SELECT pd.name, pr.name
FROM providers pr
INNER JOIN products pd
ON pr.id = pd.id_providers
WHERE pr.name = 'Ajax SA';