#include <iostream>
#include <chrono>


using namespace std;

const int n_elements = 100000;
string v[n_elements];

string random_string(int len){
    static const string base_rnd_str =
            "01234566789"
            "ABCDEFGHILMNOPQRSTUVWYZ"
            "abcdefghilmnfghilmnopqrstuvz";
    string res = "";

    for(int i = 0; i < len; i++)
        res += base_rnd_str[ rand() % base_rnd_str.length() ];
    return res;
}


//
//int main() {
//    auto start_time = chrono::high_resolution_clock::now();
//    for(int i=0; i <= n_elements; i++){
//        v[i] = random_string(100);
//    }
//    auto end_time = chrono::high_resolution_clock::now();
//    auto duration_execution = chrono::duration_cast<std::chrono::milliseconds>(start_time - end_time);
//
//    std::cout << "Execution: " << duration_execution.count() << " milliseconds" << std::endl;
//    return 0;
//}
