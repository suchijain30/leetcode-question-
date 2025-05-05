# Write your MySQL query statement below
WITH
  Neighbor AS (
    SELECT id,num ,
    LAG(num) OVER(ORDER BY id) AS prev_num, 
    LEAD(num) OVER(ORDER BY id) AS next_num FROM Logs )

SELECT DISTINCT num AS ConsecutiveNums FROM Neighbor WHERE num = prev_num AND num = next_num;


  
  
