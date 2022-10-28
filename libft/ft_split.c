/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 11:46:05 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/22 14:03:52 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_stringsnum(char const *str1, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(str1);
	k = 0;
	if (ft_strncmp(str1, "", 1) == 0)
		return (0);
	while (str1[i])
	{
		while ((str1[i] == c) && str1[i] != '\0')
			i++;
		while (str1[i] != c && str1[i] != '\0')
			i++;
		k++;
	}
	if (str1[j - 1] == c && str1[j] == '\0')
		k -= 1;
	return (k);
}

static void	ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static size_t	ft_len(char const *str1, char c, int i)
{
	int	k;

	k = 0;
	while (str1[i] != c && str1[i] != '\0')
	{
		i++;
		k++;
	}
	return (k);
}

char	**ft_split(char const *str1, char c)
{
	char				**ptr;
	unsigned int		i;
	int					j;

	i = 0;
	j = 0;
	ptr = (char **)malloc((ft_stringsnum(str1, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (j < ft_stringsnum(str1, c))
	{
		while (str1[i] == c && str1[i] != '\0')
			i++;
		ptr[j] = ft_substr(str1, i, ft_len(str1, c, i));
		if (!ptr[j])
		{
			ft_free(ptr);
			return (NULL);
		}
		while (str1[i] != c && str1[i] != '\0')
			i++;
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}
