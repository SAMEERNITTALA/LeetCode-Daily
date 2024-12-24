# Write your MySQL query statement below
WITH PriceOnDate AS (
    SELECT 
        product_id,
        new_price,
        change_date
    FROM 
        Products
    WHERE 
        change_date <= '2019-08-16'
),
LatestPrice AS (
    SELECT 
        product_id,
        MAX(change_date) AS latest_change_date
    FROM 
        PriceOnDate
    GROUP BY 
        product_id
)
SELECT 
    p.product_id,
    COALESCE(pd.new_price, 10) AS price
FROM 
    (SELECT DISTINCT product_id FROM Products) p
LEFT JOIN 
    LatestPrice lp ON p.product_id = lp.product_id
LEFT JOIN 
    PriceOnDate pd ON lp.product_id = pd.product_id AND lp.latest_change_date = pd.change_date;

