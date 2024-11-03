#include <iostream>
using namespace std;

int main()
{
    // 字符型
    cout << "====== 字符型 ======" << endl;
    char my_char {'A'};
    cout << "my_char: " << my_char << endl;
    cout << "字符的ASCII码：" << static_cast<int>(my_char) << endl;

    // 整型
    cout << "====== 整型 ======" << endl;
    short my_short {10};
    cout << "my_short: " << my_short << endl;

    // =与{}的区别
    // short取值范围：-32768 ~ 32767
    // short overflow_short = 32768;   // 不会报错，但是值会溢出
    // cout << "overflow_short: " << overflow_short << endl;

    // short overflow_short2 {32768};  // 会报错
    // cout << "overflow_short2: " << overflow_short2 << endl;

    int my_height {180};
    cout << "my_height: " << my_height << endl;

    long my_long {10360000};
    cout << "杭州人数：" << my_long << endl;

    long long people_in_world {80'0000'0000};  // 单引号是为了方便阅读，C++14支持
    cout << "全球人数：" << people_in_world << endl;

    // 浮点型
    cout << "====== 浮点型 ======" << endl;
    float my_float {3.14f};  // 加上f表示float类型，不添加默认为double类型
    cout << "my_float: " << my_float << endl;
    
    double my_double {3.1415926};
    cout << "my_double: " << my_double << endl;

    // 布尔型
    cout << "====== 布尔型 ======" << endl;
    bool my_bool {false};
    cout << boolalpha;  // 以true和false输出
    cout << "my_bool: " << my_bool << endl;

    return 0;
}