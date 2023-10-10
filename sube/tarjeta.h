#ifndef TARJETA_H_INCLUDED
#define TARJETA_H_INCLUDED
#include <cstring>

class Tarjeta{
  private:
    int nroTarjeta;
    Fecha fechaAlta;
    int dni;
    float saldo;
    bool estado;
  public:
    int getNroTarjeta(){return nroTarjeta;}
    int getDiaAlta(){return fechaAlta.getDia();}
    int getMesAlta(){return fechaAlta.getMes();}
    int getAnioAlta(){return fechaAlta.getAnio();}
    int getDNI(){return dni;}
    float getSaldo(){return saldo;}
  };


class ArchivoTarjeta{
private:
    char nombre[30];
public:
    ArchivoTarjeta(const char *n){
        strcpy(nombre,n);
    }
    Tarjeta leerRegistro(int pos){
        FILE *p;
        Tarjeta x;
        p=fopen(nombre,"rb");
        if(p==NULL) exit(1);
        fseek(p, pos* sizeof x,0);
        fread(&x, sizeof x, 1, p);
        fclose(p);
        return x;
      }
      int grabarRegistro(Tarjeta x){
        FILE *p;
        p=fopen(nombre,"ab");
        if(p==NULL) return -1;
        int escribio=fwrite(&x, sizeof x, 1, p);
        fclose(p);
        return escribio;
      }
      int contarRegistros(){
        FILE *p;
        p=fopen(nombre,"rb");
        if(p==NULL) return -1;
        fseek(p,0,2);
        int tam=ftell(p);
        fclose(p);
        return tam/sizeof(Tarjeta);
      }
};


class Viaje{
 private:
    int nroViaje;
    int nroTarjeta;
    int medio;
    Fecha fechaViaje;
    float importe;
    bool estado;
  public:
    int getNroTarjeta(){return nroTarjeta;}
    int getMedioTransporte(){return medio;}
    int getMesViaje(){return fechaViaje.getMes();}
    int getAnioViaje(){return fechaViaje.getAnio();}
    float getImporte(){return importe;}
    void Mostrar(){}
};


class ArchivoViaje{
private:
    char nombre[30];
public:
    ArchivoViaje(const char *n){
        strcpy(nombre,n);
    }
    Viaje leerRegistro(int pos){
        FILE *p;
        Viaje x;
        p=fopen(nombre,"rb");
        if(p==NULL) exit(1);
        fseek(p, pos* sizeof x,0);
        fread(&x, sizeof x, 1, p);
        fclose(p);
        return x;
      }
      int grabarRegistro(Viaje x){
        FILE *p;
        p=fopen(nombre,"ab");
        if(p==NULL) return -1;
        int escribio=fwrite(&x, sizeof x, 1, p);
        fclose(p);
        return escribio;
      }
      int contarRegistros(){
        FILE *p;
        p=fopen(nombre,"rb");
        if(p==NULL) return -1;
        fseek(p,0,2);
        int tam=ftell(p);
        fclose(p);
        return tam/sizeof(Viaje);
      }
};

void punto1(){
    ArchivoViaje archi("viajes.dat");
    Viaje via;
    int cantVia=archi.contarRegistros();
    int vViaje[3]={0};
    int tarjeta;
    cout<<"Ingresa numero de tarjeta "<<endl;
    cin>>tarjeta;
    for(int i=0;i<cantVia;i++){
        via=archi.leerRegistro(i);
        if(via.getNroTarjeta()==tarjeta && via.getAnioViaje()==2022){
                vViaje[via.getMedioTransporte()-1]++;
        }
    }
    cout<<"CANTIDAD DE VIAJES EN COLECTIVO "<<vViaje[0]<<endl;
    cout<<"CANTIDAD DE VIAJES EN SUBTE "<<vViaje[1]<<endl;
    cout<<"CANTIDAD DE VIAJES EN TREN "<<vViaje[2]<<endl;
}
void punto2(){
    ArchivoViaje archi("viajes.dat");
    Viaje via,barato;
    int menorImporteViaje;
    int cantVia=archi.contarRegistros();
    for(int i=0;i<cantVia;i++){
        via=archi.leerRegistro(i);
        if(i==0){
            menorImporteViaje=via.getImporte();
            barato=via;
        }else{
        if(via.getImporte()< menorImporteViaje){
        menorImporteViaje=via.getImporte();
        barato=via;
        }
        }
    }
    cout<<"El viaje de menor importe"<<endl;
    barato.Mostrar();
}


