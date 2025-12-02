#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string KEY = argv[1];

    // Single command line arg with KEY
    // without command line arg - error msg,
    // more than one command line arg - error msg

    if (argc != 2)
    {
        printf("usage: ./substitution KEY\n");
        return 1;
    }


    // Validate the key

    //check the length - error msg - return 1
    if (strlen(KEY) != 26)
    {
        printf("KEY must conatin 26 characters\n");
        return 1;
    }

    //check for non alphabetic characters - error msg - return 1
    for (int i = 0; i < strlen(KEY); i++)
    {
        if (!isalpha(KEY[i]))
        {
            printf("KEY is not alpha\n");
            return 1;
        }
    }

    // check for repeated characters (non case sensitive) - error msg - return 1



    // plaintext - get_string - plaintext without \n

    string plaintext = get_string("plaintext: ");

    // CipherText
        /*
            without \n
            each alpha in plaintext substitute to corresponding ciphertext
            non alpha should be outputted unchanged
            preserve case
                capitalized remain capitalize
                lowercase remain lowercase
            return 0

            NQXPOMAFTRHLZGECYJIUWSKDVB

            using for loop check plaintext character
            if plaintext[i] == 'A' then plaintext[i] = KEY[i]
            print plaintext in ciphettext
            65 --- 0
            90 --  25
        */

        for (int i = 0; i < strlen(plaintext); i++)
        {
            if (isupper(plaintext[i]))
            {
                plaintext[i] = KEY[plaintext[i] - 'A'];
            }
            if (islower(plaintext[i]))
            {
                plaintext[i] = tolower(KEY[plaintext[i] - 'a']);
            }
        }

        printf("ciphertext: %s\n", plaintext);




}
