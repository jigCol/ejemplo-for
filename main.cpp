#include <iostream>

using namespace std;

//10. Hacer un programa que solicite 20 números y luego emitir por pantalla el
//máximo de los números pares y el mínimo de los números impares.

int main()
{int n, minimoimpar,maximopar;
bool banderapar=1, banderaimpar=1;

cout<<"Se solicitaran 20 numeros"<<endl;
       for(int x=0;x<20;x++)
       {cout<<"Ingrese un numero("<<(x+1)<<"): ";
       cin>>n;

       if(n%2==0){
        if(banderapar){maximopar=n,banderapar=0;}
         else if(n>maximopar){maximopar=n;}
       }
       else if(banderaimpar){minimoimpar=n,banderaimpar=0;}
         else if(n<minimoimpar){minimoimpar=n;}

       }
cout<<endl<<"El maximo de los pares es: "<<maximopar<<". El minimo impar es: "<<minimoimpar<<"."<<endl;

    return 0;
}