int buscarMaximo(int *v,int tam){
    int mayMes;
    for(int i=0;i<tam;i++){

        if(i==0){
            mayMes=v[i];
        }else{
        if(v[i]>mayMes){
            mayMes=v[i];
        }
        }
    }
    return mayMes;
}

void punto3(){
    ArchivoViaje archi("viajes.dat");
    Viaje via;
    int vCantV[12]={0};
    int cantViajes=archi.contarRegistros();
    for(int i=0;i<cantViajes;i++){
        via=archi.leerRegistro(i);
        if(via.getMedioTransporte()==2 && via.getAnioViaje()<2023){
           vCantV[via.getMesViaje()-1]+=via.getImporte();
        }
    }
    int mayorMes=buscarMaximo(vCantV,12);
    cout<<"El mes de mayor recaudacion es "<<mayorMes<<endl;
}

bool grabarRegistroAnioActual(Viaje aux){
    FILE *p;
    p=fopen("viajes2023.dat", "ab");
    if(p==NULL) return false;
    bool escribio=fwrite(&aux, sizeof aux, 1, p);
    fclose(p);
    return escribio;
}



void punto4(){
    ArchivoViaje archi("viajes.dat");
    Viaje via;
    int cantViajes=archi.contarRegistros();
    for(int i=0;i<cantViajes;i++){
        via=archi.leerRegistro(i);
        if(via.getAnioViaje()==2023){
             if(grabarRegistroAnioActual(via)==false){
                cout<<"No se pudo grabar el registro"<<endl;
                return;
             }
        }
    }
}

void punto5(){
    ArchivoViaje archi("viajes.dat");
    Viaje via;
    int numTar;
    cout<<"Ingrese numero de tarjeta"<<endl;
    cin>>numTar;
    int cantViajes=archi.contarRegistros();
    for(int i=0;i<cantViajes;i++){
        via=archi.leerRegistro(i);
        if(via.getNroTarjeta()==numTar && via.getAnioViaje()== 2020){
        via.Mostrar();
        }
        if(via.getNroTarjeta()==numTar && via.getAnioViaje()== 2021){
        via.Mostrar();
        }
        if(via.getNroTarjeta()==numTar && via.getAnioViaje()== 2022){
        via.Mostrar();
        }
        if(via.getNroTarjeta()==numTar && via.getAnioViaje()== 2023){
        via.Mostrar();
        }
    }
}

void punto6(){
    ArchivoViaje archi("viajes.dat");
    Viaje via,may;
    int mayViaje;
    int cantViajes=archi.contarRegistros();
    for(int i=0;i<cantViajes;i++){
        via=archi.leerRegistro(i);
        if(i==0){
            mayViaje=via.getImporte();
            may=via;
        }
        else{
            if(via.getImporte()>mayViaje){
                mayViaje=via.getImporte();
                may=via;
            }
        }
    }
    cout<<"El viaje con mayor importe es"<<endl;
    may.Mostrar();
}

int ultNumero(int n) {
return n % 10;
}
int buscarMaximoMatriz(int v[3][12],int f,int c){
    int may;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;c++){
            if(i==0){
                may=v[i][j];
            }
            else{
                if(v[i][j]>may){
                    may=v[i][j];
                }
            }
        }
    }
    return may;
}

void punto7(){
    ArchivoViaje archi("viajes.dat");
    Viaje via;
    int m[3][12]={0};
    int cantViajes=archi.contarRegistros();
    for(int i=0;i<cantViajes;i++){
        via=archi.leerRegistro(i);
        if(via.getMedioTransporte()==3 && via.getAnioViaje()<2023){
            m[ultNumero(via.getAnioViaje()-1)][via.getMesViaje()-1]+=via.getImporte();
        }
    }
    /*buscarMaximoMatriz(m[3][12],3,12);*/
}

