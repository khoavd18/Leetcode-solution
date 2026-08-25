SELECT
    current_day.id
FROM Weather AS current_day
JOIN Weather AS previous_day
    ON DATEDIFF(
        current_day.recordDate,
        previous_day.recordDate
    ) = 1
WHERE current_day.temperature > previous_day.temperature;
