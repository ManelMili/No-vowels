#include <cs50.h>
#include <stdio.h>
#include <string.h>

string vowels(string s);

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("no-vowels words \n");
        return 1;
    }
    else if (argc > 2)
    {
        printf("error \n");
        return 1;
    }
    else
    {
    string new = vowels(argv[1]);
    printf("%s\n", new);
    }
}

string vowels(string word)
{
    //string word = get_string("Please enter your word: ");
    for (int i = 0; i < strlen(word); i++)
    {
        switch (word[i])
        {
            case 'a':
                word[i] = '6';
                break;

            case 'e':
                word[i] = '3';
                break;

            case 'i':
                word[i] = '1';
                break;

            case 'o':
                word[i] = '0';
                break;

            default:
                break;
        }
    }
    return word;

}
