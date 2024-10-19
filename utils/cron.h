//
// Created by lucaimbalzano on 10/19/24.
//

#ifndef DATA_STRUCTURE_ALGORITHMS_CRON_H
#define DATA_STRUCTURE_ALGORITHMS_CRON_H

#include <chrono>
#include <iostream>
enum Status {START, STOP};


auto cronometer(Status status = Status::START) {
    static std::chrono::time_point<std::chrono::high_resolution_clock> start;
    static std::chrono::time_point<std::chrono::high_resolution_clock> end;

    if (status == Status::START) {
        start = std::chrono::high_resolution_clock::now();
        end = start;
    } else {
        end = std::chrono::high_resolution_clock::now();
    }

    return std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
}

#endif //DATA_STRUCTURE_ALGORITHMS_CRON_H
