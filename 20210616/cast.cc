#include <iostream>

using std::cout;
using std::endl;

void test()
{
    int iNumber = 10;
    float fNumber = 12.34;
    /* iNumber = (int)fNumber;//C的代码可以的 */
    iNumber = int(fNumber);
}
void test2()
{
    //从一种数据类型转换为另外一种数据类型(基本数据类型)
    int iNumber = 10;
    float fNumber = 12.34;
    iNumber = static_cast<int>(fNumber);
    cout << "iNumber = " << iNumber << endl;

    //void * ---->其他类型的指针
    void * pret = malloc(sizeof(int));
    int *pInt = static_cast<int *>(pret);

    free(pInt);
    pInt = nullptr;

}

void test3()
{
    const int number = 10;
    /* int *p = &number;//error */
    int *p = const_cast<int *>(&number);
    cout << "*p = " << *p << endl;

    cout << endl << endl;
    *p = 20;//未定义的行为
    cout << "*p = " << *p << endl;
    cout << "number = " << number << endl;
    cout << " &p = " << &p << endl;
    cout << " p = " << p << endl;
    cout << " &number = " << &number << endl;
}
int main(int argc, char **argv)
{
    test3();
    return 0;
}

