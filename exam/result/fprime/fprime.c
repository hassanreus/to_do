/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hseffian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 02:03:11 by hseffian          #+#    #+#             */
/*   Updated: 2020/02/14 02:09:45 by hseffian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void fprime(unsigned int nb){
	unsigned int prime = 2;
	if (nb == 1)
		printf("%d", nb);
	while (nb > 1){
		if (nb % prime == 0){
			printf("%d", prime);
			nb /= prime;
			if (nb > 1)
				printf("*");
			prime--;
		}
		prime++;
	}
}

int main(int ac,char **av){
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
}
