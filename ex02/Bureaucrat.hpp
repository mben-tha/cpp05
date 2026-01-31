/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:29:37 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/31 12:59:10 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <ostream>
#include "AForm.hpp"

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& copy);
	~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat const& copy);

	std::string const&	getName() const;
	int					getGrade() const;

	void	signAForm(AForm& f);

	void	incrementGrade();
	void	decrementGrade();

	class	GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high (minimum is 1)");
			}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low (maximum is 150)");
			}
	};

private:

	std::string const	m_name;
	int					m_grade;
};

std::ostream& operator<<(std::ostream &flow, Bureaucrat const& bureaucrat);

#endif
