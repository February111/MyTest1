#include <stdlib.h>
#include <string.h>//C的头文件
#include <iostream>
#include <string>//C++的头文件

using std::cout;
using std::endl;
using std::string;

void test()
{
    //C风格字符串是以'\0'结尾的
    char str1[] = "hello";
    char str2[] = "world";
    str1[0] = 'H';
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    /* str1 = nullptr;//error */

    cout << endl;
    printf("111\n");
    const char *pstr = "helloworld";
    printf("222\n");
    /* pstr[0] = 'H';//error */
    printf("333\n");
    printf("pstr = %s\n", pstr);
    pstr = "12345";
    printf("pstr = %s\n", pstr);

    cout << endl;
    size_t len1 = sizeof(str1);
    size_t len2 = sizeof(str2);
    printf("len1 = %lu\n", len1);
    printf("len2 = %lu\n", len2);
    size_t len = len1 + len2 - 1;
    char *pstr2 = static_cast<char *>(malloc(len));
    memset(pstr2, 0 , len);
    strcpy(pstr2, str1);
    strcat(pstr2, str2);
    printf("pstr2 = %s\n", pstr2);


    free(pstr2);
    pstr2 = nullptr;
    
}

void test2()
{
    //C++        C
    string s1 = "hello";
    string s2 = "world";
    string s3 = s1 + s2;//不用去考虑内存相关的概念
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;

    cout << endl;
    //C++风格字符串转换为C风格字符串
    const char *pstr = s3.c_str();
    cout << "pstr = " << pstr << endl;

    //获取C++风格字符串的长度
    cout << endl << endl;
    size_t len1 = s3.length();
    size_t len2 = s3.size();
    cout << "len1 = " << len1 << endl;
    cout << "len2 = " << len2 << endl;

    //遍历C++风格字符串
    cout << endl << endl;
    for(size_t idx = 0; idx != len2; ++idx)
    {
        cout << s3[idx] << "  ";
    }
    cout << endl;

    //C++11里面的写法
    for(auto &c : s3)
    {
        cout << c << "  ";
    }
    cout << endl;

    cout << endl << endl;
    string s4 = s3 + "wangdao";
    cout << "s4 = " << s4 << endl;
    string s5 = s4 + 'A';
    cout << "s5 = " << s5 << endl;

}
int main(int argc, char **argv)
{
    test2();
    return 0;
}

