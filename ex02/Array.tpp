/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:31:41 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/20 22:41:59 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

// Array<T> Constructors
template<typename T>
Array<T>::Array( void ) : _array(NULL), _size(0) {}

template<typename T>
Array<T>::Array( Array const& other )
{
    this->_size = other._size;
    this->_array = new T[other._size];
    for (size_t i = 0; i < _size; i++)
        this->_array[i] = other._array[i];
}

template<typename T>
Array<T>::Array( unsigned int n ) : _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::~Array()
{
    if (this->_array)
        delete[] this->_array;
}

// Array<T> Operators
template<typename T>
Array<T>&   Array<T>::operator=( Array const& other )
{
    if (this != &other)
    {
        this->_size = other._size;
        delete[] _array;
        this->_array = new T[other._size];
        for (size_t i = 0; i < _size; i++)
            this->_array[i] = other._array[i];
    }
    return *this;
}

template<typename T>
T&   Array<T>::operator[] ( unsigned int index )
{
    if (index >= this->_size)
        throw (std::out_of_range("Index out of range"));
    return this->_array[index];
}

template <typename T>
T const& Array<T>::operator[](size_t index) const {
    if (index >= this->_size)
        throw std::out_of_range("Index out of range");
    return this->_array[index];
}

// Array<T> Getters
template <typename T>
T*    Array<T>::get_array( void ) const
{
    return this->_array;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}

template <typename T>
std::ostream& operator<<(std::ostream& out, Array<T> const& tmp)
{
    if ( tmp.size() == 0)
    {
        out << "Array Is Empty" << std::endl;
        return out;
    }
    T*  arrayData = tmp.get_array();
    for(unsigned int i = 0; i < tmp.size(); i++)
        out << arrayData[i] << " ";
    out << std::endl;
    return out;
}

#endif