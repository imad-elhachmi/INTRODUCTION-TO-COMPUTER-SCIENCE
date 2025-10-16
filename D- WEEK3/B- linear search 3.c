#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    string user = get_string("Write the name of the person who is with you in the class, and I will give you their phone numbe:");
    string names[10] = {
    "Layla",
    "Omar",
    "Sara",
    "Youssef",
    "Maya",
    "Tariq",
    "Nour",
    "Zain",
    "Huda",
};

string phone_numbers[10] = {
    "000-111-2222",
    "123-456-7890",
    "555-000-1234",
    "999-888-7777",
    "404-404-4040",
    "321-654-0987",
    "111-222-3333",
    "888-999-0000",
    "777-666-5555",
};
int j = 0 ;
while (j < 9){
    if (strcmp(names[j],user)==0){
     printf("this is number phone of %s : %s\n",names[j],phone_numbers[j]);
     return (0);
    }
    j+=1;
}
printf("i don't find this person in the list of your class\n");
return (1);
}
