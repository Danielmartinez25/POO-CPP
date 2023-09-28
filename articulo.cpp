#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

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


class Articulo{
private:
    char Codigo[5];
    char Descripcion[30];
    float Precio;
    int Stock;
    bool Estado;
public:
    Articulo(const char *c="00000",float p = 0, int s=0){
      strcpy(Codigo,c);
      Precio=p;
      Stock=s;
    }
    Articulo(const char *d){
    strcpy(Descripcion,d);
    }
    void setCodigo(const char *c){strcpy(Codigo,c);}
    void setDescripcion(const char *d){
        strcpy(Descripcion,d);
        }
    void setPrecio(float p){Precio=p;}
    void setStock(int s){Stock=s;}
    const char *getCodigo(){return Codigo;}
    const char *getDescripcion(){return Descripcion;}
    float getPrecio(){return Precio;}
    int getStock(){return Stock;}
    void Cargar(){
    cout<<"Ingrese codigo"<<endl;
    cargarCadena(Codigo,4);
    cout<<"Ingrese descripcion"<<endl;
    cargarCadena(Descripcion,29);
    cout<<"Ingrese precio"<<endl;
    cin>>Precio;
    cout<<"Ingrese Stock"<<endl;
    cin>>Stock;
    };
    void Mostrar(){
    cout<<"Codigo: "<<Codigo<<endl;
    cout<<"Descripcion: "<<Descripcion<<endl;
    cout<<"Precio: "<<Precio<<endl;
    cout<<"Stock: "<<Stock<<endl;
    };
};

void cargarVector(Articulo *v,int tam){
    for(int i=0; i <tam;i++){
    v[i].Cargar();
    cout<<endl;
    }
}

void mostrarVector(Articulo *v,int tam){
    for(int i=0; i <tam;i++){
    v[i].Mostrar();
    cout<<endl;
    }
    system("pause");
    system("cls");
}

void listarArticulosPrecioMayor(Articulo *v,int tam){
    int precio;
    cout<<"Ingrese precio a comparar"<<endl;
    cin>>precio;
    for(int i=0; i <3;i++){
    if(v[i].getPrecio()>precio){
        v[i].Mostrar();
    }
    cout<<endl;
    }
    system("pause");
    system("cls");

}

void posicionArticulo(Articulo *v,int tam,const char *c){
    int contador = 0;
    for(int i=0; i <tam;i++){
    contador++;
    if(strcmp(v[i].getCodigo(),c)==0){
    cout<<contador<<endl;
    system("pause");
    system("cls");
    }
    }
    if(contador>1){
    cout<<-1<<endl;
    system("pause");
    system("cls");
    }
}
void posicionArticuloMostrar(Articulo *v,int tam,const char *c){
    int contador = 0;
    for(int i=0; i <tam;i++){
    if(strcmp(v[i].getCodigo(),c)==0){
    contador++;
    v[i].Mostrar();
    system("pause");
    system("cls");
    }
    }
    if(contador==0){
        v[3].setCodigo("-1");
        v[3].setDescripcion("-1");
        v[3].setPrecio(-1);
        v[3].setStock(-1);
        v[3].Mostrar();
        system("pause");
        system("cls");
    }
}
void valorStockArticulo(Articulo *v,int tam,float s){
    for(int i=0; i <tam;i++){
    if(v[i].getStock()<s){
    v[i].Mostrar();
    }
    }
    system("pause");
    system("cls");
}

void valorPrecioArticulo(Articulo *v,int tam,int p){
    for(int i=0; i <tam;i++){
    v[i].getCodigo() + p;
    v[i].Mostrar();
    }
    system("pause");
    system("cls");
}
int main()
{
    Articulo arti[3];
    setlocale(LC_ALL, "es_ES.UTF-8");
    int opc;
    while(true){
    cout<<"**************************"<<endl;
    cout<<"OPCIONES"<<endl;
    cout<<"1. CARGAR VECTOR"<<endl;
    cout<<"2. MOSTRAR VECTOR"<<endl;
    cout<<"3. LISTAR TODOS LOS ARTÍCULOS CUYO PRECIO SEA MAYOR A UN VALOR QUE SE INGRESA POR TECLADO."<<endl;
    cout<<"4. A PARTIR DE UN VALOR DE CÓDIGO RECIBIDO COMO PARÁMETRO, DEVOLVER LA POSICIÓN DEL OBJETO QUE CONTIENE ESE CÓDIGO. DE NO ENCONTRARLO DEVOLVER-1."<<endl;
    cout<<"5. IGUAL A LA FUNCIÓN DEL PUNTO ANTERIOR, PERO DEBE DEVOLVER EL OBJETO COMPLETO QUE CONTIENE EL CÓDIGO. DE NO ENCONTRAR EL CÓDIGO LA FUNCIÓN DEBEDEVOLVER UN OBJETO ARTICULO CON UN VALOR DE -1 EN EL STOCK."<<endl;
    cout<<"6. DADO UN VALOR DE STOCK QUE SE RECIBE COMO PARÁMETRO DEVOLVER LA CANTIDAD DE ARTÍCULOS CUYO STOCK SEA INFERIOR A ESE VALOR RECIBIDO"<<endl;
    cout<<"7. DADO UN PORCENTAJE DE INCREMENTO QUE SE RECIBE COMO PARÁMETRO, MODIFICAR EL PRECIO UNITARIO DE TODOS LOS OBJETOS"<<endl;
    cout<<"0. SALIR"<<endl;
    cout<<"**************************"<<endl;
    cin >>opc;
    system("cls");
    switch(opc){
    case 1:
    cargarVector(arti,3);
    system("cls");
    break;
    case 2:
    mostrarVector(arti,3);
    break;
    case 3:
    listarArticulosPrecioMayor(arti,3);
    break;
    case 4:
    posicionArticulo(arti,3,"123");
    break;
    case 5:
    posicionArticuloMostrar(arti,3,"133");
    break;
    case 6:
    valorStockArticulo(arti,3,3);
    break;
    case 7:
    valorPrecioArticulo(arti,3,150);
    break;
    case 0:
        return 0;
    break;
    }
    }
    return 0;
}
