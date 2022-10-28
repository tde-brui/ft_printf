/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_unsigned_dec.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 15:42:10 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/26 19:13:51 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_uns_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int n)
{
	char				*ptr;
	unsigned int		j;

	j = (unsigned int)ft_uns_len(n);
	ptr = (char *)malloc(j + 1);
	if (ptr == 0)
		return (0);
	ptr[j] = '\0';
	while (n > 0)
	{
		ptr[j - 1] = (n % 10) + 48;
		j--;
		n = n / 10;
	}
	return (ptr);
}

int	ft_unsigned_dec(unsigned int num)
{
	char	*ptr;

	if (num == 0)
		return (ft_putchar('0'));
	ptr = ft_utoa(num);
	if (!ptr)
		return (0);
	ft_putstr(ptr);
	free(ptr);
	return (ft_uns_len(num));
}
