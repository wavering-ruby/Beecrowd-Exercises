-- CREATE TABLE league (
--     position INT PRIMARY KEY,
--     team VARCHAR(50) NOT NULL
-- );

-- INSERT INTO league (position, team) VALUES
-- (1, 'The Quack Bats'),
-- (2, 'The Responsible Hornets'),
-- (3, 'The Bawdy Dolphins'),
-- (4, 'The Abstracted Sharks'),
-- (5, 'The Nervous Zebras'),
-- (6, 'The Oafish Owls'),
-- (7, 'The Unequaled Bison'),
-- (8, 'The Keen Kangaroos'),
-- (9, 'The Left Nightingales'),
-- (10, 'The Terrific Elks'),
-- (11, 'The Lumpy Frogs'),
-- (12, 'The Swift Buffalo'),
-- (13, 'The Big Chargers'),
-- (14, 'The Rough Robins'),
-- (15, 'The Silver Crocs');

-- Um problema com o código é por ter dois ORDER BY, que conflita com o UNION ALL, portanto, tive
-- que transformar os dois em subconsulta para poder mesclar os dados, essa foi a minha primeira resolução
-- porém, dei overthinking, então recomendo a segunda versão
-- (SELECT CONCAT('Podium: ', l.team) AS name
-- FROM league l
-- ORDER BY l.position ASC
-- LIMIT 3)

-- UNION ALL

-- (SELECT CONCAT('Demoted: ', sub.team) AS name
-- FROM (
--   SELECT team, position
--   FROM league
--   ORDER BY position DESC
--   LIMIT 2
-- ) AS sub
-- ORDER BY sub.position ASC);

-- Está aqui uma versão mais simples para resolução do problema e mais otimizada, claro.
(SELECT CONCAT('Podium: ', l.team) as name
FROM league l
WHERE position <= 3)

UNION ALL

(SELECT CONCAT('Demoted: ', l.team) as name
FROM league l
WHERE position >= 14)
