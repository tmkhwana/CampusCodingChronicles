/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:23:51 by tmkhwana          #+#    #+#             */
/*   Updated: 2019/07/23 14:42:00 by tmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>
#include <get_next_line.h>

int main()
{
	char *s;
	while(get_next_line(1, &s))
		printf("----->\"%s\"\n", s);
	
}
