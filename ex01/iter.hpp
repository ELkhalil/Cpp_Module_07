/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:30:23 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/19 19:38:28 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T *array, size_t length, void (*f)(T &))
{
    if (!array || !f || length == 0)
        return ;

    size_t i = 0;
    while (i < length)
        f(array[i++]);
}

template <typename T>
void print_element(T& value)
{
    std::cout << "value = " << value << std::endl;
}

#endif