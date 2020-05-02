//
// Created by tonym on 1/05/2020.
//


#ifndef UNIDAD2_SEM03_SISTEMA_H
#define UNIDAD2_SEM03_SISTEMA_H

#include "../lib.h"

class Sistema {
private:
    string orden;
    string destino;
public:

    Sistema(const string &orden, const string &destino);
    virtual void mostrar();

};

Sistema::Sistema(const string &orden, const string &destino) : orden(orden), destino(destino) {}

class Orden : public Sistema{
private:
    string lista_productos;
    int costo;
    string vehiculo;
    int C;
public:
    Orden(const string &orden, const string &destino, const string &listaProductos, int costo, const string &vehiculo,
          int c);
    void mostrar();


};

Orden::Orden(const string &orden, const string &destino, const string &listaProductos, int costo,
             const string &vehiculo, int c) : Sistema(orden, destino), lista_productos(listaProductos), costo(costo),
                                              vehiculo(vehiculo), C(c) {}


class Usuario: public Sistema{
public:
    Usuario(const string &orden, const string &destino, const string &nombre, int num, const string &track);
    void mostrar();
private:
    string nombre;
    int NUM;
    string track;
};

Usuario::Usuario(const string &orden, const string &destino, const string &nombre, int num, const string &track)
        : Sistema(orden, destino), nombre(nombre), NUM(num), track(track) {}

void Sistema::mostrar() {
    cout<<"Orden: "<<orden<<endl;
    cout<<"Destino: "<<destino<<endl;
    cout<<endl;
}
void Orden::mostrar() {
    Sistema::mostrar();
    cout<<"lista de productos: "<<lista_productos<<endl;
    cout<<"Costo de proceso: "<<costo<<endl;
    cout<<"cantidad: "<<C<<endl;
    cout<<endl;
}
void Usuario::mostrar() {
    Sistema::mostrar();
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Numero de pedido"<<NUM<<endl;
    cout<<"Trackear orden: "<<track<<endl;
    cout<<endl;
}



#endif //UNIDAD2_SEM03_SISTEMA_H
