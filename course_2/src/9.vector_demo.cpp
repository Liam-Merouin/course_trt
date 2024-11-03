#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector <char> vowels;  // 空vector
    // vector <char> vowels (5);  // 5个元素，每个元素都是默认值
    // cout << "vowels的第一个元素：" << vowels[0] << endl;

    // vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; // 初始化
    // cout << "vowels的第一个元素：" << vowels[0] << endl;
    // cout << "vowels的第五个元素：" << vowels[4] << endl;

    // vector <int> student_scores(3);  // 3个元素，每个元素都是默认值0
    // cout << "student_scores的第一个元素：" << student_scores[0] << endl;

    // vector <int> student_scores(3, 100); // 3个元素，每个元素都是100
    // cout << "student_scores的第一个元素：" << student_scores[0] << endl;

    vector<int> test_scores{100, 98, 89};
    cout << "数组方式访问：" << endl;
    cout << "三个元素是：" << test_scores[0] << " " << test_scores[1] << " " << test_scores[2] << endl;

    cout << "=====================" << endl;
    cout << "vector方式访问：" << endl;
    cout << "三个元素是：" << test_scores.at(0) << " " << test_scores.at(1) << " " << test_scores.at(2) << endl;

    // 添加元素
    cout << "=====================" << endl;
    int add_new_score{0};
    cout << "请输入一个新的分数：";
    cin >> add_new_score;
    test_scores.push_back(add_new_score); // 添加到vector的末尾

    cout << "再添加一个新的分数：";
    cin >> add_new_score;
    test_scores.push_back(add_new_score);

    cout << "添加后一共有：" << test_scores.size() << "个元素" << endl;
    cout << "分别为：" << test_scores.at(0) << " " << test_scores.at(1) << " " << test_scores.at(2) << " " << test_scores.at(3) << " " << test_scores.at(4) << endl;

    cout << "获取不存在元素：" << endl;
    // cout << test_scores.at(10) << endl;  // 报错
    // cout << test_scores[10] << endl;  // 不报错，但是会导致内存溢出

    cout << "=====================" << endl;
    // 定义一个二维vector
    vector<vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    cout << "第一部电影的评分：" << movie_ratings.at(0).at(0) << endl;
    cout << "第一部电影的评分：" << movie_ratings[0][0] << endl;
    cout << endl;
    return 0;
}