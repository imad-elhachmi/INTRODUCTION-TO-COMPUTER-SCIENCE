#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct {
       string name ;
       string number ;
       int age ;
}pb;
int main(void)
{
pb people[2];
people[0].name = "imad";
people[0].number = "012345";
people[0].age = 19;

people[1].name = "Divid";
people[1].number = "54320";
people[1].age = 35;

int i = 0 ;
while ( i < 2 ){
    if(strcmp(people[i].name , "imad")==0){
        printf("the number of %s is %s\n",people[i].name,people[i].number);
        return (0);
    }
    ++i;
}
return (1);
}
