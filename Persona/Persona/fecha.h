#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED


class Fecha
{
private:
    int Dia, Mes, Anio;
public:
    Fecha(int d = 1, int m = 1, int a = 2000)
    {
        Dia = d;
        Mes = m;
        Anio = a;
    }
    void setDia(int d) { Dia = d; }
    void setMes(int m) { Mes = m; }
    void setAnio(int a) { Anio = a; }
    int getDia() { return Dia; }
    int getMes() { return Mes; }
    int getAnio() { return Anio; }
    void Cargar();
    void Mostrar();
};

void Fecha::Cargar()
{
    cout << "Ingresa un dia" << endl;
    cin >> Dia;
    cout << "Ingresa un mes" << endl;
    cin >> Mes;
    cout << "Ingresa un anio" << endl;
    cin >> Anio;
}

void Fecha::Mostrar()
{
    cout << "Dia: " << Dia << endl;
    cout << "Mes: " << Mes << endl;
    cout << "Anio: " << Anio << endl;
}

#endif // FECHA_H_INCLUDED
