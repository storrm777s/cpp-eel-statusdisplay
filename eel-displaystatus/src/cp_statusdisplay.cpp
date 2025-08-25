#include <iostream>
#include "cp_statusdisplay.h"

#define displayStatus(current, total) internal_displayStatus(current, total)

void internal_displayStatus(int current, int total) {
    int barW = 50;
    int pos = (current * barW) / total;

    std::cout << "[";
    for (int i = 0; i < barW; i++) {
        if (i < pos) std::cout << "=";
        else std::cout << " ";
    }
    std::cout << "] " << (current * 100) / total << "%\r";
}