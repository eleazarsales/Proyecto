#include <iostream>
#include <fstream> //Entrada y Salida de Un archivo 
#include <windows.h>
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;






int Menu_Principal(){
int x;
	system("cls");//Limpiar Consola 
cout<<"<<<<<<<<<<<<<<<<<-Biemvemido->>>>>>>>>>>>>>>>>"<<endl<<endl;
cout<<" 1. Agregar un Alumno"<<endl;
cout<<" 2. Agregar un Grado "<<endl;
cout<<" 3. Listado de Alumono"<<endl;
cout<<" 4. Listado Grado "<<endl;
cout<<" 5. Buscar Alumno"<<endl;
cout<<" 6. Buscar Grado"<<endl;
cout<<" 7. Modificar Alumno "<<endl;
cout<<" 8. Modificar Grado"<<endl;
cout<<" 9. Eliminar Alumno y Grado"<<endl;
cout<<"10. Eliminar Grado"<<endl;
cout<<"11. Salir"<<endl;

cout<<" Opciones"<<endl;
cout<<"<<<<<<<<<<<<<<<<<-------------->>>>>>>>>>>>>>>>>"<<endl<<endl;
cin>> x;
return x;
       
}


void agregar(ofstream &es){//Metodo agregar Alumno
	
		system("cls");//Limpiar Consola 
		string nom_a;
		string clave;
		string correo_a;
		string grado;
		es.open("Alumno.txt", ios::out| ios:: app);
		cout<< "Nombre\t";
		cin>>nom_a;
		cout<< "Clave\t";
		cin>>clave;
		cout<< "Coreo Electronico\t";
		cin>>correo_a;
		cout<< "grado\t";
		cin>>grado;
		
		
		//es <<"Nombre\t"<<nom_a<<"\n"<<"Clave\t"<<clave<<"\n"<<"Correo\t"<<correo_a<<"\n"<<"Grado\t"<<grado<<"\n";
	es <<nom_a<<"\n"<<clave<<"\n"<<correo_a<<"\n"<<grado<<"\n";
		es.close();
}
void agregargrado(ofstream & es ){  //Metodo agregar Grado
	
		system("cls");//Limpiar Consola 
		string nom_g;
		string codigo;
		string seccion;
		
		es.open("Grado.txt", ios::out| ios:: app);
		cout<< "Nombre de Grado Ejp(Primero_Basico)\t";
		cin>>nom_g;
		cout<< "Codigo\t";
		cin>>codigo;
		cout<< "Seccion\t";
		cin>>seccion;
		
		
	es <<nom_g<<"\n"<<codigo<<"\n"<<seccion<<"\n";
		es.close();
	
	
	
}



void veralumno (ifstream &Lec){//Metodo para Leer Alumno
system("cls");//Limpiar Consola 
	string nom_a;
		string clave;
		string correo_a;
		string grado;
		Lec.open("Alumno.txt", ios::in);
		cout<<"<<<<<<<<<<<<<<<<<-Base de Datos de Alumno->>>>>>>>>>>>>>>>>"<<endl<<endl;
		Lec>>nom_a;
		while(!Lec.eof()){
			Lec>>clave;
			Lec>>correo_a;
			Lec>>grado;
			//cout<<nom_a<<clave<<correo_a<<grado<<endl;
		
			cout<<"Nombre  ------------>"<<"\t"<<nom_a<<endl;
			cout<<"Clave  ------------->"<<"\t"<<clave<<endl;
			cout<<"Correo  ------------>"<<"\t"<<correo_a<<endl;
			cout<<"Grado  ------------->"<<"\t"<<grado<<"\n"<<endl;
		
			cout<<"<<<<<<<<<<<<<<<<<------------------------->>>>>>>>>>>>>>>>>"<<endl<<endl;

			Lec>>nom_a;
		}
	Lec.close();
	system("pause");
}

void vergrado (ifstream &Lec){//Metodo para Leer Grado
system("cls");//Limpiar Consola 
	string nom_g;
		string codigo;
		string seccion;
		
		Lec.open("Grado.txt", ios::in);
		cout<<"<<<<<<<<<<<<<<<<<-Base de Datos de los Grados->>>>>>>>>>>>>>>>>"<<endl<<endl;
		Lec>>nom_g;
		while(!Lec.eof()){// Buscar dentro de todo el archivo Txt 
			Lec>>codigo;
			Lec>>seccion;
		
			//cout<<nom_a<<clave<<correo_a<<grado<<endl;
		
			cout<<"Nombre de Grado -->"<<"\t"<<nom_g<<endl;
			cout<<"Codigo ----------->"<<"\t"<<codigo<<endl;
			cout<<"Seccion ---------->"<<"\t"<<seccion<<endl;
			
			cout<<"<<<<<<<<<<<<<<<<<------------------------->>>>>>>>>>>>>>>>>"<<endl<<endl;

			Lec>>nom_g;
		}
	Lec.close();
	system("pause");
}

void buscaralumno(ifstream & Lec){ //Metodo para Buacra Alumno
	system("cls");
	Lec.open("Alumno.txt", ios::in);
	
	string nom_a;
	string clave;
		string correo_a;
		string grado;
		string clave_aux;
		
		bool encontrado= false;
		cout<<"Digite su Clave de Alumono"<<endl;
		cin>>clave_aux;
		Lec>>nom_a;
		while(!Lec.eof()&&!encontrado){
			Lec>>clave;
			Lec>>correo_a;
			Lec>>grado;
			if (clave == clave_aux){
				cout<<"Nombre  ------------>"<<"\t"<<nom_a<<endl;
					cout<<"Clave  ------------->"<<"\t"<<clave<<endl;
					cout<<"Correo  ------------>"<<"\t"<<correo_a<<endl;
					cout<<"Grado  ------------->"<<"\t"<<grado<<"\n"<<endl;
		
			cout<<"<<<<<<<<<<<<<<<<<------------------------->>>>>>>>>>>>>>>>>"<<endl<<endl;
				encontrado=true;
			}
			Lec>>nom_a;	
		}
		Lec.close();
		system("pause");
	if(!encontrado)
	cout<<"Dato no encontrado"<<endl,
	system("pause");
}

void buscargrado(ifstream & Lec){// Metodo para Buscar gardo
	system("cls");
	Lec.open("Grado.txt", ios::in);
	
	string nom_g;
	string codigo;
		string seccion;
		string codigo_aux;
		
		bool encontrado= false;
		cout<<"Digite su Codigo de Grado"<<endl;
		cin>>codigo_aux;
		Lec>>nom_g;
		while(!Lec.eof()&&!encontrado){
			Lec>>codigo;
			Lec>>seccion;
		
			if (codigo == codigo_aux){
				cout<<"Nombre  ------------>"<<"\t"<<nom_g<<endl;
					cout<<"Codigo  ------------->"<<"\t"<<codigo<<endl;
					cout<<"Seccion  ------------>"<<"\t"<<seccion<<endl;
					
		
			cout<<"<<<<<<<<<<<<<<<<<------------------------->>>>>>>>>>>>>>>>>"<<endl<<endl;
				encontrado=true;
			}
			Lec>>nom_g;	
		}
		Lec.close();
		system("pause");
	if(!encontrado)
	cout<<"Dato no encontrado"<<endl,
	system("pause");
}


void modificaralumno (ifstream& Lec){// Metodo para Modiuficar Alumno
	
	system("cls");//Limpiar Consola 
	string nom_a;
		string clave;
		string correo_a;
		string grado;
			string clave_aux;
			string nomaux;
			
			
			
		Lec.open("Alumno.txt", ios::in);
		ofstream aux("auxiliar.txt", ios::out);
		if(Lec.is_open()){
		
		cout<<"Ingresar Clave de Alumono\t";
		cin>>clave_aux;
		Lec>>nom_a;
	
		while (!Lec.eof()){
			Lec>>clave;
			Lec>>correo_a;
				Lec>>grado;	
			if(clave == clave_aux){
				cout<<"Nuevo Nombre";
				cin>>nomaux;
				
				aux<<nomaux<<"\n"<<clave<<"\n"<<correo_a<<"\n"<<grado<<"\n";
				
			}else{
					aux<<nom_a<<"\n"<<clave<<"\n"<<correo_a<<"\n"<<grado<<"\n";
			}
			Lec>>nom_a;
		
		}
			Lec.close();
			aux.close();
		if(remove ("Alumno.txt"));
		
		}
		
	
			
		if (rename("auxiliar.txt", "Alumno.txt"));

		
		}
		
		
void modificargrado (ifstream& Lec){//Metodo para Modificar Grado
	
	system("cls");//Limpiar Consola 
	string nom_g;
		string codigo;
		string seccion;
			string codigo_aux;
			string noaux;
			
			
			
		Lec.open("Grado.txt", ios::in);
		ofstream aux("auxiliar.txt", ios::out);
		if(Lec.is_open()){
		
		cout<<"Ingresar el Codigo del Grado\t";
		cin>>codigo_aux;
		Lec>>nom_g;
	
		while (!Lec.eof()){
			Lec>>codigo;
			Lec>>seccion;
				
			if(codigo == codigo_aux){
				cout<<"Nuevo Nombre del Grado";
				cin>>noaux;
				
				aux<<noaux<<"\n"<<codigo<<"\n"<<seccion<<"\n";
				
			}else{
					aux<<nom_g<<"\n"<<codigo<<"\n"<<seccion<<"\n";
			}
			Lec>>nom_g;
		
		}
			Lec.close();
			aux.close();
		if(remove ("Grado.txt"));
		
		}
		
	
			
		if (rename("auxiliar.txt", "Grado.txt"));

		
		}
		
		
		


void eliminaralumno(ifstream&Lec){// Metodo para eliminar Alumno
	
	system("cls");//Limpiar Consola 
	string nom_a;
		string clave;
		string correo_a;
		string grado;
			string clave_aux;
			string nomaux;
			
			
		Lec.open("Alumno.txt", ios::in);
		ofstream aux("auxiliar.txt", ios::out);
		if(Lec.is_open()){
		
		cout<<"Clave";
		cin>>clave_aux;
		Lec>>nom_a;
			
		while (!Lec.eof()){
			Lec>>clave;
			Lec>>correo_a;
			Lec>>grado;
			if(clave == clave_aux){
				cout<<"<<<<<<<<<<<<<<<<Eliminado<<<<<<<<<<<<<<<<<<<";
			
			Sleep(1500);
				
			}else{
					aux<<nom_a<<"\n"<<clave<<"\n"<<correo_a<<"\n"<<grado<<"\n";
			}
			Lec>>nom_a;
			
		}
			Lec.close();
			aux.close();
			
				if(remove ("Alumno.txt"));
		
		}
		
		if (rename("auxiliar.txt", "Alumno.txt"));

		}
		
void eliminargrado (ifstream& Lec){// Metodo para eliminar Grado
	
	system("cls");//Limpiar Consola 
	string nom_g;
		string codigo;
		string seccion;
			string codigo_aux;
			string noaux;
			
			
			
		Lec.open("Grado.txt", ios::in);
		ofstream aux("auxiliar.txt", ios::out);
		if(Lec.is_open()){
		
		cout<<"Ingresar el Codigo del Grado\t";
		cin>>codigo_aux;
		Lec>>nom_g;
	
		while (!Lec.eof()){
			Lec>>codigo;
			Lec>>seccion;
				
			if(codigo == codigo_aux){
				
				cout<<"<<<<<<<<<<<<<<<<<Eliminado<<<<<<<<<<<<<<<<<<<";
				Sleep(1500);
				
				
			}else{
					aux<<nom_g<<"\n"<<codigo<<"\n"<<seccion<<"\n";
			}
			Lec>>nom_g;
		
		}
			Lec.close();
			aux.close();
		if(remove ("Grado.txt"));
		
		}
		
	
			
		if (rename("auxiliar.txt", "Grado.txt"));

		
		}
		
		
	


int main ()
{
	ofstream Esc;
	ofstream esc;
	ifstream Lec;
	int op;
	do{
		system("cls");//Limpiar Consola 
		op= Menu_Principal();
		switch(op){
			case 1:
			
			agregar (Esc);
			break;
			
			case 2:
			agregargrado (Esc);
			break;
			
			case 3:
			veralumno(Lec);
			break;
					
			case 4:
			vergrado(Lec);
			break; 
			
			case 5:
			buscaralumno(Lec);
			break;
			
			case 6:
			buscargrado (Lec);
			break;
			
			case 7:
			modificaralumno(Lec);
			
			case 8:
			modificargrado(Lec);
			break;
			
			break;
			case 9:
			eliminaralumno(Lec);
			break;
			case 10:
			eliminargrado(Lec);
			break;
		}
	}while(op !=11);
}
	
