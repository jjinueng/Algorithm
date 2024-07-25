-- 코드를 작성해주세요
select concat(length,'cm') 'MAX_LENGTH'
from fish_info
where length = all(select max(length) from fish_info);