#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "size info of fundamental data types" << endl;
    cout << "=====================================" << endl;
    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;

    cout << "=====================================" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "bool: " << sizeof(bool) << " bytes" << endl;

    cout << "=====================================" << endl;
    cout << "min and max value of data types" << endl;
    cout << "char min:" << CHAR_MIN << ", char max:" << CHAR_MAX << endl;
    cout << "short min:" << SHRT_MIN << ", short max:" << SHRT_MAX << endl;
    cout << "int min:" << INT_MIN << ", int max:" << INT_MAX << endl;
    cout << "long min:" << LONG_MIN << ", long max:" << LONG_MAX << endl;
    cout << "long long min:" << LLONG_MIN << ", long long max:" << LLONG_MAX << endl;

    cout << "=====================================" << endl;
    cout << "sizeof using variable names" << endl;
    int age {21};
    cout << "age is " << sizeof(age) << " bytes" << endl;

    double salary {229352.24};
    cout << "salary is " << sizeof(salary) << " bytes" << endl;

    cout << endl;
    return 0;
}