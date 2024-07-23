/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:01:04 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/18 09:55:16 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

Scavtrap::Scavtrap(std::string name) : Claptrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	
	std::cout << "Scavtrap constructor called" << std::endl;
	return;
}

Scavtrap::Scavtrap(Scavtrap const &src) : Claptrap(src)
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
	return;
}

Scavtrap::~Scavtrap(void)
{
	std::cout << "Scavtrap destructor called" << std::endl;
	return;
}

Scavtrap &Scavtrap::operator=(Scavtrap const &rhs)
{
	std::cout << "Scavtrap assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void Scavtrap::attack(const std::string& target)
{
	if (_energyPoints >= 1)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " and inflicts " << _attackDamage << " damage." << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "Scavtrap " << _name << " doesn't have enough energy to attack !" << std::endl;
}

void Scavtrap::guardGate(void)
{
	std::cout << "Scavtrap " << _name << " is in Gate keeper mode" << std::endl;
}
