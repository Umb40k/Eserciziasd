#ifndef BLOCK_H
#define BLOCK_H
#include <string>
#include <ctime>
#include <map>



template <typename B>
class Node{

public:
 B mydata;
 Node<B>* next;
  std::string nome;

        double qt;



};




template <typename B>
class Block
{
    public:
        Block(){

      head=NULL;

        };
        void display();
        void Push ( B& elem);
        void trans();
        void transprint();
       std:: map<std::string,std::time_t> Trans;

    private:

        int dim,top;
        int length;
        Node<B>* head;





};




#endif // BLOCK_H
