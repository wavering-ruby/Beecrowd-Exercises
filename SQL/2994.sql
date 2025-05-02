-- CREATE TABLE doctors (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(50) NOT NULL
-- );

-- INSERT INTO doctors (id, name) VALUES
-- (1, 'Arlino'),
-- (2, 'Tiago'),
-- (3, 'Amanda'),
-- (4, 'Wellington');

-- CREATE TABLE work_shifts (
--     id SERIAL PRIMARY KEY,
--     name VARCHAR(30) NOT NULL,
--     bonus NUMERIC NOT NULL
-- );

-- INSERT INTO work_shifts (id, name, bonus) VALUES
-- (1, 'nocturnal', 15),
-- (2, 'afternoon', 2),
-- (3, 'day', 1);

-- CREATE TABLE attendances (
--     id SERIAL PRIMARY KEY,
--     id_doctor INT REFERENCES doctors(id),
--     hours INT NOT NULL,
--     id_work_shift INT REFERENCES work_shifts(id)
-- );

-- INSERT INTO attendances (id, id_doctor, hours, id_work_shift) VALUES
-- (1, 1, 5, 1),
-- (2, 3, 2, 1),
-- (3, 3, 3, 2),
-- (4, 2, 2, 3),
-- (5, 1, 5, 3),
-- (6, 4, 1, 3),
-- (7, 4, 2, 1),
-- (8, 3, 2, 2),
-- (9, 2, 4, 2);

SELECT d.name, ROUND(SUM((150 * a.hours) + ((150 * a.hours) * (w.bonus / 100))), 1) as salary
FROM doctors d
INNER JOIN attendances a
ON a.id_doctor = d.id
INNER JOIN work_shifts w
ON w.id = a.id_work_shift
GROUP BY d.name
ORDER BY salary DESC;
