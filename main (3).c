#include <stdio.h>

int main() {
    int t1, t2, t3;
    float total_time;
    printf("Введіть три значення: ");
    scanf("%d %d %d", &t1, &t2, &t3);
    if (t1 >= 10000 || t2 >= 10000 || t3 >= 10000) {
        printf("Час повинен бути менше або дорівнювати 10000.\n");
        return 1;
    }
    total_time = 1.0 / ((1.0 / t1) + (1.0 / t2) + (1.0 / t3));
        printf("Час, необхідний для з'їдання пирога: %.2f годин\n", total_time);
        return 0;
}
