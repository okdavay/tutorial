#include<iostream>
int main()
{
    int su,summ;
int age =0;
    float p;
std::cout<<"Введите первоночалтный взнос : \n";
std::cin>>su;
std::cout<<"Введите ппоцентную ставку : \n";
std::cin>>p;
std::cout<<"Введите желаемую сумму : \n";
std::cin>>summ;
for(;su+su*(p/100)<=summ;age++)
su=su+su*(p/100);
std::cout<<"Вам потребуется "<<age<<"лет.\n";
return 0;
}
