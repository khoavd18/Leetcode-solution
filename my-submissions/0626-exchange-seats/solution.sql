WITH seat_info AS (
    SELECT id,
            student,
            MAX(id) OVER() AS last_id
    FROM Seat
)
SELECT 
    CASE 
        WHEN id % 2 = 0 THEN id - 1
        WHEN id % 2 = 1 AND id < last_id THEN id + 1
        ELSE id
    END AS id,
    student
FROM seat_info
ORDER BY id 
