/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:59:52 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/18 10:52:37 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	Fragtrap Jacky("Jacky");

	Jacky.attack("Michel");
	Jacky.takeDamage(50);
	Jacky.beRepaired(50);
	Jacky.highFivesGuys();
	Jacky.takeDamage(100);
}
