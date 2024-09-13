#include <stdio.h>
#define SEC_PER_MINUTE 60
#define SEC_PER_HOUR 3600

int main(void) {
    int hour[3], min[3], sec[3];
    int time[3];
    for (int i = 0; i < 2; i++) {
        scanf("%02d:%02d:%02d", &hour[i], &min[i], &sec[i]);
        time[i] = hour[i]*SEC_PER_HOUR + min[i]*SEC_PER_MINUTE + sec[i];
    }
    
    int gap;
    if (time[1] > time[0]) {
        gap = time[1] - time[0];
    }
    else {
        gap = 24*SEC_PER_HOUR - (time[0] - time[1]);
    }
    if (gap == 0) {return 0; }
    
    hour[2] = gap / SEC_PER_HOUR;
    min[2] = (gap % SEC_PER_HOUR) / SEC_PER_MINUTE;
    sec[2] = (gap % SEC_PER_HOUR) % SEC_PER_MINUTE;
    printf("%02d:%02d:%02d",hour[2],min[2],sec[2]);
    return 0;
}