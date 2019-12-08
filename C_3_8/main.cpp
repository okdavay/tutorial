#include<iostream>
int main()
{
char ch;
do
{
    float ph=0,sh=0,pens=0,ph_1=0,sh_1=0,pens_1=0;
    std::cout<<"Введите первую сумму : j";
    std::cin>>ph>>sh>>pens;
    std::cout<<"\nВведите вторую сумму : j";
    std::cin>>ph_1>>sh_1>>pens_1;
        int summsh=sh+sh_1;
        int summph =ph+ph_1;
int summpens = pens+pens_1;
if (summpens>=12)
{
    summsh+=summpens/12;
    summpens=summpens%12;
}
if (summsh>=20)
{
summph +=summsh/20;
summsh=summsh%20;
}
std::cout<<"\n Всего : "<<"j"<<summph<<"."<<summsh<<"."<<summpens<<"\n";
std::cout<<"Продолжить (y/n)? \n";
std::cin>>ch;
}
while (ch!='n');
return 0;
}
