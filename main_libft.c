/* #include "libft.h"
#include <stdio.h>

void *zebi(void *test)
{
	test = "zebi";
	return (test);
}

 int	main(void)
{
	t_list *test = ft_lstnew("ouioui");
	t_list *test2 = ft_lstmap(test, zebi, free);

	printf("%s\n", (char *)test->content);
	printf("%s\n", (char *)test2->content);
	return (0);
}  */
/* int main()
{
	printf("%s\n", ft_itoa(-2147483648));
} */
/* #include <stdio.h>
#include <string.h>

int main()
{
	printf("ft_memchr : %s\n", (char *)ft_memchr("123456789", '7', 6));
	printf("memchr : %s\n", (char *)memchr("123456789", '7', 6));
} */
/* #include <stdio.h>
#include <string.h>

int main()
{
	printf("ft_memcmp : %d\n", ft_memcmp("g", "a", 1));
	printf("memcmp : %d\n", memcmp("g", "a", 1));
} */
/* #include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	char dest[50] = "";
	printf("ft_memcpy : %s\n", (char *)ft_memcpy(dest, "zy^@xw^@vu^@^@t", 30));
	printf("memcpy : %s\n", (char *)memcpy(dest, "zy^@xw^@vu^@^@t", 30));
} */

/* #include <stdio.h>
#include <string.h>

int main()
{
	char dest[] = "";
	char src[] = "123456";
	printf("ft_memmove : %s\n", (char *)ft_memmove(dest, src, 2));
	printf("memmove : %s\n", (char *)memmove(dest, src, 2));
	return (0);
} */
/* #include <unistd.h>
#include <string.h>
#include <stdio.h>

int main()
{
	 printf("ft_ :%p\n", ft_memset("12345", 32, 5));
	printf("%p\n", memset("12345", 32, 5)); 

	char tab[] = "bonjour";

	printf("memeset : %s\n", (char *)memset(tab, 'c', 0));
	printf("ft_memset : %s\n", (char *)ft_memset(tab, 'c', 0));
	return 0;
} */
// #include <stdio.h>

/* int main()
{
	int i = 0;
	char s[] = "";
	char c = ' ';
	char **str = count_nbletter(s, c, 0, 0);

	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	if (str[i] == NULL)
		printf("%s\n", str[i]);
	else
		printf("NOP\n");
//main pour ft_slpit;
} */
/* #include <stdio.h>
#include <string.h> */

/* int main()
{
	printf("ft_strchr : %s\n", ft_strchr("jsgdvsjdhvb", 's'));
	printf("strchr : %s\n", strchr("jsgdvsjdhvb", 's'));
} */
/* #include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h> */

/* int	main(void)
{
	printf("%s\n", ft_strdup(""));
	printf("%s", strdup(""));
} */
/* int main()
{
	printf("%s\n", ft_strjoin("qwerty","qazwsxedc"));
} */
/* #include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <unistd.h> 
#include <string.h> */

/* int main()
{
	size_t	s;
	
	char dst[50] = "pqrstuvwxyz";
	s = ft_strlcat(dst, "abcd", 5);
	printf("ft_strlcat : %ld\n", s);
	printf("%s\n", dst);

	char dst2[50] = "pqrstuvwxyz";
	s = strlcat(dst2, "abcd", 5);
	printf("strlcat : %ld\n", s);
	printf("%s\n", dst2);
} */
/* #include <string.h>
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <unistd.h> */

/* int main()
{
	char dest[50] = "";

	printf("ft_strlcpy : %ld\n", ft_strlcpy(dest, "aaa", 2));
	printf("%s\n", dest);
	printf("strlcpy : %ld\n", strlcpy(dest, "aaa", 2));
	printf("%s\n", dest);
} */
/* int main()
{
	printf("%d\n", ft_strlen(""));
} */
/* #include <string.h>
#include <stdio.h>

int main(void)
{
	unsigned int n;

	n  = 0;
	char s1[] = "t";
	char s2[] = "";
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("fonction de base%d", strncmp(s1, s2, n));
} */

/* #include <stdio.h>
#include <bsd/string.h>
#include <stddef.h>
 */

/* int main()
{
	printf("ft_str : %s\n", ft_strnstr("aaxx","xx", 3));
	printf("str : %s\n", strnstr("aaxx", "xx", 3));
} */
/* #include <stdio.h>
#include <string.h>  */

/* int main()
{
	printf("ft_strrchr : %s\n", ft_strrchr("teste", 't'));
	printf("strrchr : %s\n", strrchr("teste", 't' + 256));
} */
/* #include <stdio.h> */

/* int main()
{
	printf("%s\n", ft_strtrim("----bonjour---", "-"));
} */

/* #include <stdio.h> */

/* int main()
{
	printf("ft_substr :%s\n", ft_substr("01234", 10, 10));
} */
/* #include <stdio.h>
#include <ctype.h> */

/*int main()
{
	printf("ft_toupper : %d\n", ft_toupper('a'));
	printf("toupper : %d\n", toupper('a'));
}  */
/*#include <stdio.h>

int main(void)
{
	char str[] = "";
	printf("%d", ft_atoi(str));
}*/
/* #include <strings.h>
#include <stdio.h> */

/* int main()
{
	unsigned char str[] = "ouioui";
	ft_bzero(str, 5);
	printf("ft_bzero : %s\n", str);
	bzero(str, 5);
	printf("bzero : %s\n", str);
} */
/* #include <strings.h>
#include <stdio.h>
#include <stdlib.h> */

/* int main()
{
	printf("ft_calloc%s\n", (char *)ft_calloc(5, sizeof(int)));
} */