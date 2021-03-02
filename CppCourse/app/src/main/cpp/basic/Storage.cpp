//
// Created by Administrator on 3/2/2021.
//

#include "Storage.h"

/**
 * 'auto' not allowed in non-static class member
 * 不允许在非静态类中的修饰成员
 *
 * auto x = 5, y = "y";
 * 'auto' deduced as 'int' in declaration of 'x' and deduced as 'const char *' in declaration of 'y'
 * auto 同时初始化多个变量时，变量的类型需要一致。
 */
auto pi = 3.1415;
auto hello_world("hello world");
auto num = new auto(100);

/**
 * register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
 * 寄存器只用于需要快速访问的变量，比如计数器。还应注意的是，定义 'register' 并不意味着变量将被存储在寄存器中，它意味着变量可能存储在寄存器中，这取决于硬件和实现的限制
 *
 * Illegal storage class on file-scoped variable
 * 非法存储类在文件作用域变量上
 **/

/**
 * static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。

static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。

在 C++ 中，当 static 用在类数据成员上时，会导致仅有一个该成员的副本被类的所有对象共享。
 */

static int count = 100;

/**
 * extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当您使用 'extern' 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。

当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。

extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候
 */

/**
 * mutable 说明符仅适用于类的对象。它允许对象的成员替代常量。也就是说，mutable 成员可以通过 const 成员函数修改。
 */
/**
使用 thread_local 说明符声明的变量仅可在它在其上创建的线程上访问。 变量在创建线程时创建，并在销毁线程时销毁。 每个线程都有其自己的变量副本。

thread_local 说明符可以与 static 或 extern 合并。

可以将 thread_local 仅应用于数据声明和定义，thread_local 不能用于函数声明或定义。
 **/