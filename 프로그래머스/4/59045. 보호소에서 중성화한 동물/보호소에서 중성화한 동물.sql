select i.animal_id, i.animal_type, i.name
from animal_ins i, animal_outs o
where i.animal_id = o.animal_id
    and i.sex_upon_intake != o.sex_upon_outcome