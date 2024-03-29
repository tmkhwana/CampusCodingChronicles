/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pntsunts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:59:53 by pntsunts          #+#    #+#             */
/*   Updated: 2019/06/05 13:51:53 by pntsunts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c -= 32);
	}
	else
	{
		return (c);
	}
}
