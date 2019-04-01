/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 00:22:58 by olesgedz          #+#    #+#             */
/*   Updated: 2019/04/02 00:46:57 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int argc, char **argv)
{
    int i;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 0;
    while(argv[1][i] != '\0')
    {
        if ( 'a' <= argv[1][i] && argv[1][i] <= 'z')
            std::cout << (char)(argv[1][i] - ('a' - 'A'));
        else
            std::cout << (char)argv[1][i];
        i++;
    }
    std::cout << std::endl;
    return (0);
}