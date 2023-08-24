#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

struct KeyValue {
    char letter;
    int points;
};

int compute_score(string word, struct KeyValue dictionary[], int size);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Create dictionary containing all the words with its respect value
    struct KeyValue dictionary[26];
    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // Points assigned to each letter of the alphabet
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    for (int i = 0; i < 26; i++)
    {
        dictionary[i].letter = letters[i];
        dictionary[i].points = POINTS[i];
    }

    // Score both words
    int score1 = compute_score(word1, dictionary, sizeof(dictionary)/sizeof(dictionary[0]));
    int score2 = compute_score(word2, dictionary, sizeof(dictionary)/sizeof(dictionary[0]));

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else if (score1 == score2){
        printf("Tie!\n");
    }
}

int compute_score(string word, struct KeyValue dictionary[], int size)
{
    // TODO: Compute and return score for string
    //In compute_score(), your program should compute, using the POINTS array, and return the score for the string argument.
    //Characters that are not letters should be given zero points.
    //uppercase and lowercase letters should be given the same point values.cl
    int score = 0;
    for (int i = 0; word[i]; i++)
    {
        word[i] = toupper(word[i]);
        for (int j = 0; j < size; j++)
        {
            if (word[i] == dictionary[j].letter)
            {
                score += dictionary[j].points;
                break;
            }
            else if (word[i] += dictionary[j].letter)
            {
                score += 0;
                break;
            }
        }
    }

    return score;
}
