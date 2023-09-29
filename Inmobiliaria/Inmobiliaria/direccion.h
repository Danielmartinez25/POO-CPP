#ifndef DIRECCION_H_INCLUDED
#define DIRECCION_H_INCLUDED
#include <cstring>
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


class Direccion{
private:
    char calle[30];
    int numero;
    int codigoPostal;
    char localidad[30];
    char piso[5];
public:
    Direccion(const char *ca="Ituzaingo",int num=0000,int co=0000,const char *lo="Escobar",const char *pi="1C"){
        strcpy(calle,ca);
        numero=num;
        codigoPostal=co;
        strcpy(localidad,lo);
        strcpy(piso,pi);
    }
    const char *getCalle(){return calle;}
    int getNumero(){return numero;}
    int getCodigoPostal(){return codigoPostal;}
    const char *getLocalidad(){return localidad;}
    const char *getPiso(){return piso;}
    void setCalle(const char *c){strcpy(calle,c);}
    void setNumero(int n){numero=n;}
    void setCodigoPostal(int c){codigoPostal=c;}
    void setLocalidad(const char *l){strcpy(localidad,l);}
    void setPiso(const char *pi){strcpy(piso,pi);}
    Cargar();
    Mostrar();
};
#endif // DIRECCION_H_INCLUDED
