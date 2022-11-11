
#     # CREATE TABLE cats 
#     #   ( 
#     #      cat_id INT NOT NULL AUTO_INCREMENT, 
#     #      name   VARCHAR(100), 
#     #      breed  VARCHAR(100), 
#     #      age    INT, 
#     #      PRIMARY KEY (cat_id) 
#     #   ); 
    
#     # INSERT INTO cats(name, breed, age)
#     # VALUES ('Ringo', 'Tabby', 4),
#     #        ('Cindy', 'Maine Coon', 10),
#     #        ('Dumbledore', 'Maine Coon', 11),
#     #        ('Egg', 'Persian', 4),
#     #        ('Misty', 'Tabby', 13),
#     #        ('George Michael', 'Ragdoll', 9),
#     #        ('Jackson', 'Sphynx', 7);
    
#     #SELECT cat_id, name, age, breed FROM cats;
#     # SELECT * FROM cats WHERE age=4;
#     # SELECT * FROM cats WHERE name='Egg';
#     # SELECT * FROM cats WHERE name='egG'; #//Not case sensitive
    
    
#  ## Aliases
 
#  #SELECT cat_id AS id, name FROM cats;
#  #SELECT name AS 'cat name', breed AS 'kitty breed' FROM cats;
 
#  ##Update
 
#  # UPDATE cats SET breed='Shorthair' WHERE breed='Tabby';
#  # UPDATE cats SET age=14 WHERE name='Misty';
 
#  ##DELETE
 
#  #DELETE FROM cats WHERE name='EgG';
 
#  #Delete from cats;#=> Deletes everything except table
 
#  ## Joins
 
#  # Here are the different types of the JOINs in SQL:

#  #    (INNER) JOIN: Returns records that have matching values in both tables
#  #    LEFT (OUTER) JOIN: Returns all records from the left table, and the matched records from the right table
#  #    RIGHT (OUTER) JOIN: Returns all records from the right table, and the matched records from the left table
#  #    FULL (OUTER) JOIN: Returns all records when there is a match in either left or right table
 
# # SELECT Orders.OrderID, Customers.CustomerName, Orders.OrderDate
# # FROM Orders
# # INNER JOIN Customers ON Orders.CustomerID=Customers.CustomerID;

#     # SELECT * FROM shirts WHERE article='polo shirt';
     
#     # UPDATE shirts SET shirt_size='L' WHERE article='polo shirt';
     
#     # SELECT * FROM shirts WHERE article='polo shirt';
     
#     # SELECT * FROM shirts;
     
#     # SELECT * FROM shirts WHERE last_worn=15;
     
#     # UPDATE shirts SET last_worn=0 WHERE last_worn=15;
     
#     # SELECT * FROM shirts WHERE last_worn=15;
     
#     # SELECT * FROM shirts WHERE last_worn=0;
     
#     # SELECT * FROM shirts WHERE color='white';
     
#     # UPDATE shirts SET color='off white', shirt_size='XS' WHERE color='white';
     
#     # SELECT * FROM shirts WHERE color="white";
     
#     # SELECT * FROM shirts WHERE color="off white";
     
#     # SELECT * FROM shirts;
    
#    ## DELETE
   
# #     SELECT * FROM shirts;
     
# #     SELECT * FROM shirts WHERE last_worn=200;
     
# #     DELETE FROM shirts WHERE last_worn=200;
     
# #     SELECT * FROM shirts WHERE article="tank top";
     
# #     DELETE FROM shirts WHERE article="tank top";
     
# #     SELECT * FROM shirts WHERE article="tank top";
     
# #     SELECT * FROM shirts;
     
# #     DELETE FROM shirts;
     
# #     SELECT * FROM shirts;
     
# #     DROP TABLE shirts;
     
#     show tables;
     
# #     DESC shirts;

    
    