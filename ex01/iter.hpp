/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:30:23 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/20 22:19:21 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    iter(T *array, size_t length, void (*f)(T& arg))
{
    if (!array || length == 0)
        return ;
    size_t i = 0;
    while (i < length)
        f(array[i++]);
}

template<typename T>
void    multiply_value(T &value)
{
    value *= value;
}

template<typename T>
void    print_value(T &value)
{
    std::cout << value << " ";
}
#endif