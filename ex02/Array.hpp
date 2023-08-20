/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:40:21 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/20 12:52:30 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class   Array
{
public:
    Array   ( void );
    Array   ( unsigned int n);
    Array   ( Array const& other);
    Array&  operator=( Array const& other);
    ~Array  ( void);
private:
    T*      array;
    size_t  size;
}

#endif