#include <iostream>
using namespace std;
#include <string>
#include "joyas.h"

int main() {
    while (true){
        int menu;
        cout << "M E N U" << endl;
        cout << "Escogue la joya que quieras presupuestar" 
        << endl;
        cout << "\t 1. Anillo" << endl;
        cout << "\t 2. Collar" << endl;
        cout << "\t 3. Aretes" << endl;
        cin >> menu;
        if (menu == 1) {
            Anillo miAnillo;
            miAnillo.precioAnillo();
        } else if (menu == 2) {
            Collar miCollar;
            miCollar.precioCollar();
        } else if (menu == 3) {
            Aretes misAretes;
            misAretes.precioAretes();
        } else {
            cout << "Opcion no valida" << endl;
        }
        cout << "Deseas presupestar otra joya? (s/n)" << endl;
        string respuesta;
        cin >> respuesta;
        if (respuesta == "n" || respuesta == "N") {
            break;
        }
    }
}