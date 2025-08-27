select p.product_id, product_name, sum(amount * price) as total_sales
from food_product p, food_order o
where p.product_id = o.product_id
    and year(produce_date) = '2022'
    and month(produce_date) = '05'
group by p.product_id
order by total_sales desc, p.product_id