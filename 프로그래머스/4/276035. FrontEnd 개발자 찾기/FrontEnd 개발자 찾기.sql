select distinct id, email, first_name, last_name
from developers d, skillcodes s
where s.code = s.code & d.skill_code
    and s.category like 'Front%'
order by id