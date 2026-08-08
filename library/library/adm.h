#pragma once
#ifndef _ADM_H_
#define _ADM_H_

#include"user.h"

void Adminior_panel();

void Add_Book(Lib_col* p);

void Delete_Book(Lib_col* p);

void Updata_Book(Lib_col* p);

void Show_Book(Lib_col* p);

void Add_User(Users_info* p);

void Delete_User(Users_info* p);

void Show_User(Users_info* p);

void Updata_user(Users_info* p);

#endif
