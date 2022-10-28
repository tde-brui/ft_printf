/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:53 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/06 11:05:07 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int a)
{
	if (a < 123 && a > 96)
	{
		return (a - 32);
	}
	return (a);
}