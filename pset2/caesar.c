#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // check for correct number of command line argument
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    else 
    {
        // convert string to int
        int key = atoi(argv[1]);
        printf("plaintext: ");
        string plainText = get_string();
        
        if (argc == 2 && plainText != NULL)
        {
            printf("ciphertext: ");
            for(int i = 0, n = strlen(plainText) ; i < n ; i++)
            {
                // declare new int for the ciphertext
                int cipherText = 0;
                // check if upper 
                if (isupper(plainText[i]))
                {
                    // encryption
                    cipherText = (((int) plainText[i] - 65 + key) % 26) + 65;
                    printf("%c", (char) cipherText); 
                }
                else if(islower(plainText[i]))
                {
                    cipherText = (((int) plainText[i] - 97 + key) % 26) + 97;
                    printf("%c", (char) cipherText); 
                }
                // if plaintext isn't upper or lower
                else
                {
                    printf("%c", plainText[i]);
                }
              
            }
        }
        printf("\n");
        return 0;
    }
}