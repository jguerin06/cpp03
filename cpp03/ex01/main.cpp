/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:59:52 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/16 12:00:52 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	Scavtrap Jacky("Jacky");

	Jacky.attack("Michel");
	Jacky.takeDamage(50);
	Jacky.beRepaired(50);
	Jacky.guardGate();
	Jacky.takeDamage(100);
}
