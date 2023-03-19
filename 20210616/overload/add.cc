#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;

//C语言不支持函数重载
//C++支持函数重载
//原理：C++会对函数名字做一个改编（name mangling）
//步骤：在同一个作用域中，当函数名字相同的时候，会根据参数的
//类型、参数的个数、参数的顺序去进行改编
int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

float add(float x, float y)
{
    return x + y;
}

float add(float x, float y, float z)
{
    return x + y + z;
}

float add(int x, float y)
{
    return x + y;
}

float add(float x, int y)
{
    return x + y;
}
int main(int argc, char **argv)
{
    cout << "Hello world" << endl;

    int *pInt = static_cast<int *>(malloc(sizeof(int)));
    memset(pInt, 0, sizeof(int));

    *pInt = 10;
    printf("pInt = %d\n", *pInt);
    free(pInt);
    pInt = nullptr;

    return 0;
}

