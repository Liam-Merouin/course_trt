#include <iostream>
using namespace std;

int main()
{
    const double pi {3.1415926}; // 圆周率
    cout << "请输入圆的半径：";
    double radius {0};
    cin >> radius;

    cout << "圆的面积是：" << pi * radius * radius << endl;
    return 0;
}