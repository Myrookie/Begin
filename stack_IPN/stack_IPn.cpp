//这是栈应用的一个实例，逆波兰数
//（1+2）*（3-4）
//逆波兰表示法:  （1+2）（3-4）*
//                  12+34-*
//5*(((9+8)*(4*6))+7)
//逆波兰表示法：5((9+8)*(4*6))7+*
//              5(9+8)(4*6)*7+*
//              598+46**7+*




#include<iostream>
#include<cstring>

const int MAX = 512;
int top[MAX];
int num = 0;

using namespace std;

bool is_full();
bool is_temp();
void push(int);
int  pop();


int main()
{
    char st[100];//存放逆波兰数,但存放的是字符
    cout << "请输入逆波兰表达式：" << endl;
    cin >> st;

    int line = strlen(st);//计算出波兰数的长度

    for(int i = 0; i < line; i++)
    {
        if(st[i] >= '0' && st[i] <= '9')
        {
              push(st[i] - '0');//存进去的字符减去字符0，就可以得到数字
        }
        else
        {
            int n = pop();//取出后入的两个数
            int m = pop();
            switch(st[i])
            {
                case '+':
                    push(m + n);
                    break;
                case '*':
                    push(m * n);
                    break;
                case '-':
                    push(m - n);
                    break;

            }
        }
      

    }

    cout << "result: " << pop() << endl;
  
    return 0;
}

bool is_full()
{
    return num == MAX;
}

bool is_temp()
{
    return num == 0;
}

void push(int ch)
{
    if(!is_full())
    {
        top[num++] = ch;
    }
    else
        cout << "栈已满。" << endl;
}

int  pop()
{
    if(!is_temp())
    {
        return top[--num];
    }
    else
       cout<< "栈已为空。" << endl;

}