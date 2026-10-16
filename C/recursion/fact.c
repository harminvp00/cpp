
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

/* loop are the better approach for cases like the recursions or linear approach 
    in term of space complexity, the function call require new memory stack frame
    on each call where loop need only one variable who can handle this

    time complexity : O(n) for both loop and recursion 

    space complexity: O(n) for n function call in recursion, and the O(1),
	O(1) space for the loop approach where we need only 1 variable to store fact,
	loop does not have unneccessary function call which need extra space beyond the algorithm.
*/

int fact_using_recursion(int n){
    if (n == 0) return 1; // this is base case 
    return n * fact_using_recursion(n-1); // this is recursive step
}

int fact_using_loop(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++){
        fact *= i;
    }
    return fact;
}

void main(){
    printf("%d\n", fact_using_recursion(5));
    printf("%d\n", fact_using_loop(5));
}
