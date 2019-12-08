#include<iostream>
#include<stdlib.h>
int main()
{
    double a=0,b=0;
    char ch;
one: std::cout<<" Введите первый операнд, операцию и второй операнд : ";
    std::cin>>a>>ch>>b;
        switch(ch){
        case '+' : std::cout<<"\n Результат равен : "<<a+b<<"\n";
        break;
        case '-': std::cout<<"Результат равен : "<<a-b<<"\n";
        break;
        case '*' : std::cout<<"Результат равен : "<<a*b<<"\n";
        break;
        case '/' : std::cout<<"Результат равен : "<<a/b<<"\n";
        break;
        default : std::cout<<"Не верный оператор\n";
    }
    std::cout<<"Выполнить еще одну операцию (y/n)? \n";
    char q;
    std::cin>>q;
    if (q=='y')
    goto one;
    else if (q=='n')
    std::cout<<"Приходите еще!!!";
    else
std::exit(0);
    return 0;
}
