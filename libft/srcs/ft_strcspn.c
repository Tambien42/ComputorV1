/**
 * search a string for a set of bytes
 * @param  string String to search
 * @param  chars  Characters to look for in string
 * @return        number of bytes in the initial segment of string which are not in the string chars
 */
int ft_strcspn(char *string, char *chars)
{
    register char c, *p, *s;

    for (s = string, c = *s; c != 0; s++, c = *s) {
        for (p = chars; *p != 0; p++) {
            if (c == *p) {
                return s-string;
            }
        }
    }
    return s-string;
}
