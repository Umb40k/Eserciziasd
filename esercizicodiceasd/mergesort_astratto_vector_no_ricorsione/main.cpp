#include <iostream>
#include <vector>
#include<stdlib.h>


using namespace std;

vector<int> MergeSort(vector<int> input) {
    if (input.size() == 1)
        return input;

    // Split them recursively
    size_t m = input.size() / 2;

    // Create two new sub vectors
    vector<int> leftVector, rightVector;
    int i = 0;
    while (i < m)
        leftVector.push_back(input.at(i++));
    while (i < input.size())
        rightVector.push_back(input.at(i++));

    leftVector = MergeSort(leftVector);
    rightVector = MergeSort(rightVector);

    // Now merge the two vectors
    vector<int> merged;

    vector<int>::iterator itL = leftVector.begin();
    vector<int>::iterator itR = rightVector.begin();

    while (itL != leftVector.end() && itR != rightVector.end()) {
        if (*itL < *itR) {
            merged.push_back(*itL);
            ++itL;
        } else {
            merged.push_back(*itR);
            ++itR;
        }
    }

    while (itL != leftVector.end()) {
        merged.push_back(*itL);
        ++itL;
    }

    while (itR != rightVector.end()) {
        merged.push_back(*itR);
        ++itR;
    }

    return merged;
}

int main() {
    int MAX_SIZE=3,input;
    std::vector<int> arr_sort,sorted;


    cout << "Merge Sort Example - Functions and vector\n";
    cout << "\nEnter " << MAX_SIZE << " vettore: " << endl;

    for (int iter=0;iter<MAX_SIZE;iter++){
        cin >>input;
         arr_sort.push_back(input);
        }

    cout << "\nVettore disordinato   :";
    for (std::vector<int>::const_iterator iter = arr_sort.begin(); iter !=arr_sort.end(); iter++) {
        cout << *iter;
    }

      sorted=MergeSort(arr_sort);

    cout << "\n\nVettore ordinato :";
     for (auto i = sorted.begin(); i !=sorted.end(); i++) {
        cout << *i;
    }



}


