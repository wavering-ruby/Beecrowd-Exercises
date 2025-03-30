-- CREATE TABLE providers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(150) NOT NULL,
--     street VARCHAR(100) NOT NULL,
--     city VARCHAR(50) NOT NULL,
--     state CHAR(2) NOT NULL
-- );

-- CREATE TABLE products (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(150) NOT NULL,
--     amount INT NOT NULL,
--     price DECIMAL(10,2) NOT NULL,
--     id_providers INT NOT NULL,
--     CONSTRAINT fk_products_providers FOREIGN KEY (id_providers) REFERENCES providers(id)
-- );

-- INSERT INTO providers (id, name, street, city, state) VALUES
-- (1, 'Ajax SA', 'Rua Presidente Castelo Branco', 'Porto Alegre', 'RS'),
-- (2, 'Sansul SA', 'Av Brasil', 'Rio de Janeiro', 'RJ'),
-- (3, 'Pr Sheppard Chairs', 'Rua do Moinho', 'Santa Maria', 'RS'),
-- (4, 'Elon Electro', 'Rua Apolo', 'São Paulo', 'SP'),
-- (5, 'Mike Electro', 'Rua Pedro da Cunha', 'Curitiba', 'PR');

-- INSERT INTO products (id, name, amount, price, id_providers) VALUES
-- (1, 'Blue Chair', 30, 300.00, 5),
-- (2, 'Red Chair', 50, 2150.00, 2),
-- (3, 'Disney Wardrobe', 400, 829.50, 4),
-- (4, 'Executive Chair', 17, 9.90, 3),
-- (5, 'Solar Panel', 30, 3000.25, 4);

SELECT pd.name
FROM products pd
INNER JOIN providers pv
ON pv.id = pd.id_providers
WHERE pv.name LIKE 'P%' AND pd.amount BETWEEN 10 AND 20;