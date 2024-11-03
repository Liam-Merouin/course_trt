#include <iostream>
using namespace std;

int main()
{
    int input_num {0};
    const int target_num {50};

    cout << "请输入一个数, 我将和" << target_num << "进行比较：";
    cin >> input_num;

    if (input_num <= target_num){
        cout << "====== 条件一满足 ======" << endl;
        cout << input_num << "小于等于" << target_num << endl;
    } else {
        cout << "====== 条件一不满足 ======" << endl;
        cout << input_num << "大于" << target_num << endl;
    }
    return 0;
}