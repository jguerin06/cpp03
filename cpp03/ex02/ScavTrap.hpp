/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:19:17 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/16 11:33:55 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class Scavtrap : public Claptrap
{
	private:
		Scavtrap(void);
	
	public:
		Scavtrap(std::string name);
		Scavtrap(Scavtrap const &src);
		~Scavtrap();

		Scavtrap	&operator=(Scavtrap const &rhs);

		void		attack(const std::string& target);
		void		guardGate(void);
};

#endif
