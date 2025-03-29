-- CREATE TABLE categories (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(50) NOT NULL
-- );

-- CREATE TABLE products (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     amount INT NOT NULL,
--     price DECIMAL(10,2) NOT NULL,
--     id_categories INT NOT NULL,
--     CONSTRAINT fk_products_categories FOREIGN KEY (id_categories) REFERENCES categories(id)
-- );

-- INSERT INTO categories (id, name) VALUES
-- (1, 'wood'),
-- (2, 'luxury'),
-- (3, 'vintage'),
-- (4, 'modern'),
-- (5, 'super luxury');

-- INSERT INTO products (id, name, amount, price, id_categories) VALUES
-- (1, 'Two-doors wardrobe', 100, 800.00, 1),
-- (2, 'Dining table', 1000, 560.00, 3),
-- (3, 'Towel holder', 10000, 25.50, 4),
-- (4, 'Computer desk', 350, 320.50, 2),
-- (5, 'Chair', 3000, 210.64, 4),
-- (6, 'Single bed', 750, 460.00, 1);

SELECT c.name, SUM(p.amount)
FROM categories c 
INNER JOIN products p 
ON c.id = p.id_categories
GROUP BY c.name;
