/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

    double CalcularPrecoBebida(string TipoBebida, bool ComLeiteExtra = false, bool SemAcucar = false, string Tamanho = "medio"){
        double preco = 0;

    if(TipoBebida == "cafe"){


        preco+=2.50;

    }else if(TipoBebida == "cha"){

       preco+=2.0;



    }if(ComLeiteExtra == false){

        preco+=2.50;
    }else{

        preco=preco;


    }if(SemAcucar == false){

       preco-=0.25;
    }else{

    preco=preco;

    }if(Tamanho=="pequeno"){

       preco=preco;

    }else if(Tamanho=="medio"){

      preco+=0.75;

    }else{

    preco+=1.50;

    }
  
     return (preco);

    }


int main()
{
    string TipoBebida;
    bool ComLeiteExtra;
    bool SemAcucar;
    string Tamanho;
    cout << "selecione o tipo de bebida: 'cafe' ou 'cha' " << endl;
    cin >> TipoBebida;
    cout << "deseja com leite?" << endl;
    cin >> ComLeiteExtra;
    cout << "com ou sem açucar?" << endl;
    cin >> SemAcucar;
    cout << "escolha o tamanho da bebida 'pequeno', 'medio', ou 'grande" << endl;
    cin >> Tamanho;

   cout << "o preço é:" << CalcularPrecoBebida(TipoBebida, ComLeiteExtra, SemAcucar, Tamanho);
}


