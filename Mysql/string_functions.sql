# SELECT CONCAT(author_lname,' ',author_fname) FROM books AS fullName;

# SELECT author_fname AS first, author_lname AS last, 
#   CONCAT(author_fname, ' ', author_lname) AS full
# FROM books;

## '-' Seperated
#SELECT CONCAT_WS('-',title,author_lname,author_fname) FROM books; 

## SUBSTRING

# SELECT SUBSTRING('Hello World', 1, 4);
 
# SELECT SUBSTRING('Hello World', 7);
 
# SELECT SUBSTRING('Hello World', 3, 8);
 
# SELECT SUBSTRING('Hello World', 3);
 
# SELECT SUBSTRING('Hello World', -3);
 
# SELECT SUBSTRING('Hello World', -7);
 
# SELECT title FROM books;
 
# SELECT SUBSTRING("Where I'm Calling From: Selected Stories", 1, 10);
 
# SELECT SUBSTRING(title, 1, 10) FROM books;
 
# SELECT SUBSTRING(title, 1, 10) AS 'short title' FROM books;
 
# SELECT SUBSTR(title, 1, 10) AS 'short title' FROM books;
 
# SELECT CONCAT
#     (
#         SUBSTRING(title, 1, 10),
#         '...'
#     )
# FROM books;
 
 
# SELECT CONCAT
#     (
#         SUBSTRING(title, 1, 10),
#         '...'
#     ) AS 'short title'
# FROM books;
 
 ## REPLACE
 
    #  SELECT REPLACE('Hello World', 'Hell', '%$#@');
     
    # SELECT REPLACE('Hello World', 'l', '7');
     
    # SELECT REPLACE('Hello World', 'o', '0');
     
    # SELECT REPLACE('HellO World', 'o', '*');
     
    # SELECT
    #   REPLACE('cheese bread coffee milk', ' ', ' and ');
     
    # SELECT REPLACE(title, 'e ', '3') FROM books;
     
    # -- SELECT
    # --    CONCAT
    # --    (
    # --        SUBSTRING(title, 1, 10),
    # --        '...'
    # --    ) AS 'short title'
    # -- FROM books;
     
    # SELECT
    #     SUBSTRING(REPLACE(title, 'e', '3'), 1, 10)
    # FROM books;
     
    # SELECT
    #     SUBSTRING(REPLACE(title, 'e', '3'), 1, 10) AS 'weird string'
    # FROM books;
    #SELECT REVERSE('Hello World');
    
    ## CHAR LENGTH

    #SELECT author_lname, CHAR_LENGTH(author_lname) AS 'length' FROM books;
    
    ##Upper And Lower Case
    
    # SELECT UPPER('Hello World');
    # SELECT LOWER('Hello World');