
#include <stdio.h>

int main(){

    /*
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
        printf("%d ", &Elements[i]);
    }
    */


    int data = 1010;
    int *data_pointer = &data;
    long unsigned int pointerSize = sizeof(data_pointer);

    
    printf("\nthe data is %d (actual variable): ", data);

    // for actual value : %d, *ptr 
    // for address value : %p, ptr
    printf("\nthe data is %d (pointer variable): ", *data_pointer);

    // size of the programs 
    printf("\nthe size of the pointer is : %ld", pointerSize);


    printf("\n");
    return 0;
}