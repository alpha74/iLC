# Return highest rater and movie with highest rating
# https://leetcode.com/problems/movie-rating/description/
# Aman Kumar

# Runtime 2137 ms Beats 57.65%
SELECT * FROM (

  (
    SELECT Users.name AS results
    FROM Users, MovieRating
    WHERE Users.user_id = MovieRating.user_id
    GROUP BY MovieRating.user_id
    ORDER BY COUNT(*) DESC, Users.name ASC
    LIMIT 1
  )

  UNION ALL

  (
    SELECT Movies.title AS results
    FROM MovieRating, Movies
    WHERE MovieRating.movie_id = Movies.movie_id
    AND MovieRating.created_at LIKE "2020-02-%"
    GROUP BY MovieRating.movie_id
    ORDER BY AVG(MovieRating.rating) DESC, Movies.title ASC
    LIMIT 1
  )

) AS results ;
