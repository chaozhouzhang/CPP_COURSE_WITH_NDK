#include <jni.h>
#include <string>

/**
 * C++ 是一种中级语言，综合了高级语言和低级语言的特点。
 * C++ 进一步扩充和完善了 C 语言，是一种面向对象的程序设计语言。
 * C++ 是静态类型的、编译式的，支持过程化编程、面向对象编程和泛型编程。
 * C++ 可运行于多种平台上，如 Windows、MAC 操作系统以及 UNIX 的各种版本。
 * C++ 是 C 的一个超集，事实上，任何合法的 C 程序都是合法的 C++ 程序。
 * 使用静态类型的编程语言是在编译时执行类型检查，而不是在运行时执行类型检查。
 * C++ 完全支持面向对象的程序设计，包括面向对象开发的四大特性：封装/抽象/继承/多态。
 * 标准的 C++ 由三个重要部分组成：
 * 核心语言，提供了所有构件块，包括变量、数据类型和常量，等等。
 * C++ 标准库，提供了大量的函数，用于操作文件、字符串等。
 * 标准模板库（STL），提供了大量的方法，用于操作数据结构等。
 * 标准化：C++98 C++03 C++11 C++14 C++17
 * C++ 编译器:
 * 1.GNU 的 C/C++ 编译器 g++ gcc GCC
 * GCC:GNU Compiler Collection(GUN 编译器集合)，它可以编译C、C++、JAV、Fortran、Pascal、Object-C、Ada等语言。
 * gcc是GCC中的GUN C Compiler（C 编译器）
 * g++是GCC中的GUN C++ Compiler（C++编译器）
 * 2.clang
 *
 */
extern "C" JNIEXPORT jstring JNICALL
Java_androidstack_cppcourse_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
