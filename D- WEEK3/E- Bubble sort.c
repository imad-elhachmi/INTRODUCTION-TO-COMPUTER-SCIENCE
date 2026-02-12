#include <stdio.h>
int main(void){

    //Bubble sort O(n^2) , ​Omega(n)
int arr[8] = {5 , 2, 7, 4, 1, 6, 3, 0};
int i , j , swapped , tmp;

i = 0;
while (i < 7)
{
    swapped = 0;

    j = 0;
    while (j < 7 - i)
     // 7 - i Because after each cycle The largest element moves to the end.Therefore, we don't need to reread the sorted section.
    {
        if (arr[j] > arr[j + 1])
        {
            tmp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp;
            swapped = 1;
        }
        j++;
    }

    // If no swap happened in this pass, array is already sorted
    // so we exit early to improve performance O(n)
    if (swapped == 0)
        break;

    i++;
}


i = 0;
while(i <= 7)
{
    printf("%d",arr[i]);
    i++;
}

printf("\n");

    return (0);
}

