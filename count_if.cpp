#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool  f3(int  n)
{
    return  n % 3  == 0;
}

int main()
{
    vector<int>  number(100);//创建一个数组（也可以认为是一个迭代器）begin()  ||  end() 是迭代器的函数
    
    for(int  i  =  0;  i    <   100;    i++)
    {
            number[i]   =   i;
    }

   int count  =   count_if( number.begin() ,  number.end(),  f3 );//  count_if (  区域1，区域2， 函数对象（指针)  f3----是函数名，是一个指针。
                                                                                                               //f3()----是函数。

   cout << "有 " << count << "个数可以被 3 整除 。" << endl;

    return  0;
}

