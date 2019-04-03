#include "ricerca.h"
#include <iostream>

using namespace std;

ricerca::ricerca()
{
    newvar=0;
    low=0;

}

ricerca::~ricerca()
{
    cout<<"vettore distrutto"<<endl;

}


void ricerca::inserimentovector()
{

    cout<<"quanti giorni aggiungere?"<<endl;
    cin>>newvar;
    newvar++;

    for(int i=1;i<newvar;i++)
    {
        cout<<"inserire quotazione giorno :"<<i<<"  ";
        cin>>ptr[i];

    }





}

void ricerca::print()
{

        for(int i=1;i<newvar;i++)
    {
        cout<<"Quotazione giorno "<<i+1<<"  "<<ptr[i]<<endl;


    }




}


void ricerca::ricercaptr()
{

  mid=(low+newvar)/2;

cout<<" indice mediano: "<<mid<<endl;

     if (ptr[mid]<ptr[mid+1])
            cout<<"coppia trovata "<<ptr[mid]<<" e minore di "<<ptr[mid+1]<<endl;

    else if(ptr[mid]>ptr[mid+1]){
         low=mid;
        ricercaptr();}
          else {
            newvar=mid;
            ricercaptr();}




}
