/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sluthang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:13:56 by sluthang          #+#    #+#             */
/*   Updated: 2020/06/26 15:01:11 by sluthang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include<unistd.h>

char  ft_putchar(char c);
char	*ft_strdup(char *src)
{
	char			*temp;
	unsigned long	len;
	unsigned long	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	temp = (char*)malloc(len + 1);
	i = len;
	len = 0;
	while (len < i)
	{
		temp[len] = src[len];
		len++;
	}
	temp[len] = '\0';
	//free(temp);
	return (temp);
}

int main ()
{
  char *str= "12345";
  char *copy;
  copy = ft_strdup(str);
  write(1,copy,5);
  write(1,"\n",1);
  return 0;
}


