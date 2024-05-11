/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:17:38 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 18:40:25 by mvavasso         ###   ########.fr       */
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
    RobotomyRequestForm(); // Default constructor
	RobotomyRequestForm(const RobotomyRequestForm &src); // Copy constructor
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm(); // Destructor
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &src); // Assignment operator

    void        execute(Bureaucrat const & executor) const;
};

#endif