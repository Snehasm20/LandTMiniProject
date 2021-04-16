#ifndef HEADER_H
#define HEADER_H

typedef struct {
	char username[15];
	char password[15];
} User;

typedef struct {
	int id; // must be unique
	char title[50];
	char author[50]; // if more than two, separate using ,(COMMA)
	char ISBN[50];
	char category[50];
	char publication[50];
	char description[255];
	int taken;
} Book;

void flush();
#endif