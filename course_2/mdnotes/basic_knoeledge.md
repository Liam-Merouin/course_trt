# C++变量相关知识

变量（variable） --变量的初始化

```cpp
int age; // 未初始化

int age = 18;  // c-风格初始化
int age (18);  // 构造函数用法（OOP概念）
int age {18};  // c++11标准：列表初始化语法(推荐)
```

在定义long long变量时，中括号中{}可以使用单引号‘来划分数量级，方便阅读，不过C++11不支持，C++14才支持
```cpp
long long people_in_world {80'0000'0000};  // 单引号是为了方便阅读，C++14支持
cout << "全球人数：" << people_in_world << endl;
```

在定义浮点型变量时需要在数字后面添加f，因为默认定义的是double类型
```cpp
float my_float {3.14f};  // 加上f表示float类型，不添加默认为double类型
cout << "my_float: " << my_float << endl;
```

在打印时，想要将布尔性变量以true和false的类型输出，可通过添加cout << boolalpha;来控制
```cpp
bool my_bool {false};
cout << boolalpha;  // 以true和false输出
cout << "my_bool: " << my_bool << endl;
```
## C风格字符串
定义形式==char my_name [] {"world"};==
![](https://raw.githubusercontent.com/Liam-Merouin/MyPic/image/image/20241103211026.png)

字符串"world"会被分配6个字符大小，最后一个字符存放\0
```cpp
char may_name [] {"world"};  // 数组方式，会分配6个字符大小，最后一个存放\0
char your_name [5] {"world"};  // 数组方式，会报错，位置不够存放\0
char your_name [8] {"world"};  // 数组方式，分配8个字符大小，后3个位置是\0

-------------------------------------------------------------------------
char my_name [8];  // 数组方式，未初始化

my_name = "Hello";  // 报错，"Hello"是一个字面量（literals）

#include <cstring>
strcpy(my_name, "Hello");  // 成功

------------------------------------------------------------------------
char str[80];

strcpy(str, "hello");  // 复制
strcat(str, "there ");  // 拼接
cout << strlen(str);  // 长度
strcmp(str, "another");  // >0
```

