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


class Empleado{
private:
    int dni;
    char nombre[30];
    char apellido[30];
    char domicilio[30];
    char email[30];
    Fecha fechaNacimiento;
    int cargo;
public:
    Empleado(int d=0000,const char *n="Dani",const char *a="Martinez",const char *dom="palermo",const char *e="admin@gmail.com",int c=0){
        dni=d;
        strcpy(nombre,n);
        strcpy(apellido,a);
        strcpy(domicilio,dom);
        strcpy(email,e);
        cargo=c;
    }
    void setDni(int d){dni=d;}
    void setNombre(const char *n){strcpy(nombre,n);}
    void setApellido(const char *dom){strcpy(domicilio,dom);}
    void setDomicilio(const char *a){strcpy(apellido,a);}
    void setEmail(const char *e){strcpy(email,e);}
    void setCargo(int c){cargo=c;}
    int getDni(){return dni;}
    const char *getNombre(){return nombre;}
    const char *getApellido(){return apellido;}
    const char *getDomicilio(){return domicilio;}
    const char *getEmail(){return email;}
    int getCargo(){return cargo;}
    void Cargar();
    void Mostrar();
};

void Empleado::Cargar(){
    cout<<"Ingrese Dni"<<endl;
    cin>>dni;
    cout<<"Ingrese Nombre"<<endl;
    cargarCadena(nombre,29);
    cout<<"Ingrese Apellido"<<endl;
    cargarCadena(apellido,29);
    cout<<"Ingrese Domicilio"<<endl;
    cargarCadena(domicilio,29);
    cout<<"Ingrese Email"<<endl;
    cargarCadena(email,29);
    cout<<"Ingrese fecha de nacimiento"<<endl;
    fechaNacimiento.Cargar();
    cout<<"Ingrese su cargo"<<endl;
    cin>>cargo;
}

void Empleado::Mostrar(){
    cout<<"Dni: "<<dni<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Domicilio: "<<domicilio<<endl;
    cout<<"Email: "<<email<<endl;
    fechaNacimiento.Mostrar();
    cout<<"Cargo: "<<cargo<<endl;
}

void cargarVector(Empleado *v,int tam){
for(int i = 0;i<tam;i++){
    v[i].Cargar();
}
system("pause");
system("cls");
}

void mostrarVector(Empleado *v,int tam){
for(int i = 0;i<tam;i++){
    v[i].Mostrar();
    cout<<endl;
}
system("pause");
system("cls");
}

int main()
{
    Empleado emp[5];
    int opc;
    while(true){
     cout<<"**************************"<<endl;
    cout<<"OPCIONES"<<endl;
    cout<<"1. CARGAR VECTOR"<<endl;
    cout<<"2. MOSTRAR VECTOR"<<endl;
    cout<<"0. SALIR"<<endl;
    cout<<"**************************"<<endl;
    cin >>opc;
    system("cls");
    switch(opc){
    case 1:
    cargarVector(emp,5);
    break;
    case 2:
    mostrarVector(emp,5);
    break;
    case 0:
        return 0;
    break;
    }
    }
    return 0;
}
