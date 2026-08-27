WITH daily_amount AS (
    SELECT visited_on,
            SUM(amount) AS daily_total
    FROM Customer
    GROUP BY visited_on
),
rolling_amount AS (
    SELECT visited_on,
            SUM(daily_total) OVER (
                ORDER BY visited_on
                ROWS BETWEEN 6 PRECEDING AND CURRENT ROW 
            ) AS amount,
            ROW_NUMBER() OVER (
                ORDER BY visited_on
            ) AS day_number
    FROM daily_amount
)
SELECT visited_on,
        amount,
        ROUND(amount/7.0 , 2) AS average_amount
FROM rolling_amount
WHERE day_number >= 7


