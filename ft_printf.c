/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:37:47 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/17 15:53:39 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *arg, ...)
{
    int i;
	va_list lst;

    i = 0;
    va_start(lst, arg);
    while (arg[i])
    {
		if  (arg[i] == c)
			print_char(va_arg(lst, char));
		if  (arg[i] == s)
			print_str(va_arg(lst, char*))
		if  (arg[i] == p)
		 	print_pointer(va_arg(&lst, void*))
		if  (arg[i] == d || arg[i] == i)
		
		if  (arg[i] == u)
		
		if  (arg[i] == x)
		
		if  (arg[i] == X)
		
		if  (arg[i] == %)	
		
    }
}
