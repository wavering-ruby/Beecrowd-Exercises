-- CREATE TABLE value_table (
--     id SERIAL PRIMARY KEY,
--     amount INTEGER
-- );

-- INSERT INTO amounts (amount) VALUES
-- (4),
-- (6),
-- (7),
-- (1),
-- (1),
-- (2),
-- (3),
-- (2),
-- (3),
-- (1),
-- (5),
-- (6),
-- (1),
-- (7),
-- (8),
-- (9),
-- (10),
-- (11),
-- (12),
-- (4),
-- (5),
-- (5),
-- (3),
-- (6),
-- (2),
-- (2),
-- (1);

SELECT v.amount
FROM value_table v
WHERE amount = (
  SELECT MAX(t.amount)
  FROM value_table t
  GROUP BY t.amount
  ORDER BY COUNT(*) DESC
  LIMIT 1
)
GROUP BY v.amount;
