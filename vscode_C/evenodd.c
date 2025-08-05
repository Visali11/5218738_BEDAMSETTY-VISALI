
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num%2 ==0){
        printf("\n %d is  Even number", num);
    }
    else{
        printf("\n %d is odd number", num);
    }

    return 0;
}