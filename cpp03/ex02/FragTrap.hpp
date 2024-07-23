/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:20:30 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/16 14:40:55 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class Fragtrap : public Claptrap
{
	private:
		Fragtrap(void);

	public:
		Fragtrap(std::string name);
		Fragtrap(Fragtrap const &src);
		~Fragtrap();

		Fragtrap	&operator=(Fragtrap const &rhs);

		void		attack(const std::string& target);
		void		highFivesGuys(void);
};

#endif
