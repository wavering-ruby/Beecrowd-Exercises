-- CREATE TABLE genres (
--     id SERIAL PRIMARY KEY,
--     description VARCHAR(50) NOT NULL
-- );

-- CREATE TABLE movies (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     id_genres INT NOT NULL,
--     CONSTRAINT fk_movies_genres FOREIGN KEY (id_genres) REFERENCES genres(id)
-- );

-- INSERT INTO genres (id, description) VALUES
-- (1, 'Animation'),
-- (2, 'Horror'),
-- (3, 'Action'),
-- (4, 'Drama'),
-- (5, 'Comedy');

-- INSERT INTO movies (id, name, id_genres) VALUES
-- (1, 'Batman', 3),
-- (2, 'The Battle of the Dark River', 3),
-- (3, 'White Duck', 1),
-- (4, 'Breaking Barriers', 4),
-- (5, 'The Two Hours', 2);

SELECT m.id, m.name
FROM movies m
INNER JOIN genres g
ON g.id = m.id_genres
WHERE g.description = 'Action';
