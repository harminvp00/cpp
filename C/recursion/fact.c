
#include<stdio.h>


/**
    Tracing of recursion code of factorial
    n = 3, n != 0 is true return 3 * fact(2)
    3 * fact(2), call 

    n = 2, n != 0 is true return 2 * fact(1)
    3 * 2 * fact(1), call

    n = 1, n != 0 is true return 1 * fact(0)
    3 * 2 * 1 * fact(0), call 
    
    n = 0, n != 0 is false return 1
    3 * 2 * 1 * 1, no call return to main 

    final answer is 3 * 2 * 1 = 6 which factorial of 3.
*/

int fact(int n){
    if (n == 0) return 1; // this is base case 
    return n * fact(n-1); // this is recursive step
}

void main(){
    printf("%d\n", fact(8));
}
