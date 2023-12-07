/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:20:15 by ytijani           #+#    #+#             */
/*   Updated: 2022/12/17 21:33:39 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int ac, char **av)
{
    int i;
	int j;

    i = 1;
	j = 0;
	while(av[i] && ac > 1)
	{
		while(av[i][j])
		{
			av[i][j] = (char)toupper(av[i][j]);
			j++;
		}
		std::cout<<av[i];
		i++;
	}
	std::cout<<std::endl;
}