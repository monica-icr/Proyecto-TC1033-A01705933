# include <iostream>
# include <string>
using namespace std;

class Anillo{
    public:
    // Constructor default
    Anillo(){
        material = 0;
        talla = 0;
        diamante = 0;
    }
    // Precio Anillo
    void precioAnillo(){
        selMaterial();
        selTalla();
        selDiamante();
        precioMaterial();
        precio = precio_m;
        if ( diamante == 1 ) {
            precio = precio + (num_diamantes * 1000);
        }
        cout << "El precio de tu anillo es:"
        << precio << endl;
    }

    private:
    int material; // Material del anillo
    int talla; // Talla del anillo
    float precio; // Precio del anillo
    float precio_m; // Precio del material
    int diamante; // Diamante del anillo
    int num_diamantes; // Numero de diamantes

    void selMaterial () { // Seleccionar Material
        cout << "Elige el material de tu anillo.\n"
        << "\t 1. Oro amarillo\n"
        << "\t 2. Oro blanco \n"
        << "\t 3. Oro rosa \n"
        << "\t 4. Plata \n"
        << "\t 5. Platino \n"
        << endl;
        cin >> material;
        if ( material > 5 || material < 1 ) {
            cout << "El material que seleccionaste es inválido" << endl;
            material = 0;
        }
        else {
            cout << "El material que seleccionaste es: "
            << material << endl;
        } 

    }
    void selTalla () { // Seleccionar Talla
        cout << "Elige la talla de tu anillo.\n"
        << "\t 1. 5 \n"
        << "\t 2. 6 \n"
        << "\t 3. 7 \n"
        << "\t 4. 8 \n"
        << "\t 5. 9 \n"
        << "\t 6. 10 \n"
        << "\t 7. 11 \n"
        << "\t 8. 12 \n"
        << endl;
        cin >> talla;
        if ( talla > 8 || talla < 1 ) {
            cout << "La talla que seleccionaste es inválida" << endl;
            talla = 0;
        }
        else {
            cout << "La talla que seleccionaste es: "
            << talla << endl;
        }
    }
    void precioMaterial() { // Designar precio del material
        switch(material)
        {
            case 1: precio_m = 3000;
                break;
            case 2: precio_m = 2500;
                break;
            case 3: precio_m = 2000;
                break;
            case 4: precio_m = 2500;
                break;
            case 5: precio_m = 3500;
                break;
            default: precio_m = 0;
        }
        if (material == 0){
            talla = 0;
        }
        switch(talla)
        {
            case 1: precio_m = precio_m *4;
                break;
            case 2: precio_m = precio_m *4.1;
                break;
            case 3: precio_m = precio_m *4.2;
                break;
            case 4: precio_m = precio_m *4.3;
                break;
            case 5: precio_m = precio_m *4.4;
                break;
            case 6: precio_m = precio_m *4.5;
                break;
            case 7: precio_m = precio_m *4.6;
                break;
            case 8: precio_m = precio_m *4.7;; 
                break;
            default: precio_m = 0;
        }
    }
    void selDiamante(){ // Seleccionar cant. diamantes
        cout << "¿Desea agregar diamantes a su anillo?\n"
        << "\t 1. Si \n"
        << "\t 2. No \n"
        << endl;
        cin >> diamante;
        if ( diamante == 1 ) {
            cout << "¿Cuántos diamantes desea agregar?\n"
            << endl;
            cin >> num_diamantes;
        }
        else if ( diamante == 2 ) {
            cout << "No se agregaron diamantes a su anillo" << endl;
        }
        else {
            cout << "La opción que seleccionaste es inválida" << endl;
        }
    }

};