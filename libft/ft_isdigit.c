/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tde-brui <tde-brui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:01:10 by tde-brui      #+#    #+#                 */
/*   Updated: 2022/10/06 11:02:54 by tde-brui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int a)
{
	int	i;

	i = 0;
	if (a > 47 && a < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}