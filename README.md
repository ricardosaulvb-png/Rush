# 🚀 Rush: Un Wrapper de C++ para Código Limpio y Rápido

> "El código no debería ser una lucha. Debería ser un flujo."

## 🧬 ¿Qué es Rush?
**Rush** es una librería ligera (wrapper) para C++ diseñada para eliminar la verbosidad y la sobrecarga de la entrada/salida estándar.

No es un lenguaje nuevo, ni un traductor. Es una **capa de abstracción directa** que utiliza **Templates de C++** modernos para conectar tu código con el hardware sin intermediarios.

## ⚡ Rendimiento: ¿Por qué es tan rápido?
Muchas librerías de "simplificación" usan un "traductor universal" que convierte tipos en tiempo de ejecución (como `std::to_string` o dinámicos en Python). Esto añade una capa de **sobrecarga** (overhead).

**Rush no hace eso.**

- **Cero Conversión:** Cuando usas `print(variable)`, el compilador de C++ genera la instrucción de máquina directa para ese tipo específico. No hay búsqueda de diccionario ni conversión de memoria.
- **Zero-Cost Abstraction:** Los templates de C++ resuelven todo en tiempo de **compilación**. Tu programa final corre tan rápido como si hubieras escrito `std::cout` manualmente.
- **Eficiencia Real:** Evitas la gestión de memoria dinámica que requieren los traductores universales.

> *"Rush no añade capas de abstracción. Las elimina."*

## 📜 El Código: Antes vs. Después
La diferencia no es solo estética, es **eficiencia**.

### ❌ C++ Tradicional (Verboso y propenso a errores)
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre = "Ricardo";
    int edad = 25;
    
    // Larga, propensa a errores de tipos, difícil de leer
    cout << "Hola, " << nombre << ", tienes " << edad << " años." << endl;
    
    return 0;
}



✅ Rush (Limpio, Seguro y Rápido)
cpp

Copiar
#include "Rush.h"

int main() {
    start
        print("Hola, ", "Ricardo", ", tienes ", 25, " años.");
    finish
    return 0;
}




¿Qué ganamos?

Menos código: 1 línea en lugar de 5.
Sin errores de tipos: print detecta automáticamente si es string, int, float, etc.
Más legible: El código se lee como una oración normal.
🎨 Estructura y Estética
Rush también busca hacer el código más agradable de leer. Usamos macros para definir el "escenario" de tu programa:

cpp

Copiar
#define start rushRun();
#define finish rushEnd();

int main() {
    start
        // Tu código entra aquí
        print("Bienvenido a la magia de Rush");
        // Tu código termina aquí
    finish
    return 0;
}
Esto enmarca tu lógica principal, haciendo que el flujo del programa sea evidente de un vistazo.

🤝 Un Proyecto para la Comunidad
Este proyecto nació de una necesidad personal: quiero mejorar el lenguaje que amo y que la gente se una al hacerlo.

Rush es un experimento colaborativo.

No es perfecto.
Está en constante evolución.
Necesito tu ayuda.
Si te gusta la idea de hacer C++ más rápido y legible, únete.

Prueba el código.
Si encuentras un bug, avísame.
Si quieres añadir una función, hazlo.
Si quieres usarlo en tu proyecto, úsalo libremente.
"La mejor manera de predecir el futuro es programarlo."

📄 Cómo usarlo
Clona el repositorio.
Añade los archivos .h a tu proyecto.
Incluye #include "Rush.h" en tu main.cpp.
¡Empieza a codificar!
🌱 Licencia
Este proyecto está bajo la licencia MIT. Eres libre de usarlo, modificarlo y compartirlo.
