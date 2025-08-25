#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
        int Q;
    scanf("%d", &Q);

    char *S = calloc(1000000, sizeof(char));
    char *stack[Q];
    int top = -1;

    for (int i = 0; i < Q; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            char w[1000001];
            scanf("%s", w);
            stack[++top] = strdup(S);
            strcat(S, w);
        } 
        else if (type == 2) {
            int k;
            scanf("%d", &k);
            stack[++top] = strdup(S);
            int len = strlen(S);
            S[len - k] = '\0';
        } 
        else if (type == 3) {
            int k;
            scanf("%d", &k);
            printf("%c\n", S[k - 1]);
        } 
        else if (type == 4) {
            strcpy(S, stack[top]);
            free(stack[top--]);
        }
    }

    free(S);
    return 0;
}
