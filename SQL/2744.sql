-- CREATE TABLE account (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(100),
--     login VARCHAR(50),
--     password VARCHAR(50)
-- );

-- INSERT INTO account (id, name, login, password) VALUES
-- (1, 'Joyce P. Parry', 'Promeraw', 'noh1Oozei'),
-- (2, 'Michael T. Gonzalez', 'Phers1942', 'Iath3see9bi'),
-- (3, 'Heather W. Lawless', 'Hankicht', 'diShono4'),
-- (4, 'Otis C. Hitt', 'Conalothe', 'zooFohH7w'),
-- (5, 'Roger N. Brownfield', 'Worseente', 'fah7ohNg');

SELECT a.id, a.password, MD5(a.password)
FROM account a;