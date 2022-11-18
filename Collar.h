# include <iostream>
# include <string>
using namespace std;

class Collar{
    public:
    // Constructor default
    Collar(){
        material = 0;
        cadenas = 0;
        num_cadenas = 0;
        precio = 0;
        num_figura = 0;
        figura = "";
        mano_obra = 250;
    }
    void precioCollar() { // Precio Collar
        selMaterial();
        selCadena();
        selFigura();
        precio = precio + ( num_cadenas * precio);
        if (num_figura>0){
            precio = precio + 700;
        }
        if (num_cadenas < 1 || num_cadenas > 5){
            precio = 0;
        }
        if ( precio > 1) {
            precio = precio + mano_obra;
        }
        cout << "El precio de tu collar es: "
        << precio << endl;
    }
    
    private: 
    int material; // Material del collar
    int cadenas; // Cadenas del collar
    int num_cadenas; // Numero de cadenas
    float precio; // Precio del collar
    int num_figura; // Numero de figura
    string figura; // Figura del collar
    float mano_obra; // Precio de la mano de obra

    void selMaterial () { // Seleccionar Material
        cout << "Elige el material de tu collar.\n"
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
            case 1: precio = 4000;
                break;
            case 2: precio = 3500;
                break;
            case 3: precio = 3000;
                break;
            case 4: precio = 3500;
                break;
            case 5: precio = 4500;
                break;
            default: precio = 0;
        }
    }

    void selCadena(){ // Seleccionar cant. cadenas
        cout << "¿Cuántas cadenas desea agregar a su collar? (MAX 5)\n"
        << endl;
        cin >> num_cadenas;
        if ( num_cadenas > 5 || num_cadenas < 1 ) {
            cout << "El número de cadenas que seleccionaste es inválido" << endl;
            num_cadenas = 0;
        }
        else {
            cout << "El número de cadenas que seleccionaste es: "
            << num_cadenas << endl;
        }
    }

    void selFigura(){ // Seleccionar figura
        cout << "¿Qué figura desea agregar a su collar?\n"
        << "\t 1. Corazón \n"
        << "\t 2. Flor \n"
        << "\t 3. Estrella \n"
        << "\t 4. Sol \n"
        << "\t 5. Luna \n"
        << "\t 6. No agregar figura \n"
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
};
