#ifndef CP_STATUSDISPLAY_H
#define CP_STATUSDISPLAY_H

void internal_displayStatus(int current, int total);
#define displayStatus(current, total) internal_displayStatus(current, total)

#endif