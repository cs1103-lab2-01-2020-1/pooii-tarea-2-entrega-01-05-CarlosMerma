//
// Created by tonym on 1/05/2020.
//
#include "funciones.h"
#include "ejercicios.h"
#include "CLASS/sistema.h"
#include "FIFO/fifo.h"


void ejercicios1() {

    Sistema *vector[6];
    vector[0]= new Orden( "Embalaje", "Callao",  "Ropa", 5, "bicicleta", 10);
    vector[0]->traqueo();

    Sistema *vector2[5];
    vector2[0]=new Usuario("Pedido", "Ica", "Carlos",123,"Si");
    vector2[0]->traqueo();
}
void ejercicio2() {


}
