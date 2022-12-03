# Proyecto-TC1033-A01705933
Documentación de mi proyecto para la materia Pensamiento Computacional Orientado a Objetos (TC1033) 

Para poder correr el programa es necesario descargar todos los archivos anteriores y ejecutar el código <g++ main.cpp -o Joyeria.exe>

**Explicación del Proyecto**

JOYERÍA MONISA
La joyería Monisa busca poder proveer joyas personalizables, donde el cliente pueda escoger características como el material, cantidad de piedras, figura etc... para nosotros es importante que la moda en las joyas no sea lo que la empresa escoga si no lo que cada cliente eliga. 

El objetivo del programa es tener una interfaz dónde los usuarios puedan realizar sus elecciones y se les muestre las características de su orden. 

Para lograr esto el programa cuenta con distintas clases que albergan las distintas características de cada Joya, también cuenta con clases Orden que estan compuestas por otras clases como Cliente, las clases de joyas previamente mencionadas, Fecha, etc... A través de estas clases se guardan los atributos que el usuario proporciona a través de interacciones con los distintos menus del main y se utilizan para calcular el precio final de la orden del cliente. 

**Correciones y Adicciones desde las entregas anteriores** 

*Competencia:* Diseño clases sencillas completas (con todos los atributos y métodos requeridos).   
*Presente en los archivos:* UML FINAL  
Se agregaron getters y setters a todas las clases, se presentan únicamente los métodos necesarios y tienen encapsulamiento correcto.   

*Competencia:* Utilizo el concepto de composición (o agreagación) en el diagrama de clases.  
*Presente en los archivos:* UML FINAL   
Se agrego composición en la clases OrdenAnillo y OrdenCollar que tienen vectores de las clases Cliente y Anillo y Collar respectivamente.   

*Competencia:* Implemento las clases en c++ siguiendo el diseño del diagrama de clases en UML.  
*Presente en los archivos:* UML FINAL, Anillo.h, Cliente.h, Collar.h, Diamante.h, Direccion.h, Fecha.h, Figura.h, Joya.h, Orden.h, OrdenAnillo.h, OrdenCollar.h  
Se realizo el diseño de las clases siguiendo el formato UML y posteriormente se programo en C++  

*Competencia:* Codifico métodos y atributos de clase correctamente. (constructores, getters, setters)  
*Presente en los archivos:* Anillo.h, Cliente.h, Collar.h, Diamante.h, Direccion.h, Fecha.h, Figura.h, Joya.h, Orden.h, OrdenAnillo.h, OrdenCollar.h  
Se programó la agregación de getters y setters en todas las clases, se modificaron los métodos para que únicamente los que sean necesarios esten dentro de las clases.   

*Competencia:* Compruebo el acceso a los atributos y métodos de la clase (encapsulamiento correcto, mando a llamar los objetos de forma útil).  
*Presente en los archivos:* main.cpp, Anillo.h, Cliente.h, Collar.h, Diamante.h, Direccion.h, Fecha.h, Figura.h, Joya.h, Orden.h, OrdenAnillo.h, OrdenCollar.h  
Se modificó el encapsulamiento, los datos que necesitan estar protegidos o privados lo están y los métodos son publicos. Dentro del main obtenemos la información 
para crear y modificar objetos.   

*Competencia:* Implemento herencia de manera correcta y util.  
*Presente en los archivos:* Diamante.h, Figura.h, Collar.h, Anillo.h, OrdenAnillo.h, OrdenCollar.h  
Se crearon clases madre y las mencionadas que son las clases hijas para simplificar el programa en los objetos que tenían características hereditarias. En el caso de 
Diamante y Figura heredan de Joya y heredan a Anillo y Collar respectivamente, pero estan diseñadas de esta manera por si se quisiera agregar otro tipo de joya como 
Arete o Pulsera que solo tenga las características de Diamante o Figura y tenga otras más.   

*Competencia:* Impemento composición (o agregación) sieguiendo mi diagrama de clases.  
*Presente en los archivos:* OrdenAnillo.h, OrdenCollar.h  
Se programaron ambas clases de manera que estan compuestas de elementos vector de tipo de otras clases creadas previamente.   

*Competencia:* Implemento clases apegadas a requerimientos a partir de un modelo.  
*Presente en los archivos:* Anillo.h, Cliente.h, Collar.h, Diamante.h, Direccion.h, Fecha.h, Figura.h, Joya.h, Orden.h, OrdenAnillo.h, OrdenCollar.h  
Se programaron las clases previamente diseñadas en el UML.   

*Competencia:* Sigo estándares en todo mi código fuente: estilo, sangrías, comentarios, nombres, etc...  
*Presente en los archivos:* main.cpp, Anillo.h, Cliente.h, Collar.h, Diamante.h, Direccion.h, Fecha.h, Figura.h, Joya.h, Orden.h, OrdenAnillo.h, OrdenCollar.h  
Se reviso que se cumplieran los lineamientos.   

*Competencia:* Cumplo con estándares en mi repositorio: tiene un readme claro que explica el proyecto  (para que sirve,  para que no sirve y como se usa), no tiene archivos basura o versiones pasadas.  
*Presente en los archivos:* README.md  
Se actualizo el README donde se explica el proyecto más claramente y se agregó esta sección donde se explica dónde y cómo se comprueban las competencias faltantes.   

*Competencia:* Guardo correctamente los avances en commits durante la materia.  
*Presente* en los archivos: En el repositorio.  
Se puede encontrar los commits realizados con todas las modificaciones a los archivos.    




