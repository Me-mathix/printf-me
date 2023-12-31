/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:13:42 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/21 18:18:37 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	lennum(unsigned int n)
{
	int	count;

	count = 1;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= 16)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	print_uhex(unsigned int nbr)
{
	char 	*base;
	int 	ret;

	base = "0123456789ABCDEF";
	ret = lennum(nbr);
	if (nbr < 0)
	{
		nbr *= -1;
	}
	if (nbr >= 16)
	{
		print_uhex(nbr / 16);
	}
	ft_putchar(base[nbr % 16]);
	return(ret);
}