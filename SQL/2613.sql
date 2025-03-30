CREATE TABLE prices (
    id SERIAL PRIMARY KEY,
    categorie VARCHAR(50) NOT NULL,
    value DECIMAL(5,2) NOT NULL
);

CREATE TABLE movies (
    id SERIAL PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    id_prices INT NOT NULL,
    CONSTRAINT fk_movies_prices FOREIGN KEY (id_prices) REFERENCES prices(id)
);

INSERT INTO prices (id, categorie, value) VALUES
(1, 'Releases', 3.50),
(2, 'Bronze Seal', 2.00),
(3, 'Silver Seal', 2.50),
(4, 'Gold Seal', 3.00),
(5, 'Promotion', 1.50);

INSERT INTO movies (id, name, id_prices) VALUES
(1, 'Batman', 3),
(2, 'The Battle of the Dark River', 3),
(3, 'White Duck', 5),
(4, 'Breaking Barriers', 4),
(5, 'The Two Hours', 2);

SELECT m.id, m.name
FROM movies m
INNER JOIN prices p
ON m.id_prices = p.id
WHERE p.value < 2.00;