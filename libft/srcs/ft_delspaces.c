#include "libft.h"
/**
 * Remove spaces in string
 * @param sources string with spaces to remove
 */
void ft_delspaces(char *sources)
{
    char *i = sources;
    char *j = sources;

    while (*j != 0)
    {
        *i = *j++;
        if (*i != ' ')
            i++;
    }
    *i = 0;
}
