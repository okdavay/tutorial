#include<iostream>
struct phone
{
    int code;
    int station;
    int abonent;
};
int main()
{
    phone number {212,767,8900};
    phone number1;
    std::cout<<"Введите код города, номер станции и номер абонента : \n";
    std::cin>>number1.code>>number1.station>>number1.abonent;
    std::cout<<"Мой номер ("<<number.code<<")  "<<number.station<<"-"<<number.abonent<<"\n";
    std::cout<<"Ваш номер ("<<number1.code<<")  "<<number1.station<<"-"<<number1.abonent<<"\n";
    return 0;
}
