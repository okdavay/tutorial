#include<iostream>
int main()
{
std::cout<<"Введите:\n'1' для перевода шкалы Цельсия в шкалу Фарингейта.\n'2' для перевода шкалы Фарингейта в шкалу Цельсия.\n";
int temp =0;
std::cin>>temp;
    float C=0;
    float F1 =0;
switch(temp){
    case 1 :
    std::cout<<"Введите температуру в градусах Цельсия : \n";
std::cin>>C;
    std::cout<<"Температура по Фарингейту равна : "<<(C*9/5)+32<<std::endl;
    break;
    case 2 :
    std::cout<<"Введите температуру по Фарингейту : \n";
    std::cin>>F1;
    std::cout<<"Температура по Цельсию равна : "<<(F1-32)*5/9<<std::endl;
    break;
    default :
    std::cout<<"Вы ввели не верную цифру.\n";
}
    return 0;
}
