/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:00:57 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/06 11:01:01 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if ((a < 91 && a > 64) || (a < 123 && a > 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
