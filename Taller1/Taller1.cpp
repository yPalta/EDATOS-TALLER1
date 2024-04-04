#include <iostream>
#include <fstream>
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
    int edad;
    string ocupacion;


    public:
    Asistentes(string tipoAsistente);
    string getTipoAsistente();
    void setTipoAsistente();

};

string Asistentes::getTipoAsistente(){
    return this-> tipoAsistente;
}




int main() {
    
    string nombreArchivo = "DatosUsuarios.txt";
    ofstream archivo;
    string usuario;
    string contrasena;

    //abrir el archivo
    archivo.open(nombreArchivo.c_str(), fstream::out);
    cout<<"---Bienvenido---"<<endl;
    cout<<"--Porfavor ingrese su usuario: "<<endl;
    cin>> usuario;
    cout<<"--Ingrese su contrasena: "<<endl;
    cin>> contrasena;

    //sobreescribir el archivo

    archivo<< usuario<<endl;
    archivo<< contrasena<<endl;

    


    if (usuario && contrasena == true){
        int opcion;

        cout<<"----Seleccione una opcion de Informe-----"<<endl;
        cout<<"1. Lista de eventos programados"<<endl;
        cout<<"2. Lista de asistentes"<<endl;
        cout<<"3. Estadistica sobre los eventos"<<endl;
        cout<<"4. Detalles sobre los asistentes"<<endl;
        cout<<"5. Informacion sobre eventos especificos"<<endl;
        cin>> opcion;

        switch (opcion)
        {
        case 1:
            /* code */
            break;
        case 2:

            break;

        case 3:

            break;

        case 4:

            break;
        case 5:

            break;
        
        default:
            cout<<"Ingrese una opcion valida del 1 al 5"<<endl;
            break;
        }
    }else{
        cout<<"Usuario o Contrasena incorrectas"<<endl;

    }
    


    
    return 0;
};


