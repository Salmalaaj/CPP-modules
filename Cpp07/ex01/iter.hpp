/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 01:28:40 by slaajour          #+#    #+#             */
/*   Updated: 2023/06/15 05:00:01 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T *array, int len, void (*work)(T const &))
{
    for (int i = 0; i < len; i++)
        work(array[i]);
}

#endif