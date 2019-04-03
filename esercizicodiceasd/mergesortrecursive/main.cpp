#include <iostream>
#include <vector>
#include <queue>

using namespace std;
void swap(std::vector<int> & data, int i, int j);
void print(std::vector<int> const & data);
void Merge(std::vector<int> & data, int lowl, int highl, int lowr, int highr);
void MergeSort(std::vector<int> & data, int low, int high);



int main()
{
      int ins;
    std::vector<int> data;
    cout<<"Quanti elementi ordinare?"<<endl;
    cin>>ins;
    for(int i=0;i<=ins;i++)
    {
         cout<<"Inserire elemento "<<i<<endl;
        cin>>ins;

        data.push_back(ins);
    }

    print(data);
    MergeSort(data, 0, data.size()-1);
    cout<<"vettore ordinato: "<<endl;
    print(data);

    return 0;
}

void swap(std::vector<int> & data, int i, int j)
{
    int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}

void print(std::vector<int> const & data)
{
    std::vector<int>::const_iterator iter = data.begin();

    for (; iter != data.end(); ++iter)
    {
        cout << *iter << " ";
    }

    if (data.size() > 0)
    {
        cout << endl;
    }
}

//divido l'array principale in n/2 porzioni

void MergeSort(std::vector<int> & data, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = low + (high-low)/2;

    MergeSort(data, low, mid);

    MergeSort(data, mid+1, high);

    Merge(data, low, mid, mid+1, high);
}


//eseguo il merge puntando al vettore data
void Merge(std::vector<int> & data, int lowl, int highl, int lowr, int highr)
{
    int tmp_low = lowl;
    std::vector<int> tmp;
//finche il minre di sinistra e minore del suo indice più alto e lo stesso per la parte di destra continuta
    while (lowl <= highl && lowr <= highr)
    {
        if (data[lowl] < data[lowr])//se l'elemento dell'indice low di sinistra e minore del suo corrispettivo di destra metti l'elemento successivo di left nel temp
        {
            tmp.push_back(data[lowl++]);
        }
        else if (data[lowr] < data[lowl])//altrimenti fallo per l'array di destra
        {
            tmp.push_back(data[lowr++]);
        }
        else
        {
            tmp.push_back(data[lowl++]);//se nessuna delle due si verifica allora metti prima quella dall'array di sinistra poi quello di destra
            tmp.push_back(data[lowr++]);
        }
    }
//qui viene eseguito l'inserimento senza effetturare un confronto tra le due porzioni
    while (lowl <= highl)
    {
        tmp.push_back(data[lowl++]);
    }

    while (lowr <= highr)
    {
        tmp.push_back(data[lowr++]);
    }

    std::vector<int>::const_iterator iter = tmp.begin();
    //metti nel vettore data tutti gli elementi da temp lavorando a puntatori

    for(; iter != tmp.end(); ++iter)
    {
        data[tmp_low++] = *iter;
    }
}


