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
