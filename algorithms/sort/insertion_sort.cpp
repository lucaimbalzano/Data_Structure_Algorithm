//
// Created by lucaimbalzano on 10/28/24.
//
// O(n^2)

#include "insertion_sort.h"
#include <vector>
#include <iostream>
#include "../../utils/console.h"
using namespace std;

vector<int> insertion_sort(vector<int>& v){
    for(int i = 1; i < v.size(); i++){
        int temporaryVar = v[i];
        int j = i - 1;
        while(j >= 0 && temporaryVar < v[j]){
            v[j + 1] = v[j];
            j --;
        }
        v[j + 1] = temporaryVar;
    }
    return v;
}
//
//void insertion_sort_interi(vector<int>& v)
//{
//    for (int i = 1; i < v.size(); i++) {
//        int elemento_corrente = v[i];
//
//        int j = i - 1;
//        while( j>=0 && v[j] > elemento_corrente)
//        {
//            v[j + 1] = v[j];
//            j--;
//        }
//        v[j + 1] = elemento_corrente;
//    }
//}


int main(){
    std::vector<int> v = load_vector_int_rand<int>(15, 1, 99);
    std::cout << "Vector[" << v.size() << "]: ";
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
    insertion_sort(v);
//    insertion_sort_interi(v);
    std::cout << "Vector Sorted [" << v.size() << "]: ";
    for(int j = 0; j < v.size(); j++){
        std::cout << v[j] << ", ";
    }
    std::cout  << std::endl;
    return 0;
}