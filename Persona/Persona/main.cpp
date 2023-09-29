#include <iostream>
#include<cstring>
using namespace std;
#include"fecha.h"

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


class Persona{
protected:
    char nombre[30], apellido[30], direccion[30];
    char email[30], telefono[30];
    int DNI;
    Fecha fechaNacimiento;
public:
    void Cargar();
    void Mostrar();
    void setDNI(int d){DNI=d;}

    int getDNI(){return DNI;}

};


void Persona::Cargar(){
    cout<<"NOMBRE: ";
    cargarCadena(nombre, 29);
    cout<<"APELLIDO: ";
    cargarCadena(apellido, 29);
    cout<<"DIRECCION: ";
    cargarCadena(direccion, 29);
    cout<<"EMAIL: ";
    cargarCadena(email, 29);
    cout<<"TELEFONO: ";
    cargarCadena(telefono, 29);
    cout<<"DNI: ";
    cin>>DNI;
    cout<<"FECHA DE NACIMIENTO "<<endl;
    fechaNacimiento.Cargar();

}

void Persona::Mostrar(){
    cout<<"NOMBRE: ";
    cout<<nombre<<endl;
    cout<<"APELLIDO: ";
    cout<<apellido<<endl;
    cout<<"DIRECCION: ";
    cout<<direccion<<endl;
    cout<<"EMAIL: ";
    cout<<email<<endl;
    cout<<"TELEFONO: ";
    cout<<telefono<<endl;
    cout<<"DNI: ";
    cout<<DNI<<endl;
    cout<<"FECHA DE NACIMIENTO "<<endl;
    fechaNacimiento.Mostrar();
}

class Empleado: Persona{
private:
    int categoria;
    float sueldo;
    Fecha fechaIngreso;
public:
    Empleado(int c=0,float s=0000){
        categoria=c;
        sueldo=s;
    }
    void setCategoria(int c){categoria=c;}
    void setSueldo(float s){sueldo=s;}
    int getCategoria(){return categoria;}
    float getSueldo(){return sueldo;}
    void Cargar();
    void Mostrar();
};

class Proveedor: Persona{
private:
    int cuil;
    int tipoProducto;
    char condicionDePago;
public:
    Proveedor(int c=0000,int t=0,char cu='a'){
    cuil=c;
    tipoProducto=t;
    condicionDePago=cu;
    }
    void setCuil(int c){cuil=c;}
    void setTipoProducto(int t){tipoProducto=t;}
    void setCondicionDePago(char c){condicionDePago=c;}
    int getCuil(){return cuil;}
    int getTipoProducto(){return tipoProducto;}
    char getCondicionDePago(){return condicionDePago;}
    void Cargar();
    void Mostrar();
};

class Docente: Persona{
private:
    int legajo;
    char cargo[15];
    Fecha fechaIngreso;
public:
    Docente(int l=0000,const char *c="undefined"){
    legajo=l;
    strcpy(cargo,c);
    }
    void setLegajo(int l){legajo=l;}
    void setCargo(const char *c){strcpy(cargo,c);}
    int getLegajo(){return legajo;}
    const char *getCargo(){return cargo;}
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
