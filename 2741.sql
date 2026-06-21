SELECT
'Approved: ' || students.name as name,
students.grade as grade
FROM students 
WHERE students.grade >= 7.0
Order by students.grade DESC
