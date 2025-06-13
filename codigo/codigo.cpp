#include <iostream> // Para entrada/salida (cin, cout)
#include <string>   // Para usar string para el nombre
using namespace std;

int main() {
    string nombre_estudiante;
    double nota_examen;
    double suma_notas = 0.0;
    int contador_examenes = 0;

//aqui hacemos un pequeño menu para el usuario 
    cout << "--- Calculadora de Promedio de Notas ---" << endl;
    cout << "Ingresa el nombre del estudiante: "<<endl;
    getline(cin, nombre_estudiante); // utilizamos getline para que lea todo lo que ingrese el usuario (o sea mas el espacio)
    cout << "Ahora, ingresa las notas de los examenes de " << nombre_estudiante << "." << endl;
    cout << "Ingresa '0' (cero) para terminar de ingresar notas y calcular el promedio." << endl;
    cout << "---------------------------------------" << endl;

// aqui usamos un bucle infinito para que pida notas hasta que ingresemos 0, en ese caso el bucle se rompe
    while (true) {
        cout << "Nota del examen n" << (contador_examenes + 1) << ": "; //aqui usamos el +1 por razones esteticas
        cin >> nota_examen; // Lee la nota


        if (nota_examen == 0) { // aqui el bucle se rompe si el usuario ingresa 0
            break;
        }

//aqui nos aseguramos que el usuario ingrese una nota valida, que este entre 0 a 100
        if (nota_examen < 0 || nota_examen > 100) {
            cout << "Advertencia: Nota fuera del rango tipico (0-100). Ingresa otra vez." << endl;
// Limpiar el estado de error de cin y ignorar el resto de la línea
            cin.clear();
            cin.ignore(10000, '\n'); 
            continue; // y aqui volvemos al inicio del bucle
        }

        suma_notas += nota_examen;      // sumamos la nota ingresada
        contador_examenes++;            // Incrementa el contador de examenes
    }

// calculamos y mostramos el promedio
    cout << "\n--- Resultados para " << nombre_estudiante << " ---" << endl;

    if (contador_examenes == 0) {
        cout << "No se ingresaron notas para " << nombre_estudiante << "." << endl;
    } else {
        double promedio = suma_notas / contador_examenes;
        cout << "Total de examenes ingresados: " << contador_examenes << endl;
        cout << "Suma total de notas: " << suma_notas << endl;
        cout << "El promedio de notas para " << nombre_estudiante << " es: " << promedio << endl;
    }

    cout << "\nGracias por usar el programa." << endl;

    return 0; 
}
