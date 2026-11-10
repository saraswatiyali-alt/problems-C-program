// 5. Automatic Street Light System
// Problem statement:
// An automatic street light system checks the surrounding light intensity using a sensor and automatically switches the street light ON or OFF


#include <stdio.h>

int main() {
    int light;

    printf("Enter light intensity (0-100): ");
    scanf("%d", &light);

    if (light < 0 || light > 100) {
        printf("Invalid sensor value");
    }
    else if (light < 30) {
        printf("Street Light: ON");
    }
    else {
        printf("Street Light: OFF");
    }

    return 0;
}

