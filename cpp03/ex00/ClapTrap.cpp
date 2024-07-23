/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerin <jguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:42:41 by jguerin           #+#    #+#             */
/*   Updated: 2024/07/16 11:58:41 by jguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10),_attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Claptrap::Claptrap(Claptrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Claptrap::~Claptrap(void)
{
	std::cout << "Default destructor called" << std::endl;
	return;
}

 
Claptrap &Claptrap::operator=( Claptrap const &rhs )
{
	std::cout << "Assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void Claptrap::attack(const std::string& target)
{
	if (_energyPoints >= 1)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << "and inflicts " << _attackDamage << " damage." << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "Claptrap " << _name << " doesn't have enough energy to attack !" << std::endl;
}

void Claptrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " has been hit for " << amount << " of damage" << std::endl;
		if (amount >= (unsigned int)_hitPoints)
		{
			_hitPoints = 0;
			std::cout << "ClapTrap " << _name << " has no HP left" << std::endl;
		}
		else
			_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead bro, stop it" << std::endl;
}


void Claptrap::beRepaired(unsigned int amount)
{
	if (_energyPoints >= 1)
	{
		std::cout << "Claptrap " << _name << " repaired itself and regain " << amount << " HP" << std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " doesn't have enough energy to repair itself, skill issue." << std::endl;
}
