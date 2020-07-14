/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:21:15 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/14 11:12:45 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strcmp(char *s1, char *s2)
{
	int index;
	index = 0;
	int results;
	results = 0;
	while (s1[index] != '\0')
	{
		if (s1[index] == s2[index])
		{
			results ++;
		}
		index++;
	}
	if (index > results)
			return(1);
	else if ((s1[index] == '\0')&&(s2[index] != '\0'))
			return(-1);
	else if(index == results)
			return(0);
	else 
		return(0);
}


