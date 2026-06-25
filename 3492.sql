SELECT 
    c.nome_cidade,
    c.regiao,
    COUNT(DISTINCT p.ponto_id) AS qtd_pontos,
    ROUND(AVG(a.nota), 2) AS media_avaliacoes,
    RANK() OVER (PARTITION BY c.regiao ORDER BY AVG(a.nota) DESC) AS ranking_regional
FROM 
    Cidades c
JOIN 
    PontosTuristicos p ON c.cidade_id = p.cidade_id
LEFT JOIN 
    Avaliacoes a ON p.ponto_id = a.ponto_id
GROUP BY 
    c.cidade_id, 
    c.nome_cidade, 
    c.regiao
HAVING 
    COUNT(DISTINCT p.ponto_id) >= 2
ORDER BY 
    c.regiao, 
    ranking_regional;
