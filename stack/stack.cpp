#include<iostream>

const int MAX = 512;
char top[MAX];
int num = 0;

using namespace std;

bool is_full();
bool is_temp();
void push(char);
char pop();


int main()
{
    push('a');
    push('b');
    push('c');
    push('d');
    while(!is_temp())
    {
        cout << pop();
    }
    cout << endl;
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

void push(char ch)
{
    if(!is_full())
    {
        top[num++] = ch;
    }
    else
        cout << "栈已满。" << endl;
}

char pop()
{
    if(!is_temp())
    {
        return top[--num];
    }
    else
       cout<< "栈已为空。" << endl;

}