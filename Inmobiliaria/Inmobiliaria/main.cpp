#include <iostream>

using namespace std;

#include "fecha.h"
#include "direccion.h"


class Inmobiliaria{
private:
    Fecha fechaIngreso;
    Fecha fechaOperacion;
    int SuperficieTotal;
    int tipoOperacion;
public:
    int getDiaIngreso(){return fechaIngreso.getDia();}
    int getMesIngreso(){return fechaIngreso.getMes();}
    int getAnioIngreso(){return fechaIngreso.getAnio();}
    int getDiaOperacion(){return fechaOperacion.getDia();}
    int getMesOperacion(){return fechaOperacion.getMes();}
    int getAnioOperacion(){return fechaOperacion.getAnio();}
    int getSuperficieTotal(){return SuperficieTotal;}
    int getTipoOperacion(){return tipoOperacion;}
    void setDiaIngreso(int d){fechaIngreso.setDia(d);}
    void setMesIngreso(int m){fechaIngreso.setMes(m);}
    void setAnioIngreso(int a){fechaIngreso.setAnio(a);}
    void setDiaOperacion(int d){fechaOperacion.setDia(d);}
    void setMesOperacion(int m){fechaOperacion.setMes(m);}
    void setAnioOperacion(int a){fechaIngreso.setAnio(a);}
    void setSuperficieTotal(int s){SuperficieTotal=s;}
    void setTipoOperacion(int t){tipoOperacion=t;}
};

class Casa{
private:
    int ambientes;
    char superficieConstruida[30];
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
