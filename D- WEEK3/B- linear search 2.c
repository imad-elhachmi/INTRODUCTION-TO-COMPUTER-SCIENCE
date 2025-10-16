#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void){
string names[10] = {
    "Alice",
    "Bob",
    "Charlie",
    "Diana",
    "Ethan",
    "Fiona",
    "George",
    "Hannah",
    "Isaac",
    "Julia"
};
int i = 0 ;
while (i < 10){
    if(strcmp(names[i],"Julia")==0){
        printf("I Found the name - %s - in this array after %d steps of search\n",names[i],i+1);
        return (0);
    }
    i++;
}
return (1);
}
