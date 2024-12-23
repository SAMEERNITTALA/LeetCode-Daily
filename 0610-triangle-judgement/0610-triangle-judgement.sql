# Write your MySQL query statement below
select *, 
case 
    when abs(x+y) > abs(z) and abs(y+z) > abs(x) and abs(x+z) > abs(y) then 'Yes' 
    else 'No' 
end as triangle
from Triangle;