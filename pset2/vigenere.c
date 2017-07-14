#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // if program has correct number of command line arguments
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    else
    {
        // checks if the argv[1] contains any non-alphabetic characters
        for(int i = 0, j = strlen(argv[1]) ; i < j ; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("must be alphabetic chars\n");
                return 1;
            }
        }
    }
        
    string key = argv[1];
    printf("plaintext: ");
    string plainText = get_string();
    
    if (argc == 2 && plainText != NULL)
    {
        printf("ciphertext: ");
        // loop to run through pllaintext characters one by one
        for(int i = 0, j = 0, n = strlen(plainText) ; i < n ; i++)
        {
            
            int cipherText = 0;
            int keyLength = strlen(key);
            int keyValue = tolower(key[j % keyLength]) - 'a';
            
            if (isupper(plainText[i]))
            {
                // encypts uppercase letters
                cipherText = 'A' + (plainText[i] - 'A' + keyValue) % 26;
                printf("%c", (char) cipherText); 
                // increases count to loop through letters of the key
                j++;
            }
            
            else if (islower(plainText[i]))
            {
                // encypts lower case letters
                cipherText = 'a' + (plainText[i] - 'a' + keyValue) % 26;
                printf("%c", (char) cipherText); 
                j++;
            }
            
            else
            {
                // directly prints non-alphabetic characters
                printf("%c", plainText[i]);
            }
        }
    }
    printf("\n");
    return 0;
}