#include "libft.h"
/* Locates First occurrence in string s1 of any character in string s2,
 * If a character from string s2 is found ,
 * a pointer to the character in string s1 is returned,
 * otherwise,  a NULL pointer is returned.
 */
char *ft_strpbrk(char *string1, char *string2)
{
    int i, j, pos, flag = 0;
    for (i = 0; string1[i] != '\0';i++);
    pos = i;
    for (i = 0;string2[i] != '\0';i++)
    {
        for (j = 0;string1[j] != '\0';j++)
        {
            if (string2[i] == string1[j])
            {
                if (j <= pos)
                {
                    pos = j;
                    flag = 1;
                }
            }
         }
    }
    if (flag == 1)
        return &string1[pos];
    return NULL;
}
