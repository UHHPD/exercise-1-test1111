#include <fstream>
#include <iostream>

int main() {
  std::ifstream file("daten.txt");
  std::ofstream fout("datensumme.txt");
  int a, b;
  for (int i = 0; i < 234; ++i) {
    file >> a >> b;
    int summe = a + b;
    fout << summe << "\n";
  }

  file.close();
  fout.close();
  return 0;
}
