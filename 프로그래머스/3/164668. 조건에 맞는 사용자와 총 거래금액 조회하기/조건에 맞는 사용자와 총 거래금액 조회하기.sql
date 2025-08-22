select user_id, nickname, sum(price) as total_sales
from used_goods_board b, used_goods_user u
where user_id = writer_id and status = 'done'
group by user_id
having sum(price) >= 700000
order by total_sales