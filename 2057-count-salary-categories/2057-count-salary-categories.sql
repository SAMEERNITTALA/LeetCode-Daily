# Write your MySQL query statement below
select 'High Salary' as category, sum(case when income > 50000 then 1 else 0 end) as accounts_count
from Accounts
union
select 'Average Salary' as category, sum(case when 20000 <= income and income <= 50000 then 1 else 0 end) as accounts_count 
from Accounts
union
select 'Low Salary' as category, sum(case when income < 20000 then 1 else 0 end) as accounts_count
from Accounts;
     