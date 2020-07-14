/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:28:53 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/14 12:44:37 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char *ft_strlowcase(char *str)
{
	int index;
	index = 0;
	while(str[index] != '\0')
	{
		if((str[index] >= 'A')&&(str[index] <= 'Z'))
		{	
			str[index] = str[index] + 32;
		}
		index++;
	}
	return(str);
}


