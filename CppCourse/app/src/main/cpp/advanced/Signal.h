//
// Created by Administrator on 3/3/2021.
//

#ifndef CPPCOURSE_SIGNAL_H
#define CPPCOURSE_SIGNAL_H

/**
 * 信号是由操作系统传给进程的中断，会提早终止一个程序。
 * 有些信号不能被程序捕获，但是下表所列信号可以在程序中捕获，并可以基于信号采取适当的动作。这些信号是定义在 C++ 头文件 <csignal> 中。
 * SIGABRT	程序的异常终止，如调用 abort。
SIGFPE	错误的算术运算，比如除以零或导致溢出的操作。
SIGILL	检测非法指令。
SIGINT	程序终止(interrupt)信号。
SIGSEGV	非法访问内存。
SIGTERM	发送到程序的终止请求。
 */
class Signal {
    /**
     *
     */

};


#endif //CPPCOURSE_SIGNAL_H
