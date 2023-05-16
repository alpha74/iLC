# Return percentage of immediate first orders to total first orders
# https://leetcode.com/problems/immediate-food-delivery-ii/description/
# Aman Kumar

# Runtime 2350 ms Beats 5%

# totalI = Total Immediate First orders
# totalF = Total first orders
# result = (totalI/ totalF) * 100

# Query to get delivery_id of First order of each customer
# SELECT MIN(delivery_id) as first_delivery_id
# FROM Delivery
# GROUP BY customer_id ;

# Query to get total number of First orders
SELECT 
ROUND(SUM(
        CASE 
            WHEN order_date = customer_pref_delivery_date THEN +1
            ELSE +0
        END 
    ) * 100 / 
    COUNT(*), 2) AS immediate_percentage

FROM Delivery 
WHERE delivery_id IN (

    SELECT D1.delivery_id
    FROM Delivery D1
    WHERE D1.order_date = (
        
        SELECT MIN(D2.order_date)
        FROM Delivery D2
        WHERE D2.customer_id = D1.customer_id
        GROUP BY D2.customer_id

    )
)
