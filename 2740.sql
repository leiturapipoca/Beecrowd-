(SELECT
'Podium: ' || league.team AS name

FROM league
ORDER BY  league.position ASC
LIMIT 3
)
UNION ALL 

(
SELECT
'Demoted: ' || league.team as name
FROM league
WHERE position IN (14, 15)
)
