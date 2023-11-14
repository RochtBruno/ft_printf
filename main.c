/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:10:12 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/14 13:55:38 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int   main(void)
{
        char    *ptr;
        printf("%s\n","---------------------original-------------------");
        printf("%d\n",45);
        printf("%i\n",45);
        printf("%c %c %c %c\n", '0' , 'g', 'g', 'g');
        printf("%x %c %d %i\n", 45, 97, 87, 87);
        printf("%X\n",-100);
        printf("%%\n");
        printf("%p\n", &ptr);
	printf("%s\n","banana");
	printf("%s\n","");
        printf("%s\n","---------------------minha ft_printf----------");
        ft_printf("%d\n",45);
        ft_printf("%i\n",45);
        ft_printf("%c %c %c %c \n", '0', 'g', 'g', 'g');
        ft_printf("%x %c %d %i\n", 45, 97, 87, 87);
        ft_printf("%X\n",-100);
        ft_printf("%%\n");
        ft_printf("%p\n", &ptr);
	ft_printf("%s\n","banana");
	ft_printf("%s\n","");
}
