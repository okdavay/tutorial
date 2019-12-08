#include<iostream>
#include<iomanip>
int main()
{
unsigned long a=0;
std::cout<<"введите число\n";
std::cin>>a;
for (int j=1; j<=200; j++){
std::cout<<std::setw(5)<<a*j <<" ";
if (j%10==0)
std::cout<<std::endl;
}
return 0;
}
