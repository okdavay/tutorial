#include <iostream>
// f �� ����� ������� � ��� ��� ����� ����� ���� float
#define k_F 7.481f

int main() {
  std::cout << "введите число галлонов :";

  float gal = 0;
  std::cin >> gal;

  float result = gal / k_F;

  std::cout << result << "\b"
            << "кубических фунтов \n";

  return 0;
}

// PS ����� ����� ������ ����� ������������. � ��������� ����������� ��
// ��������.
