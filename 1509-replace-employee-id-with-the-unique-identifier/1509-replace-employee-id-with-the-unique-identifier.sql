# Write your MySQL query statement below
SELECT u.unique_id, v.name FROM EmployeeUNI u RIGHT JOIN Employees v ON v.id = u.id; 