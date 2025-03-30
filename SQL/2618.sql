-- CREATE TABLE providers (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     street VARCHAR(100) NOT NULL,
--     city VARCHAR(50) NOT NULL,
--     state CHAR(2) NOT NULL
-- );

-- CREATE TABLE categories (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(50) NOT NULL
-- );

-- CREATE TABLE products (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     amount INT NOT NULL,
--     price DECIMAL(10,2) NOT NULL,
--     id_providers INT NOT NULL,
--     id_categories INT NOT NULL,
--     CONSTRAINT fk_products_providers FOREIGN KEY (id_providers) REFERENCES providers(id),
--     CONSTRAINT fk_products_categories FOREIGN KEY (id_categories) REFERENCES categories(id)
-- );

-- INSERT INTO providers (id, name, street, city, state) VALUES
-- (1, 'Ajax SA', 'Rua Presidente Castelo Branco', 'Porto Alegre', 'RS'),
-- (2, 'Sansul SA', 'Av Brasil', 'Rio de Janeiro', 'RJ'),
-- (3, 'South Chairs', 'Rua do Moinho', 'Santa Maria', 'RS'),
-- (4, 'Elon Electro', 'Rua Apolo', 'São Paulo', 'SP'),
-- (5, 'Mike Electro', 'Rua Pedro da Cunha', 'Curitiba', 'PR');

-- INSERT INTO categories (id, name) VALUES
-- (1, 'Super Luxury'),
-- (2, 'Imported'),
-- (3, 'Tech'),
-- (4, 'Vintage'),
-- (5, 'Supreme');

-- INSERT INTO products (id, name, amount, price, id_providers, id_categories) VALUES
-- (1, 'Blue Chair', 30, 300.00, 5, 5),
-- (2, 'Red Chair', 50, 2150.00, 2, 1),
-- (3, 'Disney Wardrobe', 400, 829.50, 4, 1),
-- (4, 'Blue Toaster', 20, 9.90, 3, 1),
-- (5, 'TV', 30, 3000.25, 2, 2);

SELECT pd.name, pr.name, c.name
FROM providers pr
INNER JOIN products pd
ON pr.id = pd.id_providers
INNER JOIN categories c
ON c.id = pd.id_categories
WHERE pr.name = 'Sansul SA' AND c.name = 'Imported';