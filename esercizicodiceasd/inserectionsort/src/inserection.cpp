#include "inserection.h"
#include<iostream>
#include<string>
#include <algorithm>

using namespace std;





int inserection:: inserection1(){


vectorcreation();

for(int j=0; j <numvar; j++){

if(ptr[j] > key){
key=ptr[j];
cout<<"elemento ad indice :"<<j<<"  sostituito in key "<<endl;
}

}


return key;


}


void inserection::vectorcreation(){


cout<<"selezionare quanti elementi inserire:"<<endl;
cin>>numvar;

for(int j=0; j <numvar; j++){
cout<<"Inserisci l'elemento con indice "<<j<<": ";
cin >> ptr[ j ];
}

cout<<"Elementi del vettore:"<<endl;

for(int j=0; j <numvar; j++){
cout << ptr[ j ] << endl;
}




}




void inserection:: inserection2(){


vectorcreation();
int a,b=0,c=0;

for(int j=0; j <numvar; j++){
key=0;
a=ptr[j]-ptr[j-1];

if(key >= a){
key=a;

b=ptr[j];
c=ptr[j-1];
}


}


cout<<"numeri con minore differenza "<<b<<" e' "<<c<<endl;


}




void inserection:: inserection3(){


vectorcreation();
int a,b=0,c=0;
auto end = ptr.end();
	for (auto it = ptr.begin(); it != end; ++it) {
		end = std::remove(it + 1, end, *it);
	}

}


cout<<"duplicati eleminati"<<endl;


}




void inserection:: inserection4(){


vectorcreation();
int a,b=0,c=0;

for(int j=0; j <numvar; j++){
key=0;
a=ptr[j]-ptr[j-1];

if(key >= a){
key=a;

b=ptr[j];
c=ptr[j-1];
}


}


cout<<"numeri con minore differenza "<<b<<" e' "<<c<<endl;


}
