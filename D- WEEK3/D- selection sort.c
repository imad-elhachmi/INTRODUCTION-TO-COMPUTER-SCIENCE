#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    // selection sort : o(n^2) array of 10 index : steps search : 100 step
    //practice
    int numbers[100] = {
    42, 17, 93, 8, 65, 31, 77, 56, 29, 84,
    3, 99, 12, 47, 68, 25, 90, 38, 74, 6,
    81, 14, 59, 33, 70, 19, 88, 5, 61, 36,
    21, 97, 10, 45, 66, 27, 92, 39, 76, 2,
    83, 16, 53, 30, 72, 23, 95, 7, 63, 34,
    1, 100, 13, 49, 67, 26, 89, 40, 75, 9,
    82, 15, 58, 32, 71, 20, 87, 4, 60, 35,
    22, 96, 11, 46, 64, 28, 91, 37, 78, 0,
    85, 18, 54, 24, 73, 41, 94, 44, 62, 43,
    86, 48, 55, 50, 69, 57, 98, 51, 80, 79
};

int i = 0 ;
while ( i < 100){
    int j = i + 1 ;
    while ( j < 100){
        if(numbers[i] > numbers[j]){
            int tmp = numbers[i] ;
            numbers[i] = numbers[j] ;
            numbers[j] = tmp ;
        }
        j++;
    }
i+=1;
}

      for (int k = 0; k < 100; k++) {
            printf("%d ", numbers[k]);
}
}
