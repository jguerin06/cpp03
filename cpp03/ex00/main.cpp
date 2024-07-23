/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:59:52 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/15 11:41:44 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	Claptrap claptrap("Boby");

	claptrap.attack("Enemy 1 ");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.attack("Enemy 2 ");
	claptrap.takeDamage(15);
	claptrap.takeDamage(1);

	/* more tests
	
	claptrap.attack("Enemy 3 ");
	claptrap.attack("Enemy 3 ");
	claptrap.attack("Enemy 3 ");
	claptrap.attack("Enemy 3 ");
	claptrap.attack("Enemy 3 ");
	claptrap.attack("Enemy 3 ");
	claptrap.attack("Enemy 3 ");
	claptrap.attack("Enemy 3 "); // no more energy left
	claptrap.beRepaired(2);

	*/
}
