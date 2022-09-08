#include"function.h"

using namespace std;

double uzl_lb(double sl)
{
    return sl / 2.0;
}

double uzl_la(double sa)
{
    return sa * 2.0;
}

typedef function<double(double)> fbl;// 定义一个包装器function，重命名为fbl

int main()
{
    double bl = 10.0;
    
    cout << use_v(bl, fbl(uzl_lb)) << endl;//另一个用法：function<double(double)> fa = el1; cout << use_v(bl, el1) << endl;
    cout << use_v(bl, fbl(uzl_la)) << endl;
    
    cout << use_v(bl, fbl(fa(5.0))) << endl;
    cout << use_v(bl, fbl(fd(5.0))) << endl;

    cout << use_v(bl, fbl([](double x){return x / 3.0;})) << endl;//
    cout << use_v(bl, fbl([](double x){return x * 3.0;})) << endl;
    return 0;
}