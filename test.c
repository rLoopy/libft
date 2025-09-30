#include "libft.h"
#include <stdio.h>

int main()
{
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));    // Doit afficher 1
    printf("ft_isdigit('A') = %d\n", ft_isdigit('A'));    // Doit afficher 0
    printf("ft_isdigit('@') = %d\n", ft_isdigit('@'));    // Doit afficher 0
    printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));    // Doit afficher 1
    printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));    // Doit afficher 1
    return 0;
}
