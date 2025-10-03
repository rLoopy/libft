#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *str = "Hello World";
	
	printf("=== Tests basiques ===\n");
	printf("Chercher 'o' dans \"Hello World\":\n");
	printf("ft_strchr: %s\n", ft_strchr(str, 'o'));
	printf("strchr:    %s\n\n", strchr(str, 'o'));
	
	printf("Chercher 'x' (absent):\n");
	printf("ft_strchr: %p\n", ft_strchr(str, 'x'));
	printf("strchr:    %p\n\n", strchr(str, 'x'));
	
	printf("=== Test crucial : '\\0' ===\n");
	printf("Chercher '\\0' (fin de string):\n");
	printf("ft_strchr: %p\n", ft_strchr(str, '\0'));
	printf("strchr:    %p\n", strchr(str, '\0'));
	
	if (ft_strchr(str, '\0') == strchr(str, '\0'))
		printf("✅ Test '\\0' OK\n\n");
	else
		printf("❌ Test '\\0' FAIL\n\n");
	
	printf("=== Test cast : 'o' + 256 ===\n");
	printf("Chercher 'o' avec cast (111 + 256 = 367):\n");
	printf("ft_strchr: %s\n", ft_strchr(str, 367));
	printf("strchr:    %s\n", strchr(str, 367));
	
	if (ft_strchr(str, 367) == strchr(str, 367))
		printf("✅ Test cast OK\n");
	else
		printf("❌ Test cast FAIL\n");
	
	return 0;
}
