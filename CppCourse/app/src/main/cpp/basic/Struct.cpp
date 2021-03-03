//
// Created by Administrator on 3/2/2021.
//

#include "Struct.h"
#include <cstring>

void struct_function(){

    //定义结构体类型Book的变量book
    Book book;
    strcpy( book.title, "C++ 教程");
    strcpy( book.author, "Android Stack");
    strcpy( book.subject, "编程语言");
    book.book_id = 12345;
}