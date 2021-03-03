//
// Created by Administrator on 3/3/2021.
//

#include "Thread.h"
#include <pthread.h>
#include <iostream>

using namespace std;

#define NUM_THREADS 5

// 线程的运行函数
void* say_hello(void* args)
{
    cout << "Hello Runoob！" << endl;
    return 0;
}

void threadTest(){
    // 定义线程的 id 变量，多个变量使用数组
    pthread_t tids[NUM_THREADS];
    for(int i = 0; i < NUM_THREADS; ++i)
    {
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        //创建一个 POSIX 线程
        /**
         *
    参数	描述
    thread	指向线程标识符指针。
    attr	一个不透明的属性对象，可以被用来设置线程属性。您可以指定线程属性对象，也可以使用默认值 NULL。
    start_routine	线程运行函数起始地址，一旦线程被创建就会执行。
    arg	运行函数的参数。它必须通过把引用作为指针强制转换为 void 类型进行传递。如果没有传递参数，则使用 NULL。
         */
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0)
        {
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }

    //pthread_exit 用于显式地退出一个线程
    //终止一个 POSIX 线程
    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
    pthread_exit(NULL);



}

