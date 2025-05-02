-- CREATE TABLE virus (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(20) NOT NULL
-- );

-- INSERT INTO virus (id, name) VALUES
-- (1, 'H1RT'),
-- (2, 'H7H1'),
-- (3, 'HUN8'),
-- (4, 'XH1HX'),
-- (5, 'XXXX');

SELECT REPLACE(v.name, 'H1', 'X')
FROM virus v;