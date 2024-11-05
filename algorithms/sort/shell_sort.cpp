//
// Created by lucaimbalzano on 11/5/24.
//
// the perfemonce depends a lot from the desc input sequences
// Computational Complexity goes from O(n*log(n)) - O(n^2)
#include "shell_sort.h"
#include <vector>
#include <iostream>
#include "../../utils/console.h"
using namespace std;

void print_vector(vector<int>& v){
    std::cout << "Vector [" << v.size() << "]: ";
    for(int j = 0; j < v.size(); j++){
        std::cout << v[j] << ", ";
    }
    std::cout  << std::endl;

}

void shell_sort(vector<int>& v){
    int distance_gap_to_check = v.size()/2;
    while (distance_gap_to_check>0){
        for (int i = distance_gap_to_check; i < v.size(); i++) {
            int elem_pin = v[i];
            int j = i;
            while( j>=distance_gap_to_check && v[j - distance_gap_to_check] > elem_pin)
            {
                v[j] = v[j - distance_gap_to_check];
                j -= distance_gap_to_check;
                print_vector(v);
            }
            v[j] = elem_pin;
        }
        distance_gap_to_check = distance_gap_to_check / 2;
    }
}


int main(){
    std::vector<int> v = load_vector_int_rand<int>(15, 1, 99);
    std::cout << "--- START::Vector[" << v.size() << "]: ";
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
    shell_sort(v);
    std::cout << "--- END::Vector Sorted [" << v.size() << "]: ";
    for(int j = 0; j < v.size(); j++){
        std::cout << v[j] << ", ";
    }
    std::cout  << std::endl;
    return 0;
}

/** VISUALIZE OUTPUT SHELL SORT
--- START::Vector[15]: 34, 17, 37, 55, 45, 52, 70, 1, 89, 11, 83, 88, 19, 64, 86,
Vector [15]: 34, 17, 37, 55, 45, 52, 70, 34, 89, 11, 83, 88, 19, 64, 86,
Vector [15]: 1, 17, 37, 55, 45, 52, 70, 34, 89, 37, 83, 88, 19, 64, 86,
Vector [15]: 1, 17, 11, 55, 45, 52, 70, 34, 89, 37, 83, 88, 52, 64, 86,
Vector [15]: 1, 17, 11, 55, 45, 19, 70, 34, 89, 37, 83, 88, 52, 70, 86,
Vector [15]: 1, 17, 11, 55, 45, 19, 64, 45, 89, 37, 83, 88, 52, 70, 86,
Vector [15]: 1, 17, 11, 55, 34, 19, 64, 45, 89, 64, 83, 88, 52, 70, 86,
Vector [15]: 1, 17, 11, 55, 34, 19, 55, 45, 89, 64, 83, 88, 52, 70, 86,
Vector [15]: 1, 17, 11, 37, 34, 19, 55, 45, 89, 64, 83, 89, 52, 70, 86,
Vector [15]: 1, 17, 11, 37, 34, 19, 55, 45, 88, 64, 83, 89, 64, 70, 86,
Vector [15]: 1, 17, 11, 37, 34, 19, 55, 45, 88, 55, 83, 89, 64, 70, 86,
Vector [15]: 1, 17, 11, 37, 34, 19, 52, 45, 88, 55, 83, 89, 64, 83, 86,
Vector [15]: 1, 17, 11, 37, 34, 19, 52, 45, 88, 55, 70, 89, 64, 83, 89,
Vector [15]: 1, 17, 11, 37, 34, 19, 52, 45, 88, 55, 70, 88, 64, 83, 89,
Vector [15]: 1, 17, 17, 37, 34, 19, 52, 45, 86, 55, 70, 88, 64, 83, 89,
Vector [15]: 1, 11, 17, 37, 37, 19, 52, 45, 86, 55, 70, 88, 64, 83, 89,
Vector [15]: 1, 11, 17, 34, 37, 37, 52, 45, 86, 55, 70, 88, 64, 83, 89,
Vector [15]: 1, 11, 17, 34, 34, 37, 52, 45, 86, 55, 70, 88, 64, 83, 89,
Vector [15]: 1, 11, 17, 19, 34, 37, 52, 52, 86, 55, 70, 88, 64, 83, 89,
Vector [15]: 1, 11, 17, 19, 34, 37, 45, 52, 86, 86, 70, 88, 64, 83, 89,
Vector [15]: 1, 11, 17, 19, 34, 37, 45, 52, 55, 86, 86, 88, 64, 83, 89,
Vector [15]: 1, 11, 17, 19, 34, 37, 45, 52, 55, 70, 86, 88, 88, 83, 89,
Vector [15]: 1, 11, 17, 19, 34, 37, 45, 52, 55, 70, 86, 86, 88, 83, 89,
Vector [15]: 1, 11, 17, 19, 34, 37, 45, 52, 55, 70, 70, 86, 88, 83, 89,
Vector [15]: 1, 11, 17, 19, 34, 37, 45, 52, 55, 64, 70, 86, 88, 88, 89,
Vector [15]: 1, 11, 17, 19, 34, 37, 45, 52, 55, 64, 70, 86, 86, 88, 89,
--- END::Vector Sorted [15]: 1, 11, 17, 19, 34, 37, 45, 52, 55, 64, 70, 83, 86, 88, 89,
**/