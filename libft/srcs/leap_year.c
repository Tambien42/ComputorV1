#include "libft.h"

/**
 * Find leap year
 * @param  year year to check
 * @return      true 1 or false 0
 */
int leap_year(int year)
{
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            if ( year%400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
    return 0;
}
