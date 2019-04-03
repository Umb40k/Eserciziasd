#ifndef RICERCA_H
#define RICERCA_H

using namespace std;

class ricerca
{
    public:
        ricerca();
        virtual ~ricerca();
        void inserimentovector();
        void print();
        void ricercaptr();



    protected:

    private:
        int low;
        int newvar;
        double *ptr=new double[newvar];
         int mid;
};

#endif // RICERCA_H
