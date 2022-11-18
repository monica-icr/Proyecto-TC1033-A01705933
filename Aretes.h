# include <iostream>
# include <string>
using namespace std;

class Aretes{
    public:
    // Constructor default
    Aretes(){
        material = 0;
        precio = 0;
        num_figura = 0;
        figura = "";
        diamante = 0;
        num_diamantes = 0;
        mano_obra = 150;
    }
    void precioAretes(){ // Calcular precio de los aretes
        selMaterial();
        selDiamante();
        selFigura();
        
        switch(diamante)
        {
            case 1: precio = precio + 1000;
                break;
            case 2: precio = precio + 500;
                break;
            default: precio = 0;
        }
        if ( precio > 1) {
            precio = precio + mano_obra;
        }
        cout << "El precio de tus aretes es: "
        << precio << endl;
    }

    private:
    string figura; // Figura de los aretes
    int num_figura; // Número de la figura
    int material; // Material de los aretes
    int diamante; // Diamantes de los aretes
    int num_diamantes; // Número de diamantes
    float precio; // Precio de los aretes
    float mano_obra; // Precio de la mano de obra

    void selMaterial () { // Seleccionar Material
        cout << "Elige el material de tus aretes.\n"
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
        switch(material)
        {
            case 1: precio = 2000;
                break;
            case 2: precio = 1500;
                break;
            case 3: precio = 1000;
                break;
            case 4: precio = 1500;
                break;
            case 5: precio = 2500;
                break;
            default: precio = 0;
        }
    }
        
    void selDiamante(){ // Seleccionar diamantes
        cout << "¿Desea agregar diamantes a sus aretes?\n"
        << "\t 1. Si \n"
        << "\t 2. No \n"
        << endl;
        cin >> diamante;
        if (precio == 0){
            diamante = 0;
        }
    }

    void selFigura(){ // Seleccionar figura
        if (diamante == 2){
             cout << "¿Qué figura desea agregar a sus aretes?\n"
        << "\t 1. Corazón \n"
        << "\t 2. Flor \n" 
        << "\t 3. Estrella \n"
        << "\t 4. Sol \n"
        << "\t 5. Luna \n"
        << endl;
        cin >> num_figura;
        if ( num_figura > 5 || num_figura < 1 ) {
            cout << "La figura que seleccionaste es inválida" << endl;
            num_figura = 0;
        }
        switch(num_figura)
        {
            case 1: figura = "Corazón";
                break;
            case 2: figura = "Flor";
                break;
            case 3: figura = "Estrella";
                break;
            case 4: figura = "Sol";
                break;
            case 5: figura = "Luna";
                break;
            default: figura = "Ninguna";
        }
        }
        else if (diamante == 1){
            figura = "Ninguna";
        }
        else {
            cout << "La opción que seleccionaste es inválida" << endl;
            figura = "Ninguna";
            diamante = 0;
        }
    }
};
