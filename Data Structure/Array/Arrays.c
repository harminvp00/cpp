
#include <stdio.h>

int main(){

    int len = 0;
    printf("Enter Size of the Arrays (No. of element you want to store inside the array): ");
    scanf("%d", &len);

    // Empty Arrays 
    int Elements[len] = {};

    // Size of the array 
    int length = sizeof(Elements) / sizeof(Elements[0]);

    for(int i = 0; i < length; i++){
        printf("Enter Element at index : %d : ", i);
        scanf("%d", &Elements[i]);
    }

    printf("\nElement at Array are:\n");
    for(int i = 0; i < length; i++){
        printf("%d\n", Elements[i]);
    }

    return 0;
}