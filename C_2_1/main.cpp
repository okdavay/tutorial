#include <iostream>
//#define k_F 7,481

int main()
{
const float k_F = 7.481F;
std::cout<<"введите число галлонов : \n ";
float gal =0;
std::cin>>gal;
float result=gal/k_F;
std::cout<< result<<"\b"<<"кубических фунтов \n";
return 0;
}
