//
// Created by Administrator on 3/3/2021.
//

#include "Exception.h"
#include <iostream>

using namespace std;

double throwTest(int a, int b) {
    if (b == 0) {
        throw "Division by zero condition!";
    }
    return (a / b);
}

void tryCatchTest() {
    int a = 10;
    int b = 0;
    double result = 0;
    try {
        result = throwTest(a, b);
    } catch (const char *msg) {
        cerr << msg << endl;
    }

}

void customException() {
    try {
        throw CustomException();
    }
    catch (CustomException &e) {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (std::exception &e) {
        //其他的错误
    }
}