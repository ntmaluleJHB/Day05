/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:16:45 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/13 16:05:21 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
	int index;
	index = 0;
	int check;
	int search1;
	search1 = 0;
	int search2;
	search2 = 0;
	check = 0;
	char answ;
	char *ret;
   ret =	&answ;

	while(str[index] != '\0')
	{
		if( str[index] == to_find[search1])
		{
			search2 = index;
			while(to_find[search1] != '\0')
			{
				if (to_find[search1] == str[search2])
				{
					check++;
				}
				search1 ++;
				search2 ++;
			}

			if(check == search1)
			{
				ret = &str[index];
				break;
			}
			else
			{
				check= 0;
				search1 = 0;
				search2 = 0;
			}

		}
		if((check == search1)&&(search2 > 0))
		{
			break;
		}
		else
		{
			search1 = 0;
			search2 = 0;
		}

		index++;
		
	}

	
	return(ret);

}


