# Write your MySQL query statement below
select id from Weather w1 where temperature>(select temperature from weather w2 where w2.recordDate=DATE_SUB(w1.recordDate,INTERVAL 1 DAY));