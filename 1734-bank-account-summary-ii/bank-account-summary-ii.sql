-- Write your PostgreSQL query statement below
SELECT u.name, SUM(t.amount) AS balance
FROM Users u
LEFT JOIN Transactions t
ON t.account = u.account
GROUP BY u.account, u.name
HAVING SUM(t.amount) > 10000;