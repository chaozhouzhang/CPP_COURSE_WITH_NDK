//
// Created by Administrator on 3/3/2021.
//

#include <cstdio>
#include "Memory.h"


void newDeleteTest() {
    /**
     * 定义一个指向 double 类型的指针，然后请求内存，该内存在执行时被分配。
     */

    double *pvalue = NULL; // 初始化为 null 的指针
    pvalue = new double;   // 为变量请求内存

    delete pvalue;        // 释放 pvalue 所指向的内存
}

void newDeleteArray() {
    char *pvalue = NULL;   // 初始化为 null 的指针
    pvalue = new char[20]; // 为变量请求内存
    delete[] pvalue;        // 删除 pvalue 所指向的数组

}

void newDeleteClass() {
    Memory *memory = new Memory();
    delete memory;
}