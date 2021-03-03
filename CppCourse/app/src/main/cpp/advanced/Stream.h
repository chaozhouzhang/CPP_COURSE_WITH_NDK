//
// Created by Administrator on 3/3/2021.
//

#ifndef CPPCOURSE_STREAM_H
#define CPPCOURSE_STREAM_H

/**
 *  iostream 标准库，提供了 cin 和 cout 方法分别用于从标准输入读取流和向标准输出写入流。
 *  fstream 标准库，从文件读取流和向文件写入流
 *  ofstream 该数据类型表示输出文件流，用于创建文件并向文件写入信息。
 *  ifstream 该数据类型表示输入文件流，用于从文件读取信息。
 *  fstream 该数据类型通常表示文件流，且同时具有 ofstream 和 ifstream 两种功能，这意味着它可以创建文件，向文件写入信息，从文件读取信息。
 *  要在 C++ 中进行文件处理，必须在 C++ 源代码文件中包含头文件 <iostream> 和 <fstream>。
 */
class Stream {
    /**
     * 在从文件读取信息或者向文件写入信息之前，必须先打开文件。ofstream 和 fstream 对象都可以用来打开文件进行写操作，如果只需要打开文件进行读操作，则使用 ifstream 对象。
     * open() 函数是 fstream、ifstream 和 ofstream 对象的一个成员。
     * void open(const char *filename, ios::openmode mode);
     * open() 成员函数的第一参数指定要打开的文件的名称和位置，第二个参数定义文件被打开的模式。
     * ios::app	追加模式。所有写入都追加到文件末尾。
     * ios::ate	文件打开后定位到文件末尾。
     * ios::in	打开文件用于读取。
     * ios::out	打开文件用于写入。
     * ios::trunc	如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。
     */

    /**
     * 当 C++ 程序终止时，它会自动关闭刷新所有流，释放所有分配的内存，并关闭所有打开的文件。但应该养成一个好习惯，在程序终止前关闭所有打开的文件。
     * close() 函数是 fstream、ifstream 和 ofstream 对象的一个成员。
     * void close();
     */

    /**
     *写入文件
     * 流插入运算符（ << ）向文件写入信息
     */

    /**
     * 读取文件
     * 使用流提取运算符（ >> ）从文件读取信息
     */

    /**
     * 文件位置指针
     * istream 和 ostream 都提供了用于重新定位文件位置指针的成员函数。这些成员函数包括关于 istream 的 seekg（"seek get"）和关于 ostream 的 seekp（"seek put"）。
     * seekg 和 seekp 的参数通常是一个长整型。第二个参数可以用于指定查找方向。查找方向可以是 ios::beg（默认的，从流的开头开始定位），也可以是 ios::cur（从流的当前位置开始定位），也可以是 ios::end（从流的末尾开始定位）。
     * 文件位置指针是一个整数值，指定了从文件的起始位置到指针所在位置的字节数。
     */
};


#endif //CPPCOURSE_STREAM_H
