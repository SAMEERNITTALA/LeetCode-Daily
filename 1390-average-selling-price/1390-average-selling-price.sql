# Write your MySQL query statement below
SELECT 
    A.product_id, 
    IFNULL(round((SUM(price * units) / SUM(units)), 2), 0) AS average_price
FROM 
    Prices A
LEFT JOIN 
    UnitsSold B
ON 
    A.product_id = B.product_id
AND 
    B.purchase_date BETWEEN A.start_date AND A.end_date
GROUP BY 
    A.product_id;