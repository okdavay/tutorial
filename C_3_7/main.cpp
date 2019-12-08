#include<iostream>
#include<iomanip>
int main()
{
double startup =0;
int age =0;
double p=0;
std::cout<<"Введите первоначальный взнос : \n";
std::cin>>startup;
std::cout<<"Введите количество лет : \n";std::cin>>age;
std::cout<<"Введите процентную ставку : \n";
std::cin>>p;
for (int j =0;j<age;j++)
{
double result = startup+startup*(p/100);
std::cout<<"\n"<<result<<"\t";
startup=result;
}
return 0;
}
