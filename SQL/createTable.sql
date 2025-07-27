CREATE TABLE STUDENT (
    StudentId Integer,
    FirstName VARCHAR(20),
    LastName VARCHAR(20),
    DateOfBirth DATE
)

/*I n sql queries we use wrapper class data types to represent the data types of the colummns in the table.
Integer is used for whole numbers, VARCHAR is used for variable-length strings, and DATE is used for date values.
The CREATE TABLE statement is used to create a new table in the database with the specified columns and their data types.
The table name is STUDENT, and it has four columns: StudentId, FirstName, LastName, and DateOfBirth.
Each column has a specific data type that defines the kind of data it can hold.
The StudentId column is of type Integer, which means it can store whole numbers.
The FirstName and LastName columns are of type VARCHAR(20), which means they can store strings up to 20 characters long.
The DateOfBirth column is of type DATE, which means it can store date values in a specific format.
*/

/*Note:####################################################################
Column names should be unique within a table, and the data types should be chosen based on the nature of the data to be stored.
Column names should be separated by commas, and the data type for each column should be specified after the column name.
###########################################################################*/

/* CREATE TABLE statement is used to create a table in a database. Database tables are organized into rows and columns. 
Each table must have a name and can have any number of columns (minimum 1 column is required). 
Each column must have a data type which determines the type of values that can be stored. 
CREATE TABLE command will fail if a table is already existing in the database with the same name. All tables must have a unique name.*/
DROP TABLE STUDENT;
/*DROP TABLE statement is used to remove an existing table from the database.*/

CREATE TABLE Student (
    StudentId INTEGER,
    FName VARCHAR(10),
    Gender CHAR(1),
    DOJ DATE
)