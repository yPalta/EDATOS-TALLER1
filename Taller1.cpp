#include <iostream>

using namespace std;

class Evento {
    private:
    string tipoEvento;

    public:
    Evento(string tipoEvento);
    string getTipoEvento();
    void setTipoEveneto();

};

Evento::Evento(string tipoEvento){
    this-> tipoEvento = tipoEvento;

}

string Evento::getTipoEvento(){
    return this-> tipoEvento;
}

class Asistentes {
    private:
    string tipoAsistente;

    public:
    Asistentes(string tipoAsistente);
    string getTipoAsistente();
    void setTipoAsistente();

};

Asistentes::Asistentes(string tipoAsistente){
    this-> tipoAsistente = tipoAsistente;

}

string Asistentes::getTipoAsistente(){
    return this-> tipoAsistente;
}

int main() {
    
    
    return 0;
};