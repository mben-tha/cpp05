/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdi <mehdi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:00:07 by mehdi             #+#    #+#             */
/*   Updated: 2026/02/01 19:51:01 by mehdi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <string>

class	RobotomyRequestForm : public	AForm
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& copy);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(RobotomyRequestForm const& copy);

	virtual void	executeF() const;

private:
	std::string	m_target;

};