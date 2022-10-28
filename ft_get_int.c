/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_int.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 14:33:53 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/28 13:18:48 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_min_int(char *str)
{
	char	*lol;
	int		i;

	i = 0;
	lol = "-2147483648";
	while (lol[i])
	{
		str[i] = lol[i];
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		j;

	j = ft_len(n);
	ptr = (char *)malloc(ft_len(n) + 1);
	if (!ptr)
		return (NULL);
	ptr[j] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		ptr[j - 1] = (n % 10) + 48;
		j--;
		n = n / 10;
	}
	if (n > -1 && n < 10)
		ptr[j - 1] = n + 48;
	if (n == -2147483648)
		ptr = ft_min_int(ptr);
	return (ptr);
}

int	ft_get_int(int n)
{
	char	*ptr;

	ptr = ft_itoa(n);
	ft_putstr(ptr);
	free(ptr);
	return (ft_len(n));
}
