#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("daten.txt");
    
    if (!file.is_open()) {
        std::cerr << "Fehler beim Öffnen der Datei daten.txt" << std::endl;
        return 1;
    }
    
    int num1, num2;
    int summe = 0;
    int anzahl = 0;
    
    while (file >> num1 >> num2) {
        summe += (num1 + num2);
        anzahl++;
    }
    
    file.close();
    
    std::cout << "Anzahl der Paare: " << anzahl << std::endl;
    std::cout << "Gesamtsumme: " << summe << std::endl;
    
    if (anzahl > 0) {
        std::cout << "Durchschnitt: " << static_cast<double>(summe) / anzahl << std::endl;
    }
    
    return 0;
}
