#include <iostream>

using namespace std;

class estudiante {
	public
	
	string nombre;
	string cc;
	int edad ;
	bool matriculado;
	
	estudiante(string nombre="jhon done", string = "-", int edad = 00, bool matricula = false ){
		this->nombre=nombre;
		this->cc=cc;
		this->edad=edad;
		this->matriculado=matriculado
	}
	
	void saludo(){
		cout <<nombre<<endl;
        cout <<edad<<endl;
    	cout <<matriculado<<endl;
    
	}
	
	bool estamatriculado();
};

bool estudiante::estamatriculado(){
	return matriculado;
}

int main(int argc, char const *argv[])
{
    estudiante est1;
    
    est1.saludo();
    
    est1.nombre="juan pablo";
    est1.edad=17;
    est1.nombre=true;
    
    est1.saludo();
    
    int algo =0;
    algo=est1.edad *2;
    cout <<algo<<endl;
    
    est1.saludo();
    
    estudiante est2;
    est2.nombre="anders";
    est2.edad=28;
    est2.matriculado=true;
    est2.saludo();
    
    return 0;
}