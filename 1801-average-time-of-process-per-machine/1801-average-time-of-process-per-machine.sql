# Write your MySQL query statement below
select a.machine_id,
round(avg(case when a.activity_type = "end" then a.timestamp end) - avg(case when a.activity_type = "start" then a.timestamp end), 3) as processing_time
from Activity a
group by a.machine_id;