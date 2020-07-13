/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:07:44 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/13 14:13:44 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char *ft_strncpy(char *dest, char *src, unsigned int n)
{

	int index;
	index = 0;

	while(index < n)
	{
		dest [index] = src [index];
		index ++;
	}
}
