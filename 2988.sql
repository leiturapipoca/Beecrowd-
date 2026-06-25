SELECT
t.name,
COUNT(t.id) AS matches,
SUM(
CASE 
WHEN (t.id = m.team_1 AND  m.team_1_goals>m.team_2_goals) 
THEN 1
WHEN (t.id = m.team_2 AND m.team_2_goals>m.team_1_goals) THEN 1
ELSE 0
END
) as victories,

SUM(
CASE
WHEN (t.id = m.team_1 AND m.team_1_goals<m.team_2_goals) THEN 1
WHEN (t.id = m.team_2 AND m.team_2_goals<m.team_1_goals) THEN 1
ELSE 0
END
) as defeats,
SUM(
CASE
WHEN (t.id = m.team_1 AND m.team_1_goals = m.team_2_goals) THEN 1
WHEN (t.id = m.team_2 AND m.team_2_goals = m.team_1_goals) THEN 1
ELSE 0
END

) as draws,

SUM(
CASE
WHEN (t.id = m.team_1 AND m.team_1_goals > m.team_2_goals) THEN 3
WHEN (t.id = m.team_2 AND m.team_2_goals > m.team_1_goals) THEN 3
WHEN (m.team_1_goals = m.team_2_goals) THEN 1
ELSE 0
END
) as score

FROM teams AS t LEFT JOIN matches AS m ON t.id = m.team_1 
OR t.id = m.team_2

GROUP BY
t.name,
t.id
ORDER BY score DESC, t.name ASC



