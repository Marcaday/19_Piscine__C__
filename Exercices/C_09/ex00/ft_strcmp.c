/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 11:59:31 by naddino           #+#    #+#             */
/*   Updated: 2019/11/21 12:00:46 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
