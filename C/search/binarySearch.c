
#include<stdio.h>
#include<math.h>

int numbers[100] = {
    3, 8, 14, 21, 29, 38, 48, 59, 71, 84,
    98, 113, 129, 146, 164, 183, 203, 224, 246, 269,
    293, 318, 344, 371, 399, 428, 458, 489, 521, 554,
    588, 623, 659, 696, 734, 773, 813, 854, 896, 939,
    983, 1028, 1074, 1121, 1169, 1218, 1268, 1319, 1371, 1424,
    1478, 1533, 1589, 1646, 1704, 1763, 1823, 1884, 1946, 2009,
    2073, 2138, 2204, 2271, 2339, 2408, 2478, 2549, 2621, 2694,
    2768, 2843, 2919, 2996, 3074, 3153, 3233, 3314, 3396, 3479,
    3563, 3648, 3734, 3821, 3909, 3998, 4088, 4179, 4271, 4364,
    4458, 4553, 4649, 4746, 4844, 4943, 5043, 5144, 5246, 5349
};

void BinarySearch(int, int, int);
void main(){
    int lower_bound = 0;
    int higher_bound = sizeof(numbers) / sizeof(numbers[lower_bound]) - 1;   
    
    BinarySearch(59, lower_bound, higher_bound);
}

void BinarySearch(int target, int low, int high){

    // caclulating the middle element 
    int mid = floor((high + low) / 2);
    
    // printf("\n----------------\n----------------\n");
    // printf("Lower: %d\nHigher: %d", low, high);
    // printf("\nMid is %d\nTarget is %d\n", mid, target);
    
    if (low > high) {
        printf("\nNumber does not exist in the array.\n");
        return;
    }

    if(target == numbers[mid]) {
        printf("\nElement is found at the index %d, the data is %d\n", mid, numbers[mid]);
        return;
    }

    if(target < numbers[mid]) {
        high = mid - 1;
        BinarySearch(target, low, high);
    }

    if(target > numbers[mid]){
        low = mid + 1;
        BinarySearch(target, low, high);
    }
}