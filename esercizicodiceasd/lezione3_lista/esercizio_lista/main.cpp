#include <iostream>
#include <string>
#include <dipendenti.h>
#include <vector>
#include <cstdlib>
using namespace std;






int main(int argc, char** argv)
{


     Dipendenti* lista =new Dipendenti();

    while(1){
            int resp=0;
            cout<<"salve, se vuoi creare una lista digita 1, se vuoi vedere i componenti digita 2 se vuoi calcoare il totale degli stipendi escluso il bonus dei manager digita 3 se vuoi uscire digita 4"<<endl;
            cin>>resp;
            if(resp==1){


    int n,m;
    cout<<"quanti dipendenti inserire?"<<endl;
    cin>>n;
    cout<<"quanti manager inserire?"<<endl;
    cin>>m;

    for(int i=0;i<n;i++){


      lista->add();
    }
      for(int i=0;i<m;i++){


      lista->addM();
    }

            }

 else if(resp==2){


            cout<<"totale dipendenti con manager"<<lista->length<<endl;
           lista->Print();

    }





  else if(resp==3){

      lista->Somma();


        }


else if(resp==4){
break;
}


    }


    return 0;
}


