/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 01:33:14 by hseffian          #+#    #+#             */
/*   Updated: 2020/02/14 01:41:59 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

int check_space(char c){
	return (c == ' ' || c == '\t');
}

void rostring(char *s){
	int i = 0;
	int count = 0;
	while (s[i]){
		while (s[i] && check_space(s[i]))
			i++;
		if (count == 0){
			while(s[i] && !check_space(s[i])){
				i++;
				count++;
			}
		}else{
			while(s[i] && !check_space(s[i]) && write(1, &s[i++], 1));
			ft_putchar(' ');
		}
	}
	i = 0;
	while (s[i] && check_space(s[i]))
		i++;
	while (count--)
		write(1, &s[i++], 1);
}

int main(int ac, char **av){
	if (ac > 1)
		rostring(av[1]);
	ft_putchar('\n');
}
