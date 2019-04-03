#include <iostream>
using namespace std;

#include "Block.h"
#include "src\Block.cpp"


int main()
{



Block<double> B;


int i,j;
double qt;

    cout << "quanti Hash vuoi creare? se vuoi uscire digita 0" << endl;
    cin>>i;
     for(j=0;j<i;j++){
        cout << "disponibilita iniziale del "<<j<<":";
       cin>>qt;
       cout<<endl;
        B.Push(qt);
     }
     while(1){
cout << "Hashmap:" << endl;
 B.display();

 cout << "vuoi creare un transazione tra due di essi? digita 1 , 2 per stampare le transazioni che ti interessano ,altrimenti 0 per uscire" << endl;
 cin>>i;
   if(i==1){

     B.trans();

   }

   else if(i==2){
    B.transprint();
   }

   else if(i==0){

      break;


   }


}



    return 0;
}
