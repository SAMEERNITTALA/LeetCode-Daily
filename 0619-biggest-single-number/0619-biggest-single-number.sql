# Write your MySQL query statement below
WITH cte AS (
  SELECT num
  FROM MyNumbers
  GROUP BY num
  HAVING COUNT(*) = 1
)
SELECT MAX(num) AS num
FROM cte;

