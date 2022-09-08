#include<iostream>
#include<functional>

template<typename T, typename F>
T use_v( T v, F fb)
{
    static int num = 0;//记录实例化了几次模板函数
    num++;
    std::cout << "num: " << num << "   &num: " << &num << std::endl;
    return fb(v);
}

class fa
{
private:
    double uz_ ;
public:
    fa(const double  & av = 1.0) : uz_(av){}
    double operator()(double x){return uz_ * x;}
};

class fd
{
private:
    double fd_uz;
public:
    fd(const double &az = 1.0) : fd_uz(az){}
    double operator()(double z){return fd_uz + z;}
};