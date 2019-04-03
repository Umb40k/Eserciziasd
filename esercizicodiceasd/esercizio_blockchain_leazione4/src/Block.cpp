#include "Block.h"
#include<string>
#include <ctime>
#include <iostream>
#include <vector>
#include<cstdlib>
#include <iterator>
#include <map>
#include <cstring>
using namespace std;





template <typename B> void Block<B>::Push( B & elem){

    Node <B> *temp=new Node<B>;

     static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";


    temp->qt=elem;
   // temp->now;
   for(int i=0;i<20;i++){
        string temp1;
   temp1=alphanum[rand() % (sizeof(alphanum)-1)];
    temp->nome+=temp1;
   }
        temp->next = this->head;
        this->head= temp;
        this->length++;


}


template <typename B> void Block<B>:: display()
  {
    Node<B> *temp=this->head;
     int i=1;
    while(temp)
    {
      cout<<temp->nome<<"\t";
      //cout<<temp->now<<"\t";
      cout<<temp->qt<<"\t";
        cout<<endl;
      temp=temp->next;
      i++;
    }

  }

  template <typename B> void Block<B>:: trans()
  {
    Node<B> *temp=this->head;
    Node<B> *temp2=this->head;


    string hashm,hashm1,tipo;
    int i;

    cout<<"inserire il codice del primo hash code da cui effetturare la transazione:";
    cin>>hashm;
    while(temp->nome!=hashm)
    {
        temp=temp->next;

    }
     cout<<"inserire il codice del secondo hash code da cui effetturare la transazione:";
    cin>>hashm1;
     while(temp2->nome!=hashm1)
    {
        temp2=temp2->next;

    }

    cout<<"vuoi prelevare o depositare? 1 prelavare 2 depositare"<<endl;
    cin>>i;
    if(i==1){
            string tipo="prelievo da";
            cout<<"digitare la somma da prelevare dal primo e depositare nel secondo:"<<endl;
    cin>>i;
    cout<<endl;
    temp->qt-=i;
    temp2->qt+=i;
    }
        else if(i==2){
            string tipo="deposito da";
            cout<<"digitare la somma da depositare dal primo e prelevare nel secondo:"<<endl;
    cin>>i;
    cout<<endl;
    temp->qt+=i;
    temp2->qt-=i;

        }
std::time_t t = std::time(0);
cout<<"transazione in data :"<<t<<endl;
cout<<"tra:"<<temp->nome<<" e "<<temp2->nome<<endl;
cout<<"eseguita da:"<<temp->nome<<" a "<<temp2->nome<<endl;
cout<<"tot "<<temp->nome<<" :"<<temp->qt<<"   ";
cout<<"tot "<<temp2->nome<<" :"<<temp2->qt<<endl;
Trans.insert(pair<string,time_t>(temp->nome,t));


  }


template <typename B> void Block<B>:: transprint()
  {
      string i;
   cout<<"inserire il codice del  hash code per vederne le transazioni:";
   cin>>i;
    map<string, time_t>::iterator itr;
    cout << "\nLe transazioni di : "<<i<<"\n";
    cout << "\tHash 1(selezionato)\Transazione \n";
    for (itr = Trans.begin(); itr != Trans.end(); ++itr) {
            if(itr->first==i)
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

  }
