#include <iostream>
using namespace std;

int main()
{
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "第一个元素：" << vowels[0] << endl;
    cout << "第五个元素：" << vowels[4] << endl;

    // cin >> vowels[5];  // 不会报错，但是会导致内存溢出

    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "第一天的最高温度：" << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "修改后，第一天的最高温度：" << hi_temps[0] << endl;
    // cout << "第六天的最高温度：" << hi_temps[5] << endl;  // 试图访问数组的第六个元素，报错

    // int student_scores[5];  // 未初始化
    int student_scores [5] {};
    // int student_scores[5] {100, 90, 80, 70, 60};  // 初始化

    cout << "第一个学生的分数：" << student_scores[0] << endl;
    cout << "第二个学生的分数：" << student_scores[1] << endl;
    cout << "第三个学生的分数：" << student_scores[2] << endl;
    cout << "第四个学生的分数：" << student_scores[3] << endl;
    cout << "第五个学生的分数：" << student_scores[4] << endl;

    cout << "请重新输入五个学生的成绩：" << endl;
    for (int i {0}; i < 5; ++i)
    {
        cout << "请输入第" << i + 1 << "个学生的成绩：";
        cin >> student_scores[i];
    }

    // cout << "数组的名称" << *student_scores << endl;  // 数组的名称是数组的第一个元素的地址

    cout << "定义一个二维数组" << endl;
    int movie_ratings[3][4] {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    cout << "第一部电影的评分：" << movie_ratings[0][0] << endl;
    cout << "第十部电影的评分：" << movie_ratings[2][1] << endl;
    return 0;
}