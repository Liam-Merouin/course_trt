#include <iostream>
using namespace std;

// argc: 参数数量, argument count
// argv: 参数列表, argument vector

int main(int argc, char **argv) {
    cout << "参数数量：" << argc << endl;
    cout << "====== 参数列表 ======" << endl;
    for (int i {0}; i < argc; ++i) {
        cout << "参数" << i << "：" << argv[i] << endl;
    }
    return 0;
}