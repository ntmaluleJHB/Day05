/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:51:20 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/14 12:22:48 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



 char *ft_strupcase(char *str)
{
	int index;
	index = 0;
	int count;
	count = 0;
	while (str[index] != '\0')
	{
		index++;
		count++;
	}
	index= 0;
	while(str[index] != '\0')
	{
		if((str[index] >= 'a') && (str[index] <= 'z'))
		{	
			str[index] = str[index] - 32;
		}
		index++;
	}
	return(str);
}


