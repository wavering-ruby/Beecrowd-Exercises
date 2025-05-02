-- -- Criação da tabela
-- CREATE TABLE students (
--     id INT PRIMARY KEY,
--     name VARCHAR(100),
--     grade NUMERIC(3,1)
-- );

-- -- Inserção dos dados
-- INSERT INTO students (id, name, grade) VALUES
-- (1, 'Terry B. Padilla', 7.3),
-- (2, 'William S. Ray', 0.6),
-- (3, 'Barbara A. Gongora', 5.2),
-- (4, 'Julie B. Manzer', 6.7),
-- (5, 'Teresa J. Axtell', 4.6),
-- (6, 'Ben M. Dantzler', 9.6);

SELECT CONCAT('Approved: ', s.name), s.grade
FROM students s
WHERE grade >= 7.0
ORDER BY grade DESC;