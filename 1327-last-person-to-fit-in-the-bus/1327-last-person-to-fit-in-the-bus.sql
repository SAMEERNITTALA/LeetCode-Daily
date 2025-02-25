# Write your MySQL query statement below
with boardList as
(select person_name, 
sum(weight) over(order by turn) as total_weight from Queue)
select person_name from boardList where total_weight <= 1000 
order by total_weight desc limit 1;