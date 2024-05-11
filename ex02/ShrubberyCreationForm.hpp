/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:17:43 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 21:36:28 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm: public AForm
{
private:
    std::string	_target;
public:
    ShrubberyCreationForm(std::string target); // Default constructor
	ShrubberyCreationForm(const ShrubberyCreationForm &src); // Copy constructor
	~ShrubberyCreationForm(); // Destructor
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src); // Assignment operator

    void        execute(Bureaucrat const & executor) const;
};

#endif