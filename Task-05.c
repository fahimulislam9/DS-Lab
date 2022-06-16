#include<stdio.h>

int main(){
    int arr[10];
    int i, n, x;

    printf("Enter length of array: \n");
    scanf("%d", &n);
    printf("Enter values of array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter value you want to find: ");
    scanf("%d", &x);
    for(i=0; i<n; i++){
        if(x==arr[i]){

            printf("\nFound!");
            exit(0);
        }
    }
    printf("\nNot Found!");

    return 0;
}
