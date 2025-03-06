#include <stdio.h>

#define PI 3.1416

int main() {
    int R;
    for (R = 0; R <= 6; R += 2) {
        double VOLUME = (4.0 / 3.0) * PI * (R * R * R);
        printf("%d %.4f\n", R, VOLUME);
    }
    return 0;
}
