#include<iostream>
int main()
{
start :
char dummychar = '/';
    std::cout<<"Введите первую дробь : ";
    int a,b,c,d;
    std::cin>> a>>dummychar>>b;
    std::cout<<"\n Введите вторую дробь : ";
    std::cin>>c>>dummychar>>d;
    std::cout<<"\n Введите желаемую операцию : ";
    char n;
    std::cin>>n;
    switch(n)
    {
    case '+' :
    std::cout<<"Результат равен : "<<(a*d+b*c)<<'/'<<(b*d)<<"\n";
    break;
    case '-' :
    std::cout<<"Результат равен : "<<(a*d-b*c)<<'/'<<(b*d)<<"\n";
    break;
    case '*' :
    std::cout<<"Результат равен : "<<(a*c)<<'/'<<(b*d)<<"\n";
    break;
    case '/' :
    std::cout<<"Результат равен : "<<(a*d)<<'/'<<(b*c)<<"\n";
    break;
    default : std::cout<<"\n Вы где то ошиблись!!!\n";
    }
    std::cout<<"Еще раз (y/n)?? \n";
    char q;
    std::cin>>q;
    switch (q)
    {
        case 'y' :
        goto start;
        case 'n' :
        std::cout<<"Стоп!!!\n"<<std::endl;
    }
    return 0;
}
