#include <iostream>
#include <cmath>
using namespace std;

const double PI {3.1415926};  // 圆周率

// 计算圆的面积
double calculate_area(double radius)
{
    return PI * pow(radius, 2);
}

// 获取半径，计算圆的面积
void circle_area()
{
    cout << "请输入圆的半径：";
    double radius {0};
    cin >> radius;
    cout << "圆的面积为：" << calculate_area(radius) << endl;
}

int main()
{
    // 计算圆的面积
    circle_area();
    return 0;
}