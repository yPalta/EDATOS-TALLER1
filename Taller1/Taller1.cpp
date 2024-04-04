#include <iostream>

using namespace std;

class Login{
    private:
    string usuario;
    string contrasena;


    public:
    Login(string usuario, string contrasena);
    string getUsuario();
    string getContrasena();
    string setUsuario();
    string setContrasena();
    

};

class Evento {
    private:
    string nombreEvento;
    int duracion;
    string ubicacion;
    string tema;

    public:
    Evento(string nombreEvento, int duracion, string ubicacion, string tema);
    string getNombreEvento();
    int getDuracion();
    string getUbicacion();
    string getTema();
    void setNmbreEveneto();
    void setDuracion();
    void setUbicacion();
    void setTema();

};


string Evento::getNombreEvento(){
    return this-> nombreEvento;
}
int Evento::getDuracion(){
    return this-> duracion;
}
string Evento::getUbicacion(){
    return this-> ubicacion;
}
string Evento::getTema(){
    return this-> tema;
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
    
    
    string usuario;
    string contrasena;

    cout<<"---Bienvenido---"<<endl;
    cout<<"--Porfavor ingrese su usuario: "<<endl;
    cin>> usuario;
    cout<<"--Ingrese su contrasena: "<<endl;
    cin>> contrasena;


    
    return 0;
};


