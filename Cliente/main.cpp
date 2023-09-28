#include <iostream>
#include <cstring>
using namespace std;
#include "fecha.h"



void cargarCadena(char *palabra, int tam){
    int i = 0;
    fflush(stdin);
    for (i = 0 ; i < tam ; i++ ){
        palabra[i] = cin.get();
        if(palabra[i] == '\n') break;
    }
    palabra[i] = '\0';
    fflush(stdin);
}


class Cliente{
    private:
    int Dni;
    Fecha fechaNacimiento;
    char Nombre[30];
    char Apellido[30];
    char Email[30];
    int Telefono;
    public:
    Cliente(int d=0000,const char *a="Martinez",const char *e="admin@gmail.com",int t=0000){
    Dni=d;
    strcpy(Apellido,a);
    strcpy(Email,e);
    Telefono=t;
    }
    Cliente(const char *n){
    strcpy(Nombre,n);
    }
    void setDni(int d){Dni=d;}
    void setNombre(const char *n){strcpy(Nombre,n);}
    void setApellido(const char *a){strcpy(Apellido,a);}
    void setEmail(const char *e){strcpy(Email,e);}
    void setTelefono(int t){Telefono=t;}
    int getDni(){return Dni;}
    const char *getNombre(){return Nombre;}
    const char *getApellido(){return Apellido;}
    const char *getEmail(){return Email;}
    int getTelefono(){return Telefono;}
    void Cargar();
    void Mostrar();
};

void Cliente::Cargar(){
    cout<<"Ingrese DNI"<<endl;
    cin>>Dni;
    cout<<"Ingrese fecha nacimiento"<<endl;
    fechaNacimiento.Cargar();
    cout<<"Ingrese nombre"<<endl;
    cargarCadena(Nombre,29);
    cout<<"Ingrese apellido"<<endl;
    cargarCadena(Apellido,29);
    cout<<"Ingrese email"<<endl;
    cargarCadena(Email,29);
    cout<<"Ingrese numero telefonico"<<endl;
    cin>>Telefono;
}

void Cliente::Mostrar(){
    cout<<"DNI: "<<Dni<<endl;
    fechaNacimiento.Mostrar();
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Apellido: "<<Apellido<<endl;
    cout<<"Email: " <<Email<<endl;
    cout<<"Numero telefonico: "<<Telefono<<endl;
}

void cargarVector(Cliente *c,int tam){
    for(int i =0; i<tam;i++){
        c[i].Cargar();
    }
    system("cls");
}
void mostrarVector(Cliente *c,int tam){
    for(int i =0; i<tam;i++){
        c[i].Mostrar();
        cout<<endl;
    }
    system("pause");
    system("cls");
}

void dniMayorCliente(Cliente *c,int tam,int d){
    for(int i =0; i<tam;i++){
        if(c[i].getDni() > d){
            c[i].Mostrar();
        }
    }
    system("pause");
    system("cls");
}

void posicionDniCliente(Cliente *c,int tam,int d){
    int contador=0;
    bool band=false;
    for(int i =0; i<tam;i++){
        contador++;
        if(c[i].getDni()==d){
        cout<<contador<<endl;
        band=true;
        }
    }
    if(!band){
        cout<<-1<<endl;
    }
    system("pause");
    system("cls");
}


void retornoDniCliente(Cliente *c,int tam,int d){
    bool band=false;
    for(int i =0; i<tam;i++){
        if(c[i].getDni()==d){
        c[i].Mostrar();
        band=true;
    system("pause");
    system("cls");
    }
}
    if(!band){
        c[2].setDni(-1);
        c[2].Mostrar();
        system("pause");
        system("cls");
    }
}

void fechaCliente(Cliente *c,int tam,int a){
    int cont=0;
    for(int i =0; i<tam;i++){
    cout<<c[0].fechaNacimiento.getAnio()<<endl;
    /*if(c[i].fechaNacimiento.getAnio()<a){
        cont++;
    }*/
}
cout<<cont<<endl;
}
int main()
{
    Cliente cli[3];
    int opc;
    while(true){
     cout<<"**************************"<<endl;
    cout<<"OPCIONES"<<endl;
    cout<<"1. CARGAR VECTOR"<<endl;
    cout<<"2. MOSTRAR VECTOR"<<endl;
    cout<<"3. Listar todos los clientes cuyo DNI sea mayor a un valor que se ingresa por teclado."<<endl;
    cout<<"4. A partir de un valor de DNI recibido como parámetro, devolver la posición del objeto que contiene ese DNI. De no encontrarlo devolver -1."<<endl;
    cout<<"5. Igual a la función del punto anterior, pero debe devolver el objeto completo que contiene el DNI. De no encontrar el código la función debe devolver un objeto Cliente con un valor de -1 en el DNI "<<endl;
    cout<<"6. Dado una fecha que se recibe como parámetro devolver la cantidad de clientes cuyo nacimiento sea anterior a ese valor recibido."<<endl;
    cout<<"7. DADO UN PORCENTAJE DE INCREMENTO QUE SE RECIBE COMO PARÁMETRO, MODIFICAR EL PRECIO UNITARIO DE TODOS LOS OBJETOS"<<endl;
    cout<<"0. SALIR"<<endl;
    cout<<"**************************"<<endl;
    cin >>opc;
    system("cls");
    switch(opc){
    case 1:
    cargarVector(cli,3);
    break;
    case 2:
    mostrarVector(cli,3);
    break;
    case 3:
    int dni;
    cout<<"Ingrese Dni"<<endl;
    cin>>dni;
    dniMayorCliente(cli,3,dni);
    break;
    case 4:
        posicionDniCliente(cli,3,44287296);
    break;
    case 5:
        retornoDniCliente(cli,3,44987296);
    break;
    case 6:
        fechaCliente(cli,3,2003);
    break;
    case 0:
        return 0;
    break;
    }
    }
    return 0;
}
