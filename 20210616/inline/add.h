#ifndef __ADD_H__
#define __ADD_H__

//内联函数在声明的时候必须要要看到实现，不能将头文件与实现文件
//分开,可以在头文件中使用#include将实现文件包含进来
//
//内联函数又称为小函数，函数体中不要有while/for等复杂语句
inline
int add(int x, int y);

#include "add.tcc"

#endif
