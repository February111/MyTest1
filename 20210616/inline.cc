#include <iostream>

using std::cout;
using std::endl;

#define multiply(x, y) ((x) * (y))

//内联函数（inline函数）：函数的调用的时候，用函数体期替代
//函数的调用
inline 
int add(int x, int y)
{
    return x + y;
}
int main(int argc, char **argv)
{
    int a = 3, b = 4, c = 5, d = 6;
    cout << "multiply(a, b) = " << multiply(a, b) << endl;//类似于函数的调用
    cout << "multiply(a + c, b + d) = " << multiply(a + c, b + d) << endl;
    cout << "add(a, b) = " << add(a, b) << endl;
    return 0;
}

