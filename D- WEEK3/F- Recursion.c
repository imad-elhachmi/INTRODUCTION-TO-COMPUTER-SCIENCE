#include <stdio.h>
void recfun(int n);

int main(void){
    /*
​How Recursion Works:
    ​Base Case:
        ​It is the condition that stops the recursion. Without it, the function would run indefinitely.
    ​Recursive Call:
        ​It is the process of the function calling itself with new inputs, different from the original case.
    ​Backtracking:
        ​After reaching the base case, the function returns to previous calls one by one until the entire process is completed.
    */
    recfun(9);
    printf("\n");
    return (0);
}

void recfun(int n)
{
    // Base case :
    if(n != 0)
    {
        printf("%d",n);
        // ​Recursive Call:
        recfun(n-1);
    }
    // ​Backtracking:
    printf("%d",n);

    //result :  9876543210123456789

}
