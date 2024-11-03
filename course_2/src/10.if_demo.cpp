#include <iostream>
using namespace std;

int main()
{
    int input_num {0};
    const int lower_limit {10};
    const int upper_limit {100};

    cout << "请输入一个介于" << lower_limit << "和" << upper_limit << "之间的数：";
    cin >> input_num;

    if (input_num >= lower_limit)
    {
        cout << "====== 条件一满足 ======" << endl;
        cout << input_num << "大于等于" << lower_limit << endl;
    }
    if (input_num <= upper_limit)
    {
        cout << "====== 条件二满足 ======" << endl;
        cout << input_num << "小于等于" << upper_limit << endl;
    }
    if (input_num >= lower_limit && input_num <= upper_limit)
    {
        cout << "====== 条件三满足 ======" << endl;
        cout << input_num << "在" << lower_limit << "和" << upper_limit << "之间" << endl;
    }
    if (input_num == lower_limit || input_num == upper_limit)
    {
        cout << "====== 条件四满足 ======" << endl;
        cout << input_num << "等于" << lower_limit << "或" << upper_limit << endl;
    }

    
    return 0;
}