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
    }//Termina Dani
    //Empieza analisis de grafica
	int c=0;
	int x=0;
	for(c;c<=10;c++)
	{
        int cont=100-(c*10);
        pos(1,c*3); cout<<cont;
	}//For para el marco de grafica
    pos(1,35); cout<<flota[i].tipo<<"  "<<flota[i].id<<"  "<<flota[i].ruta<<"  "<<flota[i].direccion; 
	for(x;x<23;x++)//For para que realice las 24 estaciones
	{
	    int d;
        d=flota[i].ocupacion;//85 Personas en los vagones
        int t=(d/10);//8 para que quepa en pantalla
        pos((3+15*x),33); cout<<flota[i].estacion;    //Estación a analizar, cambia con cada ciclo 
        for(int y=30;y>=(30-3*t);y--)//For para imprimir la barra de hash
	    {
            pos((6+15*x),y);cout<<"#";
        }
    }
}

