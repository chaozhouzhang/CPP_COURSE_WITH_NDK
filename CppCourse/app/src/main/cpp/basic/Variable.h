//
// Created by Administrator on 3/1/2021.
//

#ifndef CPPCOURSE_VARIABLE_H
#define CPPCOURSE_VARIABLE_H

/**
 * 变量
 * 变量定义就是告诉编译器在何处创建变量的存储，以及如何创建变量的存储。
 * 变量声明向编译器保证变量以给定的类型和名称存在，这样编译器在不需要知道变量完整细节的情况下也能继续进一步的编译。变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明。
 * 当使用多个文件且只在其中一个文件中定义变量时（定义变量的文件在程序连接时是可用的），变量声明就显得非常有用。可以使用 extern 关键字在任何地方声明一个变量。虽然您可以在 C++ 程序中多次声明一个变量，但变量只能在某个文件、函数或代码块中被定义一次。
 */
extern int variable;//变量声明

class Variable {
    int variable = 10;//变量定义和初始化
};


#endif //CPPCOURSE_VARIABLE_H
