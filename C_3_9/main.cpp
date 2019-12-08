#include <iostream>
int main()
{
    unsigned int guests=0,stool=0;
    unsigned long fact=1;
    unsigned long fact1=1;
    std::cout<<"Введите количество гостей и количество мест через пробел : ";
    std::cin>>guests>>stool;
    for (int j=guests;j>0;j--)
    fact *= j;
    for (int f= guests-stool;f>0;f--)
    fact1*=f;
    std::cout<<"\n Количечтво вариантор рассадки гостей равно : "<< fact/fact1 ;
    return 0;
}
