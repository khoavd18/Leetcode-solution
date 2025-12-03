(
    SELECT u.name AS results
    FROM Users u
    JOIN MovieRating mr ON u.user_id = mr.user_id 
    GROUP BY u.user_id, u.name
    ORDER BY COUNT(*) DESC, 
            u.name ASC
    LIMIT 1
)
UNION ALL
(
    SELECT 
        m.title AS results
    FROM Movies m
    JOIN MovieRating mr 
        ON m.movie_id = mr.movie_id
    WHERE 
        mr.created_at >= '2020-02-01'
        AND mr.created_at <= '2020-02-29'   -- tháng 2/2020
        -- hoặc: DATE_FORMAT(mr.created_at, '%Y-%m') = '2020-02'
    GROUP BY 
        m.movie_id, m.title
    ORDER BY 
        AVG(mr.rating) DESC,  -- trung bình rating cao nhất
        m.title ASC           -- nếu hòa thì title nhỏ hơn
    LIMIT 1 
)
