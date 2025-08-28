select apnt_no, pt_name, p.pt_no, a.mcdp_cd, dr_name, apnt_ymd
from patient p, doctor d, appointment a
where p.pt_no = a.pt_no
    and d.dr_id = a.mddr_id
    and date(apnt_ymd) = '2022-04-13'
    and apnt_cncl_yn = 'N'
    and a.mcdp_cd = 'CS'
order by apnt_ymd