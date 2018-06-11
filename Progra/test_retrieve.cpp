#include "transporte.hpp"

int main()
{    
    transporte flota[50];
    
    ifstream file("test1.json");
    json data;
    file >> data;
    
    json tipo = data["0"];
    
    for (auto it = tipo.begin(); it != tipo.end(); ++it)
    {
        flota[stoi(it.key())].tipo = it.value();
    }
    
    json id = data["1"];
    
    for (auto it = id.begin(); it != id.end(); ++it)
    {
        flota[stoi(it.key())].id = it.value();
    }
    
    json ruta = data["2"];
    
    for (auto it = ruta.begin(); it != ruta.end(); ++it)
    {
        flota[stoi(it.key())].ruta = it.value();
    }
    
    json dir = data["3"];
    
    for (auto it = dir.begin(); it != dir.end(); ++it)
    {
        flota[stoi(it.key())].direccion = it.value();
    }
    
    json est = data["4"];
    
    for (auto it = est.begin(); it != est.end(); ++it)
    {
        flota[stoi(it.key())].estacion = it.value();
    }
    
    json hora = data["5"];
    
    for (auto it = hora.begin(); it != hora.end(); ++it)
    {
        if (it.value()!="Hora")
        {
            string temp = it.value();
            flota[stoi(it.key())].hora = stof(temp);
        }
    }
    
    json ocup = data["6"];
    
    for (auto it = ocup.begin(); it != ocup.end(); ++it)
    {
        flota[stoi(it.key())].ocupacion = it.value();
    }
    
    for (int i=1;i<25;i++)
    {
        cout<<"Vehiculo "<<i<<endl;
        cout<<"ID : "<<flota[i].id<<endl;
        cout<<"Ruta : "<<flota[i].ruta<<endl;
        cout<<"Direccion : "<<flota[i].direccion<<endl;
        cout<<"Estacion : "<<flota[i].estacion<<endl;
        cout<<"Hora : "<<flota[i].hora<<endl;
        cout<<"Ocupacion : "<<flota[i].ocupacion<<endl<<endl;
    }
    
}
