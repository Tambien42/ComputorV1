#include "libft.h"

/**
 * Find leap year
 * @param  year year to check
 * @return      true or false
 */
bool leap_year(int year)
{
    int year;

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
    return false;
}
