#include<stdio.h>


int main(){
    int arr[10][10];
    int i, j, m, n, x;

    printf("Enter size of array(m & n):\n ");
    scanf("%d %d", &m, &n);
    printf("Enter values of array:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    printf("\nEnter value you want to find: ");
    scanf("%d", &x);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(x==arr[i][j]){

                printf("\nFound!");
                exit(0);
            }
        }
    }
    printf("\nNot Found!");

    return 0;
}
