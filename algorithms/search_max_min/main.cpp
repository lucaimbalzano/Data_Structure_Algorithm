// Search the max char in the string
// Search the max char and return the index
// Search the min char in the string
// Search the min char in the string
#include "console.h"
#include "cron.h"
#include <iostream>
#include <vector>
using namespace std;



template <typename T>
pair<int,T> get_max_and_index_from_vector(const vector<T>& v){
    T max_found = v[0];
    int index;
    for(size_t i=0; i < v.size(); i++){
            if(v[i] > max_found){
                max_found = v[i];
                index = i;
            }
    }
    return {index, max_found};
}

template <typename T>
vector<T> order_vector_by_max(vector<T> v_param){
    vector<T> v = v_param;
    for(size_t i = 0; i < v.size(); i++){
        for(size_t j = 0; j < v.size(); j++){
            if(v[i] > v[j]){
                std::swap(v[i], v[j]);
            }
        }
    }
    return v;
}

//int main(){
//    srand(time(0));
//    auto start = cronometer(START);
//    cout << "### STARTED - " << start;
//    std::vector<std::string> vector_rnd_str = load_vector_str<std::string>(1000);
//    printVectorInline(vector_rnd_str);
//    std::pair<int,string> result = get_max_and_index_from_vector(vector_rnd_str);
//    std::cout << "Max value: " << result.second << ", Index Position: " << result.first << std::endl;
//    vector<std::string> v_ordered = order_vector_by_max(vector_rnd_str);
//    printVectorInline(v_ordered);
//    auto end = cronometer(STOP);
//    cout << "### END - " << end;
//    return 0;
//}