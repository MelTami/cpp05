/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:17:38 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 21:46:46 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm: public AForm
{
private:
    std::string	_target;
public:
    RobotomyRequestForm(std::string target); // Default constructor
	RobotomyRequestForm(const RobotomyRequestForm &src); // Copy constructor
	~RobotomyRequestForm(); // Destructor
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src); // Assignment operator

    void        execute(Bureaucrat const & executor) const;
};

#endif