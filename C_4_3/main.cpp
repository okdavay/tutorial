#include<iostream>
struct Distance
{
    int feet;
    float inches;
};
struct Volume
{
    Distance length;
    Distance widht;
    Distance height;
};
int main()
{
Volume kitchen {{30,7.5}, {18,5.9}, {9,7.8}};
float l = kitchen.length.feet+kitchen.length.inches/12;
float w = kitchen.widht.feet+kitchen.widht.inches/12;
float h = kitchen.height.feet+kitchen.height.inches/12;
std::cout<<"Объем кухни составляет : "<<l*w*h<<" кубических футов\n ";
return 0;
}
