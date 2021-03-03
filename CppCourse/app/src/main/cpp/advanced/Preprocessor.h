//
// Created by Administrator on 3/3/2021.
//

#ifndef CPPCOURSE_PREPROCESSOR_H
#define CPPCOURSE_PREPROCESSOR_H

/**
 * 预处理器是一些指令，指示编译器在实际编译之前所需完成的预处理。
 * 所有的预处理器指令都是以井号（#）开头，只有空格字符可以出现在预处理指令之前。预处理指令不是 C++ 语句，所以它们不会以分号（;）结尾。
 */
class Preprocessor {

    /**
     * #define 预处理指令用于创建符号常量。该符号常量通常称为宏
     * 使用 #define 来定义一个带有参数的宏
     * 指令可以用来有选择地对部分程序源代码进行编译。这个过程被称为条件编译。
     */
     /**
      * C++ 中的预定义宏
__LINE__	这会在程序编译时包含当前行号。
__FILE__	这会在程序编译时包含当前文件名。
__DATE__	这会包含一个形式为 month/day/year 的字符串，它表示把源文件转换为目标代码的日期。
__TIME__	这会包含一个形式为 hour:minute:second 的字符串，它表示程序被编译的时间。
      */
};


#endif //CPPCOURSE_PREPROCESSOR_H
