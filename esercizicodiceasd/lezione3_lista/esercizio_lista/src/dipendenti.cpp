#include "dipendenti.h"

Dipendenti::Dipendenti()
{
    this->length=0;
    this->testa=NULL;
    //ctor
}

Dipendenti::~Dipendenti()
{
    std::cout<<"lista cancellata";
}


void Dipendenti::add(){

        Node* node=new Node();
        cout<<"inserire nome dipendenente :"<<endl;
        cin>>node->name;
        cout<<"inserire salario dipendente :"<<endl;
        cin>>node->salario;
        node->salario_p=0.0;
        node->next = this->testa;
        this->testa= node;
        this->length++;

}

void Dipendenti::addM(){

        Node* node=new Node();
        cout<<"inserire nome Manager :"<<endl;
        cin>>node->name;
        cout<<"inserire salario Manager :"<<endl;
        cin>>node->salario_p;
        node->salario=node->salario_p+(node->salario_p*10/100);
        node->next = this->testa;
        this->testa= node;
        this->length++;

}

Node Node:: operator+( Node tot)const

{
   /*Node* tot;
   tot->salario=parz.salario;
    tot->salario=tot->salario+parz.salario-(parz.salario*10/100);
    return *tot;*/
    Node resp;

    if(tot.salario_p==0)
    resp.salario=this->salario+tot.salario;
    else
        resp.salario=this->salario+tot.salario-tot.salario_p*10/100;


    return resp;

}


void Dipendenti::Print(){

Node* head=this->testa;
int i=1;
while(head){
 cout << "Il nome del dipendente e' " <<
head->name << " " <<"il salario e':"<<head->salario<<endl;
head=head->next;
i++;
}
}
void Dipendenti::Somma(){

Node* head=this->testa;
int i=1;Node tot,parz;
while(head){
        parz=*head;
 tot=tot+parz;
 tot.salario_p=parz.salario_p;
head=head->next;
i++;
}
 cout<<"la somma dei salari e':"<<tot.salario<<endl;



}


