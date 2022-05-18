#include <iostream>
#include <sstream>
#include <fstream>
#include<string>
#include<vector>
#define Nombre_archivo "gold.csv"
using namespace std;
class ACM{
    protected:
        double resultado;

    private:
        string lane; 
        string fecha,apertura,alto,bajo,cerrado,volume,concurrencia;
        char delimitador = ',';
        vector<double>apertura;
        vector<double>cerrado;
        vector<double>alto;
    public: 
    ACM(){
        ifstream archivo(Nombre_archivo);
        double Aper,cie,alt;
        while(getline(archivo,lane)){
            stringstream stream(lane);
            getline(stream, fecha, delimitador);
            getline(stream, apertura, delimitador);
            getline(stream, alto, delimitador);
            getline(stream, bajo, delimitador);
            getline(stream, cerrado, delimitador);
            getline(stream, volume, delimitador);
            getline(stream, concurrencia, delimitador);
            Aper=stod(apertura);
            cie=stod(cerrado);
            alt=stod(alto);
            apertura.push_back(Aper);
            cerrado.push_back(cie);
            alto.push_back(alt);
        }
    };

};

class strategy_1 : public ACM{





};
class strategy_2 : public ACM{


    

};
class strategy_3 : public ACM{

};