//
// Created by q1552 on 2019/12/22.
//

#include <stdio.h>
#include <math.h>

double sqr(double val) {
    return val * val;
}

double calDelta(double a, double b, double c) {
    return (sqr(b) - (4 * a * c));
}

double calLarger(double a, double b, double c) {
    return (((-b) + sqrt(sqr(b) - (4 * a * c))) / (2 * a));
}

double calSmaller(double a, double b, double c) {
    return (((-b) - sqrt(sqr(b) - (4 * a * c))) / (2 * a));
}

int main() {
    double a, b, c;

    printf("ax² + bx + c = 0\n");
    printf("Input a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c); // NOLINT(cert-err34-c)

    double delta = calDelta(a, b, c);

    printf("Delta: %lf \n", delta);

    printf("\n");
    if (delta > 0) {
        printf("Larger Root: %lf\n", calLarger(a, b, c));
        printf("Smaller Root: %lf\n", calSmaller(a, b, c));
    } else if (delta == 0) {
        printf("Same Root: %lf\n", calLarger(a, b, c));
    } else {
        printf("No root!");
    }

    printf("\n");
    printf("Press any key to continue...");
    getchar();

    return 0;
}