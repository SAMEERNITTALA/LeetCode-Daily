# Write your MySQL query statement below
with cte as 
(
    select player_id,
    event_date,
    dense_rank() over (partition by player_id order by event_date) as ranks
    from Activity
)
select player_id, event_date as first_login from cte where ranks = 1;