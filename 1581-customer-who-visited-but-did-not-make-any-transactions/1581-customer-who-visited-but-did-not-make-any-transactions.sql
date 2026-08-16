# Write your MySQL query statement below
SELECT v.customer_id, COUNT(*) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t ON t.visit_id = v.visit_id
WHERE t.transaction_id is NULL
Group by customer_id