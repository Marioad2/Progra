#include "json.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using json = nlohmann::json;

class transporte {
    public:
        string tipo;
        string id;
        string ruta;
        string direccion;
        string estacion;
        float hora;
        string ocupacion;
};
