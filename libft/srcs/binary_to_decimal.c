#include "libft.h"

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*ft_power(2,i);
        ++i;
    }
    return decimalNumber;
}
