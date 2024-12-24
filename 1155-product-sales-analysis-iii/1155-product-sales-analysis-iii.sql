# Write your MySQL query statement below
with First_year_sales as
(select product_id, min(year) as first_year from Sales group by product_id)
select s.product_id,
f.first_year, s.quantity,
s.price from
First_year_sales f inner join Sales s
on f.product_id = s.product_id and f.first_year = s.year;