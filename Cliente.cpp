#include "Persona.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona {
	
	private : string nit; 
	
	public:
	Cliente (){		
	}
	
	Cliente(string nom, string ape, string dir, int tel, string fn, string n) : Persona(nom,ape,dir,tel, fn){	
		nit = n;
	}
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFechaNacimiento(string fn){fecha_nacimiento = fn;}
	void setTelefono(int tel){telefono = tel;}

    string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	
};

