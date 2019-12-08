#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    for (int s = 1; s <= 20; s++)
    {
        cout << setw(21 - s) << " ";

        for (int a = 2; a <= s*2; a++)
        {
            cout << "X";
        }
        cout << endl;
    }
    getch();
    return 0;
}
