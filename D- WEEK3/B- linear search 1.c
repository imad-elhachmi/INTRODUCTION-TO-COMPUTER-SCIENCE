#include <stdio.h>
#include <cs50.h>
int main(void){
int array[] = {4,3333,99,34,35,87,82,23,0,8,9,5};
//linear search : we want number 0
int i = 0;
while(i < 12){
    if(array[i] == 0){
        printf("i found number %d in this array after %d steps of search\n",array[i],i+1);
        return (0);
    }
    i++;
}
printf("the number not found in this array\n");
return (1);
}
