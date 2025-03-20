#include <iostream>
using namespace std;

int main() {
    // Definir las fracciones
    double frac1 = 1.0 / 3.0;
    double frac2 = 3.0 / 5.0;
    double frac3 = 1.0 / 30.0;
    
    // Sumar las fracciones
    double result = frac1 + frac2 + frac3;
    
    // Imprimir resultados
    cout << "Suma de fracciones: " << result << " (decimal)" << endl;
    
    // Verificar si el resultado coincide con 0.9768 (aproximadamente)
    double expected = 0.9768;
    if (abs(result - expected) < 0.0001) {
        cout << "El resultado coincide con el esperado (0.9768)" << endl;
    } else {
        cout << "El resultado no coincide exactamente con 0.9768" << endl;
    }
    
    return 0;
}