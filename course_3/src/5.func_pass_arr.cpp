#include <iostream>
using namespace std;

// 函数原型
// 打印数组
void print_arr(const int arr[], size_t size);

// 更改数组
void change_arr(int arr[], size_t size);

int main()
{
    // 定义一个数组
    int student_scores [] {100, 98, 97, 95, 90};
    cout << student_scores << endl;
    // 打印数组内容
    print_arr(student_scores, 5);
    // 更改数组内容
    change_arr(student_scores, 5);
    // 打印更改后的数组内容
    print_arr(student_scores, 5);
    print_arr(student_scores, 5);
    return 0;
}

// 完整函数定义
// 添加const关键字，防止修改数组内容，当修改数组内容时，编译器会报错
void print_arr(const int arr[], size_t size)
{
    cout << arr << endl;
    for (size_t i {0}; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    // arr[0] = 6000;
}
void change_arr(int arr[], size_t size)
{
    for (size_t i {0}; i < size; i++)
        arr[i] = 60;
}