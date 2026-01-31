/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 17:25:54 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/30 23:23:50 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AFORM_HPP
# define AFORM_HPP

#include <string>
#include <ostream>
#include <exception>

class	Bureaucrat;

class	AForm
{
public:

	AForm(std::string name, int sign_grade, int execute_grade);
	AForm(AForm const& copy);
	virtual ~AForm();
	AForm& operator=(AForm const& copy);

	std::string const&	getName() const;
	bool				getIsSigned() const;
	int					getSignGrade() const;
	int					getExecGrade() const;

	void	beSigned(Bureaucrat const& b);

	void	execute(Bureaucrat const & executor) const;

	virtual void	executeF();

	class	FormNotSigned : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form is not signed");
			}
	};

	class	GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high for a AForm");
			}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low for sign this AForm");
			}
	};

protected:

	std::string const	m_name;
	bool				m_is_signed;
	int const			m_sign_grade;
	int const			m_execute_grade;

};

std::ostream& operator<<(std::ostream &flow, AForm const& AForm);

#endif