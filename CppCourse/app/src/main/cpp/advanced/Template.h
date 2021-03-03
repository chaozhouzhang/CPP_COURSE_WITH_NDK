//
// Created by Administrator on 3/3/2021.
//

#ifndef CPPCOURSE_TEMPLATE_H
#define CPPCOURSE_TEMPLATE_H

#include <string>
#include <iostream>


#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

/**
 * 模板
 * 模板是泛型编程的基础，泛型编程以一种独立于任何特定类型的方式编写代码。
 * 模板是创建泛型类或函数的公式。库容器，比如迭代器和算法，都是泛型编程的例子，都使用了模板的概念。
 * 每个容器都有一个单一的定义，比如向量，可以定义许多不同类型的向量，比如 vector <int> 或 vector <string>。
 */
class Template {

};

//====================================================================================================
/**
 * template <typename type> ret-type func-name(parameter list)
 * {
 * // 函数的主体
 * }
 */

/**
 * 模板函数
 * @tparam T
 * @param a
 * @param b
 * @return
 */
template<typename T>
inline T const &Max(T const &a, T const &b) {
    return a < b ? b : a;
}
//====================================================================================================
/**
 * template <class type> class class-name {
 * }
 */

/**
 * 模板类
 * @tparam T
 */
template<class T>
class Stack {
    //类的成员变量
private:
    vector<T> elements;     // 元素

    /**
     * 类的成员方法，未实现或已实现
     */
public:
    void push(T const &);  // 入栈
    void pop();               // 出栈
    T top() const;            // 返回栈顶元素
    bool empty() const {       // 如果为空则返回真。
        return elements.empty();
    }
};

/**
 * 模板类的方法
 * @tparam T
 * @param elem
 */
template<class T>
void Stack<T>::push(T const &elem) {
    // 追加传入元素的副本
    elements.push_back(elem);
}

/**
 * 模板类的方法
 * @tparam T
 */
template<class T>
void Stack<T>::pop() {
    if (elements.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    // 删除最后一个元素
    elements.pop_back();
}

/**
 * 模板类的方法
 * @tparam T
 * @return
 */
template<class T>
T Stack<T>::top() const {
    if (elements.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // 返回最后一个元素的副本
    return elements.back();
}

//====================================================================================================
#endif //CPPCOURSE_TEMPLATE_H
