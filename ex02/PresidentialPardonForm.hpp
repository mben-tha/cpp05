/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:00:58 by mehdi             #+#    #+#             */
/*   Updated: 2026/01/31 18:02:26 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class	PresidentialPardonForm : public	AForm
{
public:
	PresidentialPardonForm(std::string target, std::string name, int sign_grade, int execute_grade);
	PresidentialPardonForm(PresidentialPardonForm const& copy);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=(PresidentialPardonForm const& copy);

	virtual void	executeF();

private:
	std::string	m_target;
};