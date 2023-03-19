#include <iostream>

using std::cout;
using std::endl;

int a;//全局变量,初始值为0
char *p1;//全局变量,初始值为空
const int gb = 10;

int main(int argc, char **argv)
{
    const int ca = 100;//常量ca位于栈区
    int b;//栈区,初始值是随机的
    char *p2;//栈区
    char str1[] = "hello";//str1位于栈区
    static int c = 10;//静态变量
    const char *pstr = "helloworld";//pstr本身是位于栈上的，pstr指向变量位于文字常量区

    int *pInt = new int(10);//pInt本身位于栈上，pInt指向的空间位于堆上

    printf("\n变量的地址\n");
    printf("&a = %p\n", &a);
    printf("&p1 = %p\n", &p1);
    printf("p1 = %p\n", p1);
    printf("&b = %p\n", &b);
    printf("&p2 = %p\n", &p2);
    printf("p2 = %p\n", p2);
    printf("&str1 = %p\n", &str1);
    printf("str1 = %p\n", str1);
    printf("&c = %p\n", &c);
    printf("&pstr = %p\n", &pstr);
    printf("pstr = %p\n", pstr);
    printf("\"helloworld\" = %p\n", "helloworld");//文字常量区
    printf("&pInt = %p\n", &pInt);
    printf("pInt = %p\n", pInt);
    printf("&main = %p\n", &main);//程序代码区
    printf("main = %p\n", main);
    printf("&gb = %p\n", &gb);
    printf("&ca = %p\n", &ca);

    printf("\n变量的值\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}

