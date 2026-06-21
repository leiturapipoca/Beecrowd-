SELECT 
c.name,
ROUND((s.math*2 + s.specific*3 + s.project_plan*5)/10.0, 2) AS avg

FROM candidate as c JOIN score as s ON c.id = s.candidate_id
ORDER BY avg DESC
