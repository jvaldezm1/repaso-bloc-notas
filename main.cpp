#include <iostream>
#include "archivos.h"
using namespace  std;

int main() {
    leerArchivo1("C:\\Users\\miran\\OneDrive\\Escritorio\\2023-Manejo-de-Archivos-C-master\\datos.txt");
    cout<<endl;
    modificarArchivo2("C:\\Users\\miran\\OneDrive\\Escritorio\\nv\\prueba.txt");
    cout<<endl;
    leerArchivo1("C:\\Users\\miran\\OneDrive\\Escritorio\\nv\\prueba.txt");
    cout << "Fin del programa" << std::endl;
    return 0;
}
