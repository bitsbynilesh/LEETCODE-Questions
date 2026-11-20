# Write your MySQL query statement below
select user_id,
CONCAT(UPPER(left(name,1)),LOWER(substr(name,2))) as name
from users
order by user_id;


