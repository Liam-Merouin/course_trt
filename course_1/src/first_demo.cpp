#include <iostream>

int main() {
    std::cout << "请输入0～10之内你最喜欢的数字：";
    int favorite_num;
    std::cin >> favorite_num;
    std::cout << "你最喜欢的数字是：" << favorite_num << std::endl;
    return 0;
}