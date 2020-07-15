/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:47:26 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/15 13:36:01 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
int main()
{
	char name[] = "ntiyiso";
	char surname[]  = "malulee";

	ft_strcpy(surname, name);

	printf("%s", surname);
	return(0);

}

