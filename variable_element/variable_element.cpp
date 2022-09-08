#include<iostream>
#include<string>

//可变参数模板

using namespace std;

void Show(){}//最后一次调用是空

template<typename T>//最后一个数该逗号为句号，换行
void Show(const T& value)
{
    cout << value << ". " << endl;
}

//const T& value 一组参数的第一个数

template<typename T , typename...Args>//可变参数包
void Show( const T& value, const Args&...args)
{
    cout << value << ", " ;
    Show(args...);//递归调用
}

int main()
{
    string mrl = "mr. string name." ;
    double mx = 0.1234;

    Show(mx, 10);
    Show('a', 1.0, 22, mx);
    return 0;
}