/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blsiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:14:04 by blsiband          #+#    #+#             */
/*   Updated: 2020/07/13 16:45:58 by blsiband         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{  
	int i;
	int count;

	i = 0;
	count = 1;

	while(*str[i] != '0\')
	{
		count++;
		i++;
	}

	return count;
}

int main()
{ int answer;

	answer = 0;
	char *string;

}
