

// base case : the terminating point of recursion without base case recurion will continue for infinite time untill it exhausted stack memery, triggering stack overflow, and make segmentation fault

#include<stdio.h>

void recursion(int itrations){
    if (itrations != 0){
        recursion(itrations - 1);
        return;
    }
    printf("Program is end\n");
}

void main(){
    recursion(1);
}

