/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:17:43 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 18:40:39 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class ShrubberyCreationForm: public AForm
{
private:
    std::string	_target;
public:
    ShrubberyCreationForm(); // Default constructor
	ShrubberyCreationForm(const ShrubberyCreationForm &src); // Copy constructor
	ShrubberyCreationForm(std::string const &target);
	~ShrubberyCreationForm(); // Destructor
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src); // Assignment operator

    void        execute(Bureaucrat const & executor) const;
};

#endif