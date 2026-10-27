
#include<stdio.h>

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

void linearSearch(int target, int low, int high){
    for(low; low <= high; low++){
        if(target == numbers[low]){
            printf("\nTarget found at the index %d, and data is %d\n", low, numbers[low]);
            return;
        }
    }
    printf("\nTarger is not into an array, please choose diffrent target.\n");
}

void main(){
    int low = 0,
    high = sizeof(numbers) / sizeof(numbers[0]) - 1;
    
    linearSearch(14, low, high);
}