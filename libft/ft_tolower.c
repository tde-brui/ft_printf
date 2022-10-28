/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:49 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/06 11:04:57 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int a)
{
	if (a < 91 && a > 64)
	{
		return (a + 32);
	}
	else
	{
		return (a);
	}
}
