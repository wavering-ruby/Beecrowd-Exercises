-- CREATE TABLE categories (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL UNIQUE
-- );

-- CREATE TABLE products (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(150) NOT NULL,
--     amount INT NOT NULL CHECK (amount >= 0),
--     price DECIMAL(10,2) NOT NULL CHECK (price >= 0),
--     id_categories INT NOT NULL,
--     CONSTRAINT fk_products_categories FOREIGN KEY (id_categories) REFERENCES categories(id)
-- );

-- INSERT INTO categories (id, name) VALUES
-- (1, 'Superior'),
-- (2, 'Super Luxury'),
-- (3, 'Modern'),
-- (4, 'Nerd'),
-- (5, 'Infantile'),
-- (6, 'Robust'),
-- (9, 'Wood');

-- INSERT INTO products (id, name, amount, price, id_categories) VALUES
-- (1, 'Blue Chair', 30, 300.00, 9),
-- (2, 'Red Chair', 200, 2150.00, 2),
-- (3, 'Disney Wardrobe', 400, 829.50, 4),
-- (4, 'Blue Toaster', 20, 9.90, 3),
-- (5, 'Solar Panel', 30, 3000.25, 4);

SELECT p.name, c.name
FROM categories c
INNER JOIN products p
ON c.id = p.id_categories
WHERE p.amount > 100 AND (c.id = 1 OR c.id = 2 OR c.id = 3 OR c.id = 6 OR c.id = 9)
ORDER BY c.id;