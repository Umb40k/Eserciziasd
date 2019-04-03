#ifndef DIPENDENTI_H
#define DIPENDENTI_H
#include <string>
#include <iostream>
using namespace std;


class Node{
public:

Node* next;
    string name;
        double salario;
        double salario_p;
Node operator+( Node)const;


};


class Dipendenti
{
    public:
        Dipendenti();
        virtual ~Dipendenti();
        int length;
        Node*testa;
void add();
void addM();
void Print();
void Somma();
    protected:

    private:
};



/*class Manager:public Dipendenti{


    public:
        string name;
        double salario=salario_p+(salario_p*10/100);
        double salario_p;
 void Print() { cout << "Il nome del manager e' " <<
name << endl; }


};*/
#endif // DIPENDENTI_H
