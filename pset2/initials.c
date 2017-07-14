#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string();
    // checks if string is null
    if (name != NULL)
    {
        // prints first initial
        printf("%c", toupper(name[0]));
        for(int i = 0, n = strlen(name) ; i < n ; i++)
        {
            // searches for and prints other initials
            if (name[i] == ' ')
            {
                printf("%c", toupper(name[i + 1]));
            }
        }
        printf("\n");
    }
}