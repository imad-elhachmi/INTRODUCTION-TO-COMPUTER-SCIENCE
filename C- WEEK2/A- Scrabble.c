#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int compute_score(string word);

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
string user1 = get_string("Player 1:");
string user2 = get_string("Player 2:");

int score1 = compute_score(user1);
int score2 = compute_score(user2);

if (score1 > score2)
{
    printf("Player 1 wins!");
}
else if (score1 < score2)
{
    printf("Player 2 wins!");
}
else
{
    printf("Tie!");
}
}

int compute_score(string word)
{
int score = 0;
int i = 0;
while (i < strlen(word))
{
  if (isupper(word[i]))
  {
   score += POINTS[word[i] - 'A'];
  }
  else if (islower(word[i]))
  {
    score += POINTS[word[i] - 'a'];
  }
  i++;
}
return (score);
}
