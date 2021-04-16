# Requirements
## Introduction
This mini-project, is console application using C programming language. This project is compiled with the GCC compiler. In this console application, we can do basic library management task like adding the book, view the added book, search the books, ..etc.
## Research
For large libraries data management is one of the most important tasks.They need to keep a track of all their books as well as their status. This can be a very difficult task as libraries have a very large number of books and other articles.
## Cost and Features

### Features of Library Management System
It includes following features:-
Add a record.
Search a new record.
Edit a record.
Delete a record.

## Defining Our System
In the case of a library management system, the parts(functions) work together to support the management of library information resources: their acquisition, representation and circulation.This system helps in the managing of data for a library. 

![State Diagram](https://4.bp.blogspot.com/-X7xkxpUUNWI/T26v6BHDnTI/AAAAAAAAANM/uUG5U0QFxwU/s1600/uml+state+diagram+for+library+mgmt+Librarian.JPG)

## SWOT ANALYSIS

![image](https://user-images.githubusercontent.com/81296054/114765791-3925fe80-9d83-11eb-8d05-27ca8ec97145.png)

# 4W&#39;s and 1&#39;H

## Who:

Schools, colleges and other institutions like public libraries can use this library management system.This system will make their work simple.

## What:

Building an automated library management to have a safe and secure record of book entries in a real library. Adding, deleting, viewing and searching of books can be done by this system without manual efforts of the librarian.

## When:

The project can be used when the book needs to be added,issued or removed

## Where:

The Library management system is nowadays essential for schools, colleges, private libraries, and other organizations. They can use this software as the purpose of books issuing and returning for renewal.

## How:

By developing a software which will provide various data management features.

# Detail requirements
## High Level Requirements: 
| ID | Description | Status | 
| ----- | ----- | --------- |
| 1 | User shall be able to add new book record | Implemented | 
| 2 | User shall be able to update a book record | Implemented |
| 3 | User shall be able to delete a book record | Implemented |
| 4 | User shall be able to view all the books   | Implemented |
| 5 | User shall be able to read data from a file | Implemented |


##  Low level Requirements:
 
| ID | Description | Status (Implemented/Future) |
| ------ | --------- | ----- |
| 1 | New record shall be added by providing all the asked information and the id should be unique or else record should not be accepted. | Implemented |
| 2 | This is used to update the status of a book. If a book was issued or renewed changing the due date as well as status as issued or renewed respectively.| Implemented |
| 3 |User need to search by id for the user record to be deleted, if no such record is available then "No Record Found" Message should be displayed | implemented |
| 4 | can View ID and title of all the books. | implemented |
| 5 | If opening the file fails, then the system shloud prompt the message "Unable to access file" and should not end the program execution | Future |
