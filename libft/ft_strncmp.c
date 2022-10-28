/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:07:30 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/21 15:14:51 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	unsigned long	i;
	unsigned char	*ptr;
	unsigned char	*ptr1;

	i = 0;
	ptr = (unsigned char *)str1;
	ptr1 = (unsigned char *)str2;
	while (i < size)
	{
		if (ptr[i] != ptr1[i] || ptr[i] == '\0' || ptr1[i] == '\0')
		{
			return (ptr[i] - ptr1[i]);
		}
		i++;
	}
	return (0);
}
