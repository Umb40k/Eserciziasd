#include <iostream>
#include "inserection.h"


using namespace std;

int main()
{

  inserection ins;
  int i;
  cout<<"selezionare cosa fare:"<<endl;
  cout<<"1)Dato un insieme di N numeri, trovare il k-esimo numero più grande"<<endl;
  cout<<"2)Dato un insieme di N numeri, trovare la coppia di numeri che hanno la più piccola differenza tra di loro"<<endl;
  cout<<"3)Dato un insieme di N numeri, rimuovere gli elementi duplicati"<<endl;
  cout<<"4)Dato un insieme di N numeri, trovare il numero più frequente"<<endl;
  cin>>i;
  switch(i)
  {
      case 1:
    cout<<"elemento maggiore nell'array e' "<<ins.inserection1()<<endl;

      break;
      case 2:
       ins.inserection2();
      break;
    case 3:
      ins.inserection3();
      break;
      case 4:
      ins.inserection4();
      break;
      case 0:
        break;
        default:
        cout<<"valore non consentito, riprovare"<<endl;
        break;

  }




    return 0;
}
