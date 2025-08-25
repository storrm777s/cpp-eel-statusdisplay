Allows you to easily display a progress bar for whatever lengthy task.

How it looks in the command terminal:  
`[=============                                     ] 27%`

Primary function:  
`displayStatus(chunksLoaded, chunksToLoad);`

Example (also provided in main.cpp):
```
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
```
