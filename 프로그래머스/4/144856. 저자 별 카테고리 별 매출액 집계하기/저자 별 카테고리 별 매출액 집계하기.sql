select b.author_id, author_name, category, sum(price * sales) as total_sales
from book b, author a, book_sales s
where b.author_id = a.author_id
    and b.book_id = s.book_id
    and year(sales_date) = '2022'
    and month(sales_date) = '01'
group by b.author_id, category
order by b.author_id, category desc