#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona {
	
	private : string puesto, codigo_empleado; 
	
	public:
	Empleado (){		
	}
	
	Empleado(string nom, string ape, string dir, int tel, string pto, string cod_emp,string fn) : Persona(nom,ape,dir,tel,fn){
		puesto = pto;
		codigo_empleado= cod_emp;
	}

	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setPuesto(string pto){puesto = pto;}
	void setCodigoEmpleado(string cod_emp){codigo_empleado = cod_emp;}
	void setFechaNacimiento(string fn){fecha_nacimiento = fn;}
	
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getPuesto(){return puesto;}
	string getCodigoEmpleado(){return codigo_empleado;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	

};
