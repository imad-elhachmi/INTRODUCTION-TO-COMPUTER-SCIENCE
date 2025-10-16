#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{

 string text = get_string("Text: ");
 int letters = count_letters(text);
 int words = count_words(text);
 int sentences = count_sentences(text);

float L = ((float) letters / words) * 100;
float S = ((float) sentences / words) * 100;
float index = 0.0588 * L - 0.296 * S - 15.8;

 if (index < 1)
 {
    printf("Before Grade 1\n");
 }
 else if (index >= 16)
 {
    printf("Grade 16+\n");
 }
 else
  {
    printf("Grade %d\n", (int) round(index));
 }
}

int count_letters(string text)
{
 int i = 0;
 int letters = 0;
 while (text[i] != '\0')
 {
   if (isalpha(text[i]))
   {
    letters += 1;
   }

    i++;
 }
 return (letters);
}

int count_words(string text)
 {
    int i = 0;
    int words = 0;
    int in_word = 0;

    while (text[i] != '\0')
     {
        if (isspace(text[i]))
         {
            in_word = 0;
}
 else if (!in_word)
  {
            in_word = 1;
            words++;
}
        i++;
}

    return words;
}

int count_sentences(string text)
{
    int i = 0;
    int sentences = 0;
 while (text[i] != '\0')
 {
     if (text[i] == '.' || text[i] == '!' || text[i] == '?')
     {
        sentences += 1;
     }
     i++;
  }
  return (sentences);
}
