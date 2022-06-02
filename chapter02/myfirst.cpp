//
// Created by 10200 on 2022/5/30.
//

/*
 * #include编译指令导致iostream文件内容随源代码文件的内容一起被发送给编译器。
 * 实际上，iostream文件的内容将取代#include "iostream"。原始文件并没有被修改，而是将源代码文件和iostream组合成一个复合文件，编译的下一个阶段将使用该文件
 */
#include "iostream"

/*
 * 名称空间。为了使编写将多个厂商已有的代码组合起来的程序更简单而设计的
 * 当头文件没有扩展名时，类、函数、变量便是c++编译器的标准组件，他们现在被放置在名称空间std中
 */
using namespace std;


void my_first() {


    cout<< "Come up and C++ me some time";
    cout<<endl;
//     如果没有using namespace std; 则应写成
//    std::cout<< "Come up and C++ me some time";
//    std::cout<<std::endl;

//    return 0;   // main函数中如果省略，则默认以return 0结尾
}
