#include <iostream>
using namespace std;

int main()
{
    int room_width {0};
    cout << "请输入房间的宽度：";
    cin >> room_width;
    int room_length {0};
    cout << "请输入房间的长度：";
    cin >> room_length;

    cout << "====== 房间信息 ======" << endl;
    cout << "房间的面积是：" << room_width * room_length << "平方米" << endl;
    return 0;
}