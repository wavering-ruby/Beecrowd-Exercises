-- CREATE TABLE products (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(255) NOT NULL,
--     amount NUMERIC NOT NULL,
--     price NUMERIC(10,2) NOT NULL
-- );

-- INSERT INTO products (name, amount, price) VALUES
-- ('Two-doors wardrobe', 100, 800.00),
-- ('Dining table', 1000, 560.00),
-- ('Towel holder', 10000, 25.50),
-- ('Computer desk', 350, 320.50),
-- ('Chair', 3000, 210.64),
-- ('Single bed', 750, 460.00);

SELECT MAX(p.price), MIN(p.price)
FROM products p;
