/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:28:59 by chrrodri          #+#    #+#             */
/*   Updated: 2024/10/07 18:17:51 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *temp;

	if (argc != 2)
		return (write (1, "\n", 1));
	temp = argv[1];
	if (*temp == '\0' ||!temp)
		return (write (1, "\n", 1));
	while (*temp != '\0')
	{
		if ((*temp > '@' && *temp < 91) || (*temp > 96 && *temp < 123))
		{
			*temp += 1;
			if (*temp == 91)
				*temp = 'A';
			if (*temp == 123)
				*temp = 'a';
			write (1, temp, 1);
		}
		else
			write (1, temp, 1);
		temp++;
	}
	write (1, "\n", 1);
	return (0);
}
