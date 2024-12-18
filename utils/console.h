// console.h
#ifndef DATA_STRUCTURE_ALGORITHMS_CONSOLE_H
#define DATA_STRUCTURE_ALGORITHMS_CONSOLE_H

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string random_string(int len){
    static const std::string base_rnd_str =
            "01234566789"
            "ABCDEFGHILMNOPQRSTUVWYZ"
            "abcdefghilmnfghilmnopqrstuvz";
    if(len <= 0)
        len = 1; //Default

    std::string res;
    res.reserve(len);

    for(int i = 0; i < len; i++)
        res += base_rnd_str[ rand() % base_rnd_str.length() ];

    return res;
}


template <typename T>
std::vector<T> load_vector_str(int len_vector){
    std::vector<T> vector;
    for(int i=0; i < len_vector; i++){
        vector.push_back(random_string(1));
    }
    return vector;
}

template<typename T>
std::vector<T> load_vector_int(int len_vector) {
    std::vector<T> vector;
    std::srand(std::time(0));
    for (int i = 0; i < len_vector; i++) {
        vector.push_back(static_cast<T>(std::rand()));
    }
    return vector;
}

#include <random>
template<typename T>
std::vector<T> load_vector_int_rand(int len_vector, int min, int max) {
    std::vector<T> vector;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(min, max);

    for (int i = 0; i < len_vector; i++) {
        vector.push_back(static_cast<T>(dist(gen)));
    }

    return vector;
}


template <typename T>
void printVectorInline(const std::vector<T>& vec) {
    std::cout << "\n[";
    for (size_t i = 0; i < vec.size(); ++i) {
            std::cout << vec[i] << "(" << i << ")";
            if (i != vec.size() - 1) {
                std::cout << ", ";
            }
    }
    std::cout << "]" << std::endl;
}

#endif //DATA_STRUCTURE_ALGORITHMS_CONSOLE_H
