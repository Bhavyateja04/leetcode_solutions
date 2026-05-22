# Write your MySQL query statement below
select user_id, last_stamp
from
(
    SELECT user_id, time_stamp as last_stamp, 
    dense_rank() over (partition by user_id order by time_stamp desc) as r 
    FROM Logins
    where time_stamp >= '2020-01-01 00:00:00' and time_stamp < '2021-01-01 00:00:00'     
) temp
where r = 1