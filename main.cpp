#include <iostream>
#include <string>
using namespace std;
#include "OrdenAnillo.h"
#include "OrdenCollar.h"

Direccion creaDireccion(){
    // Esta función crea una dirección y la regresa
    Direccion mi_direccion;
    string calle;
    int numero;
    string colonia;
    string ciudad;
    string estado;
    int cp;
    cout << "Calle: ";
    getline(cin >> ws, calle);
    cout << "Numero: ";
    cin >> numero;
    cout << "Colonia: ";
    getline(cin >> ws, colonia);
    cout << "Ciudad: ";
    getline(cin >> ws, ciudad);
    cout << "Estado: ";
    getline(cin >> ws, estado);
    cout << "CP: ";
    cin >> cp;
    mi_direccion.setCalle(calle);
    mi_direccion.setNumero(numero);
    mi_direccion.setColonia(colonia);
    mi_direccion.setCiudad(ciudad);
    mi_direccion.setEstado(estado);
    mi_direccion.setCP(cp);
    return mi_direccion;
}

Fecha creaFecha(){
    // Esta función crea una fecha y la regresa
    Fecha f;
    cout << "Ingrese la fecha de la orden: " << endl;
    int dia;
    int mes;  
    int anio;
    cout << "Día: " << endl;
    cin >> dia;
    cout << "Mes: " << endl;
    cin >> mes;
    cout << "Año: " << endl;
    cin >> anio;
    Fecha fecha_orden;
    f.setDia(dia);
    f.setMes(mes);
    f.setAnio(anio);
    return f;
}

int menuMaterial(){
    // Esta función muestra el menú de materiales y regresa la opción elegida
    bool loop;
    loop = true;
    int num_material;
    while (loop){
        cout << "Materiales disponibles: " << endl;
        cout << "\t1. Oro amarillo" << endl;
        cout << "\t2. Oro blanco" << endl;
        cout << "\t3. Oro rosa" << endl;
        cout << "\t4. Plata" << endl;
        cout << "\t5. Platino" << endl;
        cout << "Ingrese el número del material: ";
        cin >> num_material;
        if (num_material < 1 || num_material > 5){
            cout << "\n\n Opción inválida," 
            <<" vuelva a intentarlo"<< endl;
        }
        else{
            loop = false;
        }
    }
    return num_material;
}

vector<Collar> crearCollar(){
    // Esta función crea una lista de collares y la regresa
    vector<Collar> mis_collares;
    int num_collares;
    cout << "¿Cuántos collares desea ordenar?" << endl;
    cin >> num_collares;
    for (int i = 0; i < num_collares; i++){
        Collar mi_collar;
        cout << "\n\nPersonalizemos su collar #" << i+1 << endl;
        cout << "\n ESCOGE UN MATERIAL: " << endl;
        int num_material;
        num_material = menuMaterial();
        mi_collar.setNumMaterial(num_material);
        string material;
        switch(num_material){
            case 1:
                material = "Oro amarillo";
                break;
            case 2:
                material = "Oro blanco";
                break;
            case 3:
                material = "Oro rosa";
                break;
            case 4:
                material = "Plata";
                break;
            case 5:
                material = "Platino";
                break;
        }
        mi_collar.setMaterial(material);
        bool loop;
        loop = true;
        int num_figura;
        string figura;
        while (loop){
            cout << "¿Qué figura desea agregar a su collar?\n"
            << "\t 1. Corazón \n"
            << "\t 2. Flor \n"
            << "\t 3. Estrella \n"
            << "\t 4. Sol \n"
            << "\t 5. Luna \n"
            << "\t 0. No agregar figura \n"
            << endl;
            cin >> num_figura;
            if (num_figura < 0 || num_figura > 5){
                cout << "\n\n Opción inválida," 
                <<" vuelva a intentarlo"<< endl;
            }
            else{
                loop = false;
            }
        }
        mi_collar.setNumFigura(num_figura);
        switch(num_figura){
            case 1:
                figura = "Corazón";
                break;
            case 2:
                figura = "Flor";
                break;
            case 3:
                figura = "Estrella";
                break;
            case 4:
                figura = "Sol";
                break;
            case 5:
                figura = "Luna";
                break;
            case 0:
                figura = "Ninguna";
                break;
        }
        mi_collar.setFigura(figura);
        int num_cadenas;
        cout << "¿Cuántas cadenas desea agregar a su collar?" << endl;
        cin >> num_cadenas;
        mi_collar.setCadena(num_cadenas);
         mis_collares.push_back(mi_collar);
    }
    return mis_collares;
}

vector<Anillo> crearAnillo(){
    // Esta función crea una lista de anillos y la regresa
    vector<Anillo> mis_anillos;
    cout << "¿Cuántos anillos desea ordenar?" << endl;
    int num_anillos;
    cin >> num_anillos;
    for (int i = 0; i < num_anillos; i++){
        Anillo mi_anillo;
        cout << "\n\nPersonalizemos su anillo # " << i+1 << endl;
        cout << "\nESCOGE UN MATERIAL " << endl;
        string material;
        int num_material;
        num_material = menuMaterial();
        switch(num_material){
            case 1:
                material = "Oro amarillo";
                break;
            case 2:
                material = "Oro blanco";
                break;
            case 3:
                material = "Oro rosa";
                break;
            case 4:
                material = "Plata";
                break;
            case 5:
                material = "Platino";
                break;
        }
        mi_anillo.setMaterial(material);
        mi_anillo.setNumMaterial(num_material);
        bool loop;
        loop = true;
        while (loop){
            cout << "¿Desea diamantes en su anillo?" << endl;
            cout << "\t1. Sí" << endl;
            cout << "\t2. No" << endl;
            int diamantes;
            cin >> diamantes;
            if (diamantes == 1){
                mi_anillo.setDiamante(true);
                loop = false;
                cout << "¿Cuántos diamantes desea?" << endl;
                int num_diamantes;
                cin >> num_diamantes;
                mi_anillo.setNumDiamantes(num_diamantes);
                loop = false;
            }
            else if (diamantes == 2){
                mi_anillo.setDiamante(false);
                mi_anillo.setNumDiamantes(0);
                loop = false;
            }
            else{
                cout << "Opción inválida, vuelva a intentarlo" << endl;
            }
        }
        loop = true;
        while (loop){
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
            cout << "Ingrese la talla del anillo: " << endl;
            int talla;
            cin >> talla;
            if (talla < 1 || talla > 8){
                cout << "Opción inválida, vuelva a intentarlo" << endl;
            }
            else{
                mi_anillo.setTalla(talla+4);
                mi_anillo.setNumTalla(talla);
                loop = false;
                loop = false;
            }
        }
        mis_anillos.push_back(mi_anillo);
    }
    return mis_anillos;
}
int menuJoyas(){
    // Esta función despliega el menú de joyas y regresa la opción elegida
    int opcion;
    bool loop;
    loop = true;
    while (loop){
        cout << "¿Qué joya desea agregar?" << endl;
        cout << "\t1. Anillo" << endl;
        cout << "\t2. Collar" << endl;
        cout << "\t3. Salir" << endl;
        cin >> opcion;
        if (opcion == 1 || opcion == 2 || opcion == 3){
            loop = false;
        }
        else{
            cout << "Opción inválida" << endl;
        }
    }
    return opcion;
}

vector<Cliente> cantidadClientes(int num_clientes){
    // Esta función crea una lista de clientes y la regresa
    vector <Cliente> mis_clientes; 
    for (int i = 0; i < num_clientes; i++){
        cout << "Nombre del cliente # "<<i+1<<": " << endl;
        string nombre;
        getline(cin >> ws, nombre);
        cout << "Apellido del cliente: " << endl;
        string apellido;
        getline(cin >> ws, apellido);
        cout << "Teléfono del cliente: " << endl;
        long long int telefono;
        cin >> telefono;
        cout << "Correo del cliente: " << endl;
        string correo;
        getline(cin >> ws, correo);
        Cliente nuevo_cliente;
        nuevo_cliente.setNombre(nombre);
        nuevo_cliente.setApellido(apellido);
        nuevo_cliente.setTelefono(telefono);
        nuevo_cliente.setCorreo(correo);
        mis_clientes.push_back(nuevo_cliente);
    }
    return mis_clientes;
}


int menu(){
    // Esta función despliega el menú principal y regresa la opción elegida
    int opcion; 
    bool loop;
    int num_clientes;
    loop = true;
    while (loop){
        cout << "\n\tMENU" << endl;
        cout << "1. Realizar orden" << endl;
        cout << "2. Salir" << endl;
        cin >> opcion;
        if (opcion == 1 || opcion == 2){
            loop = false;
        }
        else{
            cout << "Opción inválida,"
            <<" vuelva a intentarlo"<< endl;
        }
    }
    return opcion;
}

int main(){
    // Esta función es la principal y llama a las demás funciones
    bool loop;
    int opcion;
    int opcion_joya;
    int num_clientes;
    loop = true;
    Fecha fecha_orden;
    cout << "\n\n\tB I E N V E N I D O S " << endl;
    cout << "\nEsta es la joyería MONISA" << endl;
    cout << "Aquí encontrarás las mejores joyas" 
    << " adecuadas a TU gusto"<< endl;
    while (loop){
        int opcion = menu();
        if (opcion == 1){
            vector <Cliente> mis_clientes;
            cout << "¿Cuántos clientes desea agregar?"
            <<" (cuántos pagarán por la orden)"<< endl;
            cin >> num_clientes;
            mis_clientes = cantidadClientes(num_clientes);
            fecha_orden = creaFecha();
            cout << "Ingrese el método de pago: " << endl;
            string metodo_pago;
            getline(cin >> ws, metodo_pago);
            cout << "Ingrese la dirección de envío: " << endl;
            Direccion direccion_envio;
            direccion_envio = creaDireccion();
            opcion_joya = menuJoyas();
            if (opcion_joya == 1){
                vector <Anillo> mis_anillos;
                OrdenAnillo nueva_orden; 
                nueva_orden = OrdenAnillo();
                nueva_orden.setFecha(fecha_orden);
                nueva_orden.setMetodoPago(metodo_pago);
                mis_anillos = crearAnillo();
                nueva_orden.setAnillos(mis_anillos);
                nueva_orden.setClientes(mis_clientes);
                nueva_orden.setDireccion(direccion_envio);
                nueva_orden.imprimirOrden();
            }else if(opcion_joya == 2){
                vector <Collar> mis_collares;
                OrdenCollar nueva_orden;
                nueva_orden = OrdenCollar();
                nueva_orden.setFecha(fecha_orden);
                nueva_orden.setMetodoPago(metodo_pago);
                mis_collares = crearCollar();
                nueva_orden.setCollares(mis_collares);
                nueva_orden.setClientes(mis_clientes);
                nueva_orden.setDireccion(direccion_envio);
                nueva_orden.imprimirOrden();
            }else if (opcion_joya == 3){
                cout <<"Gracias por su visita" << endl;
                loop = false;
            }else{
                cout<< "Opción inválida, vuelva a intentarlo" << endl;
            }
        }
        else if (opcion == 2){
            cout << "Gracias por su compra en MONISA" << endl;
            loop = false;
        }
    }
    return 0;
}
