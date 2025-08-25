#include <iostream>

// HEADERS
#include "cp_statusdisplay.h"

int main() {
    int chunksLoaded = 0;
    int chunksToLoad = 10000;

    while (chunksLoaded < chunksToLoad) {
        chunksLoaded++;

        displayStatus(chunksLoaded, chunksToLoad);
    }

    return 0;
}