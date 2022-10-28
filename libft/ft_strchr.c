/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:28 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/21 15:16:46 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)character)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)character == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
