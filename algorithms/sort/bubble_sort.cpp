//
// Created by lucaimbalzano on 10/28/24.
//
// Bubble sort works by gradually moving larger numbers to the end, similar to how bubbles rise to the surface
// n-1 -> n-2 -> n-3 ...
// O(n^2)

#include "bubble_sort.h"
#include <iostream>
#include <vector>
using namespace std;


vector<int> bubble_sort(vector<int>& v){
    std::cout << "STARTED::BUBBLE_SORT" << std::endl;
    bool isSorted = false;
    for(int i = 0; i < v.size() ; i++){
        for(int j = 0; j < v.size() - i -1; j++){
            if(v[j] > v[j+1]){
                std::swap(v[j], v[j+1]);
                isSorted = true;
            }
        }
        if(!isSorted) break;
    }
    return v;
}

int main(){
    std::vector<int> v;
    v.push_back(1);
    v.push_back(-20);
    v.push_back(34);
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
    bubble_sort(v);
    std::cout << "Vector Sorted: ";
    for(int j = 0; j < v.size(); j++){
        std::cout << v[j] << ", ";
    }
    std::cout  << std::endl;

    return 0;
};