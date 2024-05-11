/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:35:39 by mvavasso          #+#    #+#             */
/*   Updated: 2024/05/11 17:40:30 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
private:
    std::string const   _name;
    int                 _grade;
public:
    Bureaucrat(); //Constructor
    Bureaucrat(const Bureaucrat &src); // Copy constructor
	Bureaucrat(std::string const &name, int grade);
    ~Bureaucrat(); //Desctructor
    Bureaucrat	&operator=(const Bureaucrat &src); //Assignment operator

    // Getters
	std::string const	&getName() const;
	int					getGrade() const;

	// Methods
	void				incrementGrade();
	void				decrementGrade();

	// Exceptions
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src);

#endif