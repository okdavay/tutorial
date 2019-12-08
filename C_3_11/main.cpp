#include<iostream>
int main()
{
char ch='y';
while(ch =='y')
{
    float ph=0,sh=0,pens=0,ph_1=0,sh_1=0,pens_1=0;
char o;
float n =1.0;
//Вычесляем умножение :
 std::cout<<"\nВведите желаемую операцию : ";
std::cin>>o;
if (o == '*')
{
std::cout<<"Введите сумму : j";
std::cin>>ph>>sh>>pens;
 std::cout<< "\nВведите множитель : ";
 std::cin>>n;
 int uph=ph*n;
int ush=sh*n;
int upens=pens*n;
if(upens>=12)
{
   ush+=upens/12;
   upens=upens%12;
}
if (ush>=20)
{
   uph+=ush/20;
   ush=ush%20;
}
   std::cout<<"\nРезультат умножения равен : "<<'j'<<uph<<'.'<<ush<<'.'<<upens<<"\n";
std::cout<<"Продолжить (y/n)? \n";
std::cin>>ch;
if (ch!='y' && ch!='n')std::cout<<"Вы ввели неверное значение!!";
if (ch =='n')
std::cout<<"Конец!!!\n"<<std::endl;
}
else
{
    std::cout<<"Введите первую сумму : j";
    std::cin>>ph>>sh>>pens;
    std::cout<<"\nВведите вторую сумму : j";
 std::cin>>ph_1>>sh_1>>pens_1;
//вычисляем сумму:
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
//вычисляем разность:
 if (pens-pens_1<0)
 {
pens+=12;sh--;
 }
int rpens = pens-pens_1;
if(sh-sh_1<0)
{
sh+=20;ph--;
}
 int rsh = sh - sh_1;
int rph = ph-ph_1;
//выбор действия при определенном операторе
  switch (o)
 {
 case '+' :
std::cout<<"\n Результат равен : "<<"j"<<summph<<"."<<summsh<<"."<<summpens<<"\n";
break;
case '-' :
 std::cout<<"\n Результат равен : "<<"j"<<rph<<"."<<rsh<<"."<<rpens<<"\n";
 break;
 }
std::cout<<"Продолжить (y/n)? \n";
std::cin>>ch;
if (ch!='y' && ch!='n')std::cout<<"Вы ввели неверное значение!!";
if (ch =='n')
std::cout<<"Конец!!!\n"<<std::endl;
}
}
 return 0;
}
