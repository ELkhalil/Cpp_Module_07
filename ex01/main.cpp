/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:59:51 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/19 19:38:51 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() 
{
    // Test with int array
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Printing intArray: ";
    iter(intArray, intArrayLength, print_element<int>);
    std::cout << std::endl;

    // Test with double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "Printing doubleArray: ";
    iter(doubleArray, doubleArrayLength, print_element<double>);
    std::cout << std::endl;

    // Test with char array
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    size_t charArrayLength = sizeof(charArray) / sizeof(charArray[0]);
    std::cout << "Printing charArray: ";
    iter(charArray, charArrayLength, print_element<char>);
    std::cout << std::endl;

    // Test with string array
    std::string stringArray[] = {"apple", "banana", "cherry", "date", "elderberry"};
    size_t stringArrayLength = sizeof(stringArray) / sizeof(stringArray[0]);
    std::cout << "Printing stringArray: ";
    iter(stringArray, stringArrayLength, print_element<std::string>);
    std::cout << std::endl;
    return 0;
}
