#include <iostream>
// f на конце говорит о том что число будет типа float
#define k_F 7.481f

int main() {
  std::cout << "РІРІРµРґРёС‚Рµ С‡РёСЃР»Рѕ РіР°Р»Р»РѕРЅРѕРІ :";

  float gal = 0;
  std::cin >> gal;

  float result = gal / k_F;

  std::cout << result << "\b"
            << "РєСѓР±РёС‡РµСЃРєРёС… С„СѓРЅС‚РѕРІ \n";

  return 0;
}

// PS имена лучше давать более осмысленными. В маленьких приложениях не
// критично.
