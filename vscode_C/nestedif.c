#include <stdio.h>
int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 50) {
        if (score >= 90) {
            printf("Grade: A\n");
        }
        else if (score >= 75) {
            printf("Grade: B\n");
        }
        else {
            printf("Grade: C\n");
        }
    }
    else {
        printf("Fail\n");
    }

    return 0;
}
