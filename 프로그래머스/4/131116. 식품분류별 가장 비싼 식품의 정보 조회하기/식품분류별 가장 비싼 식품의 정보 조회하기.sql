select category, price, product_name
from food_product
where category in ('과자', '식용유', '국', '김치')
    and (category, price) in (select category, max(price) from food_product group by category)
order by price desc