void punto8(){
ArchivoViaje archiV("viajes.dat");
    Viaje via;
    ArchivoTarjeta archiT("tarjetas.dat");
    Tarjeta tar;
    int acu;
    int cantViajes=archiV.contarRegistros();
    int cantTarjetas=archiT.contarRegistros();
    for(int i=0;i<cantTarjetas;i++){
        tar=archiT.leerRegistro(i);
        acu=0;
    for(int j=0;j<cantViajes;j++){
    via=archiV.leerRegistro(j);
    if(via.getMedioTransporte() == 1 && via.getAnioViaje()==2022 && via.getNroTarjeta()==tar.getNroTarjeta()){
        acu+=via.getImporte();
    }
    }
    cout<<"EL TOTAL GASTADO POR LA TARJETA :"<<tar.getNroTarjeta()<<" es: "<<acu<<endl;
    }
}
void punto9(){
    ArchivoViaje archiV("viajes.dat");
    Viaje via;
    ArchivoTarjeta archiT("tarjetas.dat");
    Tarjeta tar,cli;
    int menIm;
    int cantViajes=archiV.contarRegistros();
    int cantTarjetas=archiT.contarRegistros();
    for(int i=0;i<cantTarjetas;i++){
        tar=archiT.leerRegistro(i);
    for(int j=0;j<cantViajes;j++){
    via=archiV.leerRegistro(j);
        if(j==0){
           menIm=via.getImporte();
           cli=tar;
        }
        else{
            if(via.getImporte()<menIm && via.getNroTarjeta()== tar.getNroTarjeta()){
                    menIm=via.getImporte();
                    cli=tar;
            }
        }
    }
    }
    cout<<"NUMERO TARJETA CLIENTE: "<<cli.getNroTarjeta()<<endl;
    cout<<"DNI: "<<cli.getDNI()<<endl;
}
void punto10(){
    ArchivoViaje archiV("viajes.dat");
    Viaje via;
    ArchivoTarjeta archiT("tarjetas.dat");
    Tarjeta tar;
    int acu;
    int cantViajes=archiV.contarRegistros();
    int cantTarjetas=archiT.contarRegistros();
    for(int i=0;i<cantTarjetas;i++){
    tar=archiT.leerRegistro(i);
    acu=0;
    for(int j=0;j<cantViajes;j++){
    via=archiV.leerRegistro(j);
    if(via.getAnioViaje()==2023 && tar.getNroTarjeta()==via.getNroTarjeta()){
        acu+=via.getImporte();
    }
    }
    cout<<"EL TOTAL GASTADO POR LA TARJETA :"<<tar.getNroTarjeta()<<" es: "<<acu<<endl;
    }
}
class ViajesColectivoAnioPasado{
private:
    int nroTarjeta;
    int dni;
    int cantViajes;
public:
    int getNroTarjeta(){return nroTarjeta;}
    int getDNI(){return dni;}
    int getCantViajes(){return cantViajes;}
    void setNroTarjeta(int n){nroTarjeta=n;}
    void setDNI(int d){dni=d;}
    void setCantViajes(int c){cantViajes=c;}
};

bool grabarRegistroViajesCole(ViajesColectivoAnioPasado aux){
    FILE *p;
    p=fopen("viajescole.dat", "ab");
    if(p==NULL) return false;
    bool escribio=fwrite(&aux, sizeof aux, 1, p);
    fclose(p);
    return escribio;
}

void punto11(){
    ArchivoTarjeta archiT("tarjetas.dat");
    Tarjeta tar,cli;
    ArchivoViaje archiV("tarjetas.dat");
    Viaje via;
    ViajesColectivoAnioPasado viajesCole;
    int cantViajesCole;
    int cantViajes=archiV.contarRegistros();
    int cantTarjetas=archiT.contarRegistros();
    for(int i=0;i<cantTarjetas;i++){
    tar=archiT.leerRegistro(i);
    for(int j=0;j<cantViajes;j++){
    via=archiV.leerRegistro(j);
    cantViajesCole=0;
    if(via.getMedioTransporte() == 1 && via.getAnioViaje()==2022 && via.getNroTarjeta()==tar.getNroTarjeta()){
        cantViajesCole+=via.getMedioTransporte();
        cli=tar;
    }
    }
    viajesCole.setNroTarjeta(cli.getNroTarjeta());
    viajesCole.setDNI(cli.getDNI());
    viajesCole.setCantViajes(cantViajesCole);
    if(grabarRegistroViajesCole(viajesCole)==false){
        cout<<"El registro no se pudo grabar"<<endl;
        return;
    }
    }
}

#endif // FECHA_H_INCLUDED

