#include <stdio.h>

int main(){

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