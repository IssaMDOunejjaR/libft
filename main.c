/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:19:41 by iounejja          #+#    #+#             */
/*   Updated: 2019/10/28 18:45:49 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	//char s1[] = "Hello";
	//char s2[] = "World!";
	//char dest[] = "Hello";
	//char src[] = "World!";
	//char *ptr;
	//ptr = (char*)ft_calloc(0, 0);
	//int nb = 5;
	//int fd = open("txt", O_WRONLY);
	
	//-- ft_stlen
	//printf("ft_strlen = %d\n", ft_strlen("Hello World!"));
	
	//-- ft_atoi
	//printf("ft_atoi = %d\natoi = %d\n", ft_atoi("1544516489654456167561"), atoi("1544516489654456167561"));
	
	//-- ft_isdigit
	//printf("ft_isdigit = %d\n", ft_isdigit(97));
	
	//-- ft_isalpha
	//printf("ft_isalpha = %d\n", ft_isalpha(97));
	
	//-- ft_tolower
	//printf("ft_tolower = %d\n", ft_tolower(112));
	
	//-- ft_toupper
	//printf("ft_toupper = %d\n", ft_toupper(112));
	
	//-- ft_isprint
	//printf("ft_isprint = %d\n", ft_isprint(127));
	
	//-- ft_isalnum
	//printf("ft_isalnum = %d\n", ft_isalnum('0'));
	
	//-- ft_memset
	//ft_memset(str + 3, '+', 3);
	//printf("ft_memset = %s\n", str);
	
	//-- ft_strcmp
	//printf("ft_strncmp = %d\n", ft_strncmp("hello", "helLo", 4));
	
	//-- ft_strchar
	//printf("ft_strchar = %s\n", ft_strchr("Hello World!", 'o'));
	
	//-- ft_strrchr
	//printf("ft_strrchr = %s\n", ft_strrchr("Hello World!", 'o'));
	
	//-- ft_isascii
	//printf("ft_isascii = %d\n", ft_isascii('a'));
	
	//-- ft_bzero
	//ft_bzero(str1 + 3, 2);
	//printf("ft_bzero = %s\n", str1);
	
	//-- ft_memcpy
	//ft_memcpy(dest, src, 4);
	//printf("ft_memcpy = %s\n", dest);
	
	//-- ft_memccpy
	//ft_memccpy(dest, src, 'e', sizeof(src));
	//printf("ft_memccpy = %s\n", dest);
	
	//-- ft_memmove
	//ft_memmove(dest, src, sizeof(src));
	//printf("ft_memmove = %s\n", dest);
	
	//-- ft_strnstr
	//printf("ft_strnstr = %s\n", strnstr(str, str1, 7));
	
	//-- ft_memchr
	//printf("ft_memchr = %s\n", ft_memchr("Hello World!", 'l', 4));
	
	//-- ft_memcmp
	//printf("ft_memcmp = %d\n", ft_memcmp(str, str1, sizeof(str1)));
	
	//-- ft_strdup
	//printf("ft_strdup = %s\n", ft_strdup("Hello World!"));
	
	//-- ft_strlcpy
	//printf("ft_strlcpy = %lu\n", ft_strlcpy(dest, src, sizeof(dest)));
	
	//-- ft_calloc
	//printf("ft_calloc = %s\n", ptr);
	
	//-- ft_strlcat
	//printf("ft_strlcat = %zu\n", ft_strlcat(s1, s2, 10));
	
	//-- ft_substr
	//printf("ft_substr = %s\n", ft_substr("Hello World!", 3, 6));
	
	//-- ft_strjoin
	//printf("ft_strjoin = %s\n", ft_strjoin(s1, s2));
	
	//-- ft_strtrim
	//printf("ft_strtrim = %s", ft_strtrim("\n \t  fghdfghdfg \n\t \n", " \n\t"));
	
	//-- ft_putchar_fd
	//ft_putchar_fd('c', fd);
	
	//-- ft_putstr_fd
	//ft_putstr_fd(s1, fd);
	
	//-- ft_putendl_fd
	//ft_putendl_fd(s1, fd);
	
	//-- ft_putnbr_fd
	//ft_putnbr_fd(nb, fd);
	
	//-- ft_itoa
	//printf("ft_itoa = %s\n", ft_itoa(-2147483648));
	
	//-- ft_strmapi
	//printf("ft_strmapi = %s\n", ft_strmapi(5, ft_strdup("hello")));
	
	//-- ft_split
	/*char **tab;
	tab = ft_split("HiaHelloahhhhjkauhunjkaaaaaaaissambnhakhuamn", 'a');
	while (*tab != NULL)
	{
		printf("%s\n", *tab);
		tab++;
	}*/
	
	int i;
	t_list *lst;
	t_list *new;
	t_list *ls1;
	t_list *ls2;
	t_list *ls3;

	i = 1;
	new = ft_lstnew("world");
	lst = ft_lstnew("hello");
	ls1 = ft_lstnew("issam");
	ls2 = ft_lstnew("ounejjar");
	ls3 = ft_lstnew("Lucifer");
	ft_lstadd_front(&lst, ls1);
	ft_lstadd_front(&ls1, ls2);
	ft_lstadd_back(&lst, new);
	ft_lstadd_back(&ls2, ls3);
	printf("list size = %d\n", ft_lstsize(ls2));
	printf("the last ele is = %s\n", (char*)ft_lstlast(ls2)->content);
	while (ls2)
	{
		printf("ele list %d = %s\n", i, ls2->content);
		ls2 = ls2->next;
		i++;
	}
}