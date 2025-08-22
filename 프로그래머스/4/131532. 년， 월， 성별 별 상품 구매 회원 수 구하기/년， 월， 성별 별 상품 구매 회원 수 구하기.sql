select year(sales_date) year, month(sales_date) month, gender, count(distinct o.user_id) users
from online_sale o, user_info u
where o.user_id = u.user_id
    and gender is not null
group by year, month, gender
order by year, month, gender