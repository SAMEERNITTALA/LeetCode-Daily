# Write your MySQL query statement below
with cte as 
(select product_id, min(year) as first_year from Sales group by product_id)
select s.product_id, c.first_year, s.quantity, s.price
from cte c inner join Sales s on c.product_id = s.product_id and c.first_year = s.year;