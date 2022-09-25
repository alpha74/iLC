# Return unique leads and unique partner grouped by date and make
# https://leetcode.com/problems/daily-leads-and-partners/
# Aman Kumar

# Runtime: 502 ms, faster than 84.30% of MySQL online submissions for Daily Leads and Partners.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Daily Leads and Partners
SELECT date_id, make_name, 
COUNT(DISTINCT lead_id) AS unique_leads,
COUNT(DISTINCT partner_id) AS unique_partners

FROM DailySales
GROUP BY date_id, make_name;
