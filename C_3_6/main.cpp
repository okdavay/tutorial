#include <iostream>
int main()
{
unsigned int numb=1;
while (numb !=0)
{
unsigned long fact =1;
    std::cout<<"Введите целое число : \n";
    std::cin>>numb;
    for (int j=numb;j>0;j--)
    fact*=j;
    std::cout<<"Факториал числа равен "<<fact<<std::endl;
}
    return 0 ;
}
