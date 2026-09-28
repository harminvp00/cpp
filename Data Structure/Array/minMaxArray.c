

#include<stdio.h>

// globally declared array 
int numbers[18] = {42, 7, 89, 14, 63, 95, 31, 56, 8, 73, 19, 44, 91, 27, 5, 68, 82, 2};    

/**
    Display the all element of the array and if array is empty in term of the size it will return, 
    if Array have size or element it will print that
 */
void displayArray(int len){
    if(len == 0){
        printf("\nthe array is empty\n");
        return;
    }
    printf("\nThese are the array elements\n");
    for(int index = 0; index < len; index++){
        printf("%d  ", numbers[index]);
    }
}

int findMinElementUsingLinerSearchInArray(int len, int min){
    if(len == 0){
        printf("\n The Array is empty \n");
        return -1;
    }
    for(int index = 1; index< len; index++){
        if(numbers[index] < min){
            min = numbers[index];
        }
    }
    return min;
}

int findMaxElementUsingLinerSearchInArray(int length, int max){
    if(length == 0){
        printf("\n The Array is empty \n");
        return -1;
    }
    for(int index = 1; index< length; index++){
        if(numbers[index] > max){
            max = numbers[index];
        }
    }
    return max;
}

int finSecondMinElementUsingLinerSearchInArray(int len, int min){
    if(len == 0){
        printf("\n The Array is empty \n");
        return -1;
    }

    int second_min = min;
    for(int index = 1; index< len; index++){
        if(numbers[index] < min){
            second_min = min;
            min = numbers[index];
        }
    }
    return second_min;
}

int main(){

    int len = sizeof(numbers) / sizeof(numbers[0]);

    // int minimum_number = findMinElementUsingLinerSearchInArray(len, numbers[0]);
    // int maximum_number = findMaxElementUsingLinerSearchInArray(len, numbers[0]);
    int second_minimum = finSecondMinElementUsingLinerSearchInArray(len, numbers[0]);

    // if (minimum_number != -1) printf("The minimum element of the array is the %d\n", minimum_number);
    // if (maximum_number != -1) printf("The maximum element of the array is the %d\n", maximum_number);
    if (second_minimum != -1) printf("The second minimum element of the array is the %d\n", second_minimum);

    return 0;
}