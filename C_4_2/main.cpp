#include<iostream>
struct point
{
    int x;
    int y;
};
int main()
{
point p1;
point p2;
std::cout<<"Введите коордтнаты точки p1 : ";
std::cin>>p1.x>>p1.y;
std::cout<<"\nВведите коордтнаты точки p2 : ";
std::cin>>p2.x>>p2.y;
std::cout<<"\nКоординаты точки p1+p2 равны "<<p1.x + p2.x<<", "<<p1.y+p2.y<<"\n";
return 0;
}
