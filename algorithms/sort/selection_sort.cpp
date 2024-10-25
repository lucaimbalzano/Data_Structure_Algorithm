//
// Created by lucaimbalzano on 10/23/24.
//

#include "selection_sort.h"
/**
 *  1 + 2 + 3 .. (n-1)
 *  n*(n+1)/2 = n^2/2 + n/2 - n
 *  n^2/2 - n/2 = O(n^2) --> will be always this the amount of steps the algorithm will do
 *
 * */


#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void selection_sort(std::vector<int>& v) {
    std::cout << "STARTED::SELECTION_SORT" << std::endl;
    for(int i = 0; i < v.size(); i++) {
        int pos_min = i;
        for(int j = i + 1; j < v.size(); j++) {
            if(v[j] < v[pos_min]) {
                std::cout << "SORT::" << "V[i][" << v[i] << "], V[j][" << v[j] << "];" << std::endl;
                pos_min = j;
            }
        }
        std::swap(v[i], v[pos_min]);
    }
}
int main(){
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(10);
    v.push_back(7);
    v.push_back(5);
    v.push_back(6);
    std::cout << "Vector: ";
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout  << std::endl;
    selection_sort(v);
    std::cout << "Vector Sorted: ";
    for(int j = 0; j < v.size(); j++){
        std::cout << v[j] << ", ";
    }
    std::cout  << std::endl;
    return 0;
}