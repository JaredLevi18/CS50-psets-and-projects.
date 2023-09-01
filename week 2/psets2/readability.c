#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <math.h>

int num_letters(string text);
int num_words(string text);
int num_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    // fix the way the index is calculated
    float letters = num_letters(text);
    float words = num_words(text);
    float sentences = num_sentences(text);
    float L = round(letters / words * 100);
    float S = round(sentences / words * 100);
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    // Print the grade of the text.
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

// counting the number of letters, word and sentences in the string
int num_letters(string text)
{
    int letter = 0;
    for (int i = 0; text[i]; i++)
    {
        if (isalpha(text[i]))
        {
            letter += 1;
        }
        continue;
    }

    return letter;
}

int num_words(string text)
{
    int word = 1;
    for (int i = 0; text[i]; i++)
    {
        if (isblank(text[i]))
        {
            word += 1;
        }
    }
    return word;
}

int num_sentences(string text)
{
    int sentence = 0;
    for (int i = 0; text[i]; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentence += 1;
        }
    }
    return sentence;
}
