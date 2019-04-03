#ifndef INSERECTION_H
#define INSERECTION_H
#include<string>

class inserection
{
    public:

        inserection(){
        key=0;
        numvar=0;

        };
        int inserection1();
           void inserection2();
          void inserection3( );
           void inserection4( );
           void vectorcreation();



    protected:

    private:
         int numvar;
        int *ptr=new int[numvar];
        int key;

};

#endif // INSERECTION_H
