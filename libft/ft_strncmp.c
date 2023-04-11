/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <eguler@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:56:27 by eguler            #+#    #+#             */
/*   Updated: 2022/09/27 11:41:53 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, int len)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && len > 0)
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
		len--;
	}
	if (len == 0)
		return (0);
	return (1);
}
/*
int main()
{
	char	s1[] = "eyupsalih";
	char	s2[] = "eyupsaliH";

	printf("%d\n", ft_strncmp(s1, s2, 9));
	printf("%d", strncmp(s1, s2, 9));
}
*/
