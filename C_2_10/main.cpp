#include <iostream>

using namespace std;

///Вообще не понимаю что делает программа  и зачем она нужна. И воспользоваться
///ей тоже не смог.
int main() {
  cout << "Funt"
       << ", "
       << "shilling"
       << ", "
       << "Pens\n";
  int F = 5;
  int S = 2;
  int P = 8;
  // cin>>F>>S>>P;
  double P1 = (F * 20) * 12 + S * 12 + P;
  double F1 = P1 / 240;
  // double P2 = P1%240;
  cout << "J." << F1 << ".";
  return 0;
}
