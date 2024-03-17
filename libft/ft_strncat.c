/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:12:39 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/06/29 00:10:26 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	t;

	i = 0;
	t = ft_strlen(s1);
	while (s2[i] != '\0' && n-- > 0)
	{
		s1[t++] = s2[i++];
	}
	s1[t] = '\0';
	return (s1);
}
