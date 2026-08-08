#pragma once
#ifndef _USER_H_
#define _USER_H_

#define MAX_NAME 30
#define MAX_AUTHOR 30

#define MAX_PH 30
#define	MAX_BOOKS 100
#define MAX_HISTORY 500
#define MAX_ADMIN 20
#define MAX_PASSWORD 20
#define MAX_USERS 100
typedef struct User_info {
	char admin[MAX_ADMIN];
	char paswd[MAX_PASSWORD];
	int user_num;
	
}User_info;
typedef struct Users_info {
	User_info users[MAX_USERS];

	int count;
}Users_info;
typedef struct Book_info {
	char name[MAX_NAME];
	char author[MAX_AUTHOR];
	char ph[MAX_PH];
	long year;
	int  num;
	int id;
}Book_info;

typedef struct BorrowRecord {
    char book_name[MAX_NAME];  // 书名
    int  is_returned;          // 状态：0=借阅中，1=已归还
} BorrowRecord;

typedef struct Lib_col {
	Book_info bdata[MAX_BOOKS];
	int pointer;
	BorrowRecord history[MAX_HISTORY];
    int history_count;   // 当前记录条数
}Lib_col;

void Init_book(Lib_col* p);


void uerpanel();
void Searchbook();

void Search_Engine(Lib_col* p);
void Search_Engine1(Lib_col* p);
void Search_Engine2(Lib_col* p);
void Search_Engine3(Lib_col* p);
void Search_Engine4(Lib_col* p);
void Search_Engine5(Lib_col* p);

void Borrow_Book(Lib_col* p);

void Revert_Book(Lib_col* p);

void Borrow_History(Lib_col* p);

int Login(Users_info* p);
void Rigs(Users_info* p);
void Init_user(Users_info* p);
#endif