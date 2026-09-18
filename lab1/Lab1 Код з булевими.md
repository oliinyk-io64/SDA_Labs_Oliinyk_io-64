#include <stdio.h>
int main() {
    double x, y;
    printf("input x: ");
    if (scanf("%lf", &x) == 1) {
        if (x > -15 && x <= 3) {
            y = 4.0 * x * x + 2.0;
            printf("y = %lf", y);
        }
        else if (x <= -30 || x > 20) {
            y = (3.0 * x * x * x) / 4.0 - 5.0;
            printf("y = %lf", y);
        } 
        else {
            printf("no value");
        }
    } 
    else {
        printf("no value");
    }
    return 0;
}
