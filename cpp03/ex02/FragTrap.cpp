/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:20:35 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/18 10:51:08 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

Fragtrap::Fragtrap(std::string name) : Claptrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap constructor called" << std::endl;
	return;
}

Fragtrap::Fragtrap(Fragtrap const &src) : Claptrap(src)
{
	std::cout << "Fragtrap copy constructor called" << std::endl;
	return;
}

Fragtrap::~Fragtrap(void)
{
	std::cout << "Fragtrap destructor called" << std::endl;
	return;
}

Fragtrap &Fragtrap::operator=(Fragtrap const &rhs)
{
	std::cout << "Fragtrap assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void Fragtrap::highFivesGuys(void)
{
	std::cout << "Fragtrap " << _name << " wants to do a High Five !" << std::endl;
	return;
}
