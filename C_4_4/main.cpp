#include<iostream>
struct employee
{
    int number;
    float benefits;
};
int main()
{
    employee d;
    employee d1;
    employee d2;
std::cout<<"Введите номера сотрудников через пробел :\n";
std::cin>>d.number>>d1.number>>d2.number;
std::cout<<"Введите пособие сотрудников через пробел : \n";
std::cin>>d.benefits>>d1.benefits>>d2.benefits;
std::cout<<d.number<<"    "<<d.benefits<<" dollars\n"<<d1.number<<"    "<<d1.benefits<<" dollars\n"<<d2.number<<"    "<<d2.benefits<<" dollars\n";
return 0;
}
