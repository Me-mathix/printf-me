/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:37:47 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/21 18:29:04 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int is_from_set(char c)
{
	char *set;
	int i;

	set = "cspdiuxX%";
	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

int ft_printf(const char *arg, ...)
{
	int i;
	va_list lst;
	int retc;
	
	va_start(lst, arg);
	i = 0;
	retc = 0;
	while (arg[i])
		if (arg[i] == '%')
		{
			if (is_from_set(arg[i + 1]))
				retc += ft_tree(arg, i++, lst);
			else
				retc += print_char(arg[i]);
			i++;
		}
		else
			retc += print_char(arg[i++]);
	return (retc);
}

// int main(void)
// {
	
// 	// void *ptr = (void *)18446744073709551615;
// 	ft_printf("%d", ft_printf(" %p ", (void *)-1 ));
// 	write(1, "\n", 1);
// 	printf("%d", printf(" %p ", (void *)-1 ));
// }