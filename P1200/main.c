#include <stdio.h>

int calc_mod(const char *s) {
    int product = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        int value = s[i] - 'A' + 1;
        product = (product * value) % 47;
    }
    return product;
}

int main() {
    char comet[10];
    char group[10];

    scanf("%s", comet);
    scanf("%s", group);

    if (calc_mod(comet) == calc_mod(group)) {
        printf("GO\n");
    } else {
        printf("STAY\n");
    }

    return 0;
}