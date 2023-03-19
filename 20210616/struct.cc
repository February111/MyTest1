#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

struct Computer
{
public:
    //成员函数
    void setBrand(const char *brand)
    {
        strcpy(_brand, brand);//先不考虑越界
    }

    void setPrice(float price)
    {
        _price = price;
    }

    void print()
    {
        cout << "brand: " << _brand << endl
             << "price: " << _price << endl;
    }
private://体现封装性
    //数据成员
    char _brand[20];
    float _price;
};//必须要写

int main(int argc, char **argv)
{
    //int a;
    Computer com;//对象的创建
    com.setBrand("xiaomi");
    com.setPrice(7000);
    com.print();

    strcpy(com._brand, "huawei");
    com._price = 100;

    return 0;
}

