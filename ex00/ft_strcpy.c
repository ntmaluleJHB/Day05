/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:47:26 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/13 14:08:36 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlid.h>

 char *ft_strcpy(char *dest, char *src)
{
	int index;
	index = 0;
	while(src)
	{
		dest[index] = src[index];
		index ++;
	}

	return (dest);

}


