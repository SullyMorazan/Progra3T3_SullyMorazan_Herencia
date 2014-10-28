#include <iostream>
#include <string>

using namespace std;

class Animal //Se crea la clase base Animal
{
    public:
        //Miembros de datos de la clase Animal
        string nombre; //mienbro de datos nombre
        int edad;      //miembro de datos edad

//Constructor vacio de la clase Animal
        Animal()
        {

        }
      //Funciones miembro de la clase Animal
        int getEdad() //Funcion obtener edad
        {
        	return edad; //retorna el miembro de datos edad
        }

        void setEdad(int ed) //Funcion establecer edad, recibe como parametro la edad
        {
        	 edad = ed; //establece el valor del parametro ed al miembro de datos edad
        }

		string getNombre()//Funcion obtener nombre
		{
			return nombre; //retorna el miembro de datos nombre
		}

        void setNombre(string nom) //Funcion establecer nombre, recibe como parametro el nombre
        {
        	nombre = nom; //establece el valor del parametro nom al miembro de datos nombre
        }

};

class Gato : public Animal //Se crea la clase Gato que hereda de la clase base Animal
{
   public:
     Gato(int edad, string nombre)//Constructor de la clase Gato que recibe los parametros de edad y nombre
     {
         setEdad(edad); //envia edad a la funcion setEdad de la clase base Animal para inicializar su miembro de datos edad
         setNombre(nombre);//envia nombre a la funcion setNombre de la clase base Animal para inicializar su miembro de datos nombre
     }

     string maullar()//Funcion miembro de la clase Gato que devuelve el string
     {
         return "miau";
     }

};

class Perro : public Animal //Se crea la clase Perro que hereda de la clase base Animal
{
public:
     Perro(int edad, string nombre)//Constructor de la clase Perro que recibe los parametros de edad y nombre
     {
         setEdad(edad);//envia edad a la funcion setEdad de la clase base Animal para inicializar su miembro de datos edad
         setNombre(nombre);//envia nombre a la funcion setNombre de la clase base Animal para inicializar su miembro de datos nombre
     }

     string ladrar()//Funcion miembro de la clase Perro que devuelve el string
     {

         return "guau";
     }
};

int main()
{
    string nuevo_nomb = "";//Variable para darle un nuevo mombre al gato declarada para probar la funcionalidad de la funcion setNombre
    int nuevedad = 0;//Variable para modificar la edad al perro declarada para probar la funcionalidad de la funcion setEdad

	Gato gatito = Gato(2,"Kitty"); //se crea un objeto de Gato
	//Imprimer el nombre
	cout<<"Nombre del gato: "<<gatito.getNombre()<<endl; //el objeto gatito hereda todo lo de la clase Animal como ser la funcion getNombre()
	//Imprime la edad
	cout<<"Edad: "<<gatito.getEdad()<<endl;//el objeto gatito hereda todo lo de la clase Animal como ser la funcion getEdad()
    cout<<"Cambiar nombre al gato: "; //Se solicita un nombre diferente
    cin>>nuevo_nomb; //captura del nuevo nombre
	gatito.setNombre(nuevo_nomb);//la funcion setNombre() modifica el nombre con el nuevo que se ingreso
	cout<<"Su nuevo nombre es: "<<gatito.getNombre()<<endl;//Imprime nuevo nombre
	cout<<"Funcion maullar: "<<gatito.maullar()<<endl; // Funcion maullar
	cout<<"---------------------------"<<endl;

    Perro perrito = Perro(4,"Lucky");//se crea un objeto de Perro
    cout<<"Nombre del perro: "<<perrito.getNombre();//el objeto perrito hereda todo lo de la clase Animal como ser la funcion getNombre()
    cout<<"\n"<<"Edad: "<<perrito.getEdad()<<endl;//el objeto perrito hereda todo lo de la clase Animal como ser la funcion getEdad()
    cout<<"Cambiar edad al perro: ";//Se solicita una edad diferente
    cin>>nuevedad; //captura de la nueva edad
    perrito.setEdad(nuevedad);//la funcion setEdad() modifica la edad con el nuevo que se ingreso
    cout<<"Edad modificada: "<<perrito.getEdad()<<endl;;//Imprime nueva edad
    cout<<"Funcion ladrar: "<<perrito.ladrar()<<endl; // Funcion ladrar

    return 0;
}
