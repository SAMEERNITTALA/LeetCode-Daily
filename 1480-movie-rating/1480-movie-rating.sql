# Write your MySQL query statement below
(
    select u.name as results
    from Users u inner join MovieRating mr 
    on u.user_id = mr.user_id
    group by u.user_id
    order by count(mr.movie_id) desc, u.name
    limit 1
)
union all
(
    select m.title as results
    from Movies m inner join MovieRating mr
    on m.movie_id = mr.movie_id
    where date_format(mr.created_at, '%Y-%m') = '2020-02'
    group by m.movie_id
    order by avg(mr.rating) desc, m.title
    limit 1
);