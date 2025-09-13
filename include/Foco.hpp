/*
Ctrl + k (sostenido)
Ctrl + f 
Para poner bonito
*/
#pragma once //siempre escribirlo al inicio de cada clase
#include <EstadoFoco.hpp>

//se borran siempre 
class Foco
{
private:
    EstadoFoco estado;
public:
    Foco() {}
    ~Foco() {}
    void Encender(){}
    void Apagar(){}
};
