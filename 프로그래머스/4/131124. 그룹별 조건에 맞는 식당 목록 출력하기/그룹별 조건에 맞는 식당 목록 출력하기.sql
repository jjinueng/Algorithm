select member_name, review_text, date_format(review_date, '%Y-%m-%d') as review_date
from rest_review r, member_profile m
where m.member_id = r.member_id
having member_name = (select member_name from rest_review r, member_profile m where r.member_id = m.member_id group by member_name order by count(member_name) desc limit 1)
order by review_date, review_text