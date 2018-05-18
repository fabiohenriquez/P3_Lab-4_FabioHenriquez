#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


using std::string;
using std::cin;
using std::cout;
using std::endl;


//metodos
int menu();
//void ejercicio1();
void ejercicio2();
//void ejercicio3();
int*** crear(int size);
void imprimir_tablero(int*** matriz,int n,int a);



int main(){
    char res='s';
    do{
	switch(menu()){
	       case 1:
	       //ejercicio1();
	       break;

	       case 2:
	       ejercicio2();
	       break;

	       case 3:
	       //ejercicio3();
	       break;

	       default:
	       cout<<"Esta opcion no existe"<<endl;
	       break;

	}

	cout<<"\n Desea continuar?[s/n]?";
	cin>>res;

    }while(res=='s' || res=='S');

    return 0;


}//fin del main


int menu(){

	int opcion = 0;

	cout<<"--Men--"<<endl<<
		"[1]. Ejercicio 1 "<<endl<<
		"[2]- Ejercicio 2 "<<endl<<
		"[3]. Ejercicio 3 "<<endl<<
		"Ingrese una opcion:"<<endl;
	cin>>opcion;

	return opcion;

}//fin del menu


void ejercicio2(){
	int size = 0;
	int n = 0;
	int a = 0;
	int filas = 0;
	int columnas = 3;
	int co = 0;
	//int*** tablero = new int**[size];
	//int* arreglo = new int[size];
	int cont = 0;
	cout<<"Ingrese el valor mas alto del polinomio"<<endl;
	cin>>size;
	cout<<"Ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"--------------------------------------------"<<endl;
	int valor = 0;
	filas = size+1;
	n = size+1;
	int*** tablero = crear(n);
	for(int i = 0; i<n;i++){
		for(int k = 0; k<n;k++);
		cout<<"Ingrese el grado del polinomio X^"<<size-cont<<" : "<<endl;
		cin>>valor;
		tablero[0][0][i] = valor;
		valor = 0;
		cont++;
		
	}

	for(int l = 0;l<n;l++){
		for(int u = 0; u<n;u++){
		    tablero[l][0][u]=tablero[0][0][u];
		}

	}
        tablero[0][2][0] = tablero[0][0][0];
	tablero[1][2][0] = tablero[0][0][0];
	
	for(int j = 0;j<n;j++){
	    for(int k = 0;k<3;k++){
		    for(int l = 0;l<n;l++){
		      tablero[j][1][l+1] = a*tablero[j][2][l];
		      tablero[j][2][l+1] = tablero[j][0][l+1] + tablero[j][1][l+1];
		      co++;
		      //imprimir_tablero(tablero,n,a);
		    }

	    }
	    //imprimir_tablero(tablero,n,a);

	}
        
	for(int i = 0; i<n-1;i++){
		for(int j = 0;j<3;j++){
			for(int k = 0;k<n;k++){
		          cout<<"[ "<<tablero[i][j][k]<<" ]";
			 
		        }
			//cout<<"[ "<<tablero[i][j][k]<<" ]";
			cout<< " | " << a <<endl;
			
	}
	 //cout<<"|"<<a<<endl;
         cout<<endl;
    }

	cout<<"---------------------------"<<endl;
		cout<<"El cociente es : ";//<<tablero[1][3][size]<<endl;
	//cout<<a<<endl;
     

      // matriz[2][0][0] = matriz[0][0][0];
}

void imprimir_tablero(int***tablero,int n,int a){
	for(int i = 0;i<n;i++){
		for(int j = 0; j<3;j++){
		   for(int k = 0; k<n;k++){
			cout<<"["<<tablero[i][j][k]<<"]";
		   }
		   cout<<"     |  " << a << endl;
		}
		cout<<endl;
	}
	


	}//fin del metodo imprimir 





int***crear(int size){
	int*** tablero = new int**[size];
	for(int i = 0;i<size;i++){
		tablero[i] = new int*[3];
	}
             for(int j=0;j<size;j++){
		
		   for (int i = 0;i<3;i++) {
			tablero[j][i] = new int[size];

		   }

		}

	return tablero;	

}

/*void ejercicio3(){
 string palabra;
 cout<<"Ingrese la palabra clave"<<endl;
 cin>>palabra;
 char** matriz = new char*[5];

 for(int i = 0; i<5;i++){
    matriz[i] = new int[5];
 }



 
 char a = 'a';
 char b = 'b';
 char c = 'c';
 char d = 'd';
 char e = 'e';
 char f = 'f';
 char g = 'g';
 char h = 'h';
 char i = 'i';
 
 char k = 'k';
 char l = 'l';
 char m = 'm';
 char n = 'n';

 char o = 'o';
 char p = 'p';
 char q = 'q';
 char r = 'r';
 char s = 's';
 char t = 't';
 char u = 'u';
 char v = 'v';
 char w = 'w';
 char x = 'x';
 char y = 'y';
 char z = 'z';


 	for(int i = 0; i<5;i++){
		for(int j = 0; j<5;j++){
  		matriz[i][j] = palabra.charAt(i);

		}

 	 }

	for (int i = 0;i<5;i++){

		for(int j = 0; j<5<j++){
		cout<<"["<<matriz[i][j]<<"]"<endl;

		}	
 

}
}
*/




