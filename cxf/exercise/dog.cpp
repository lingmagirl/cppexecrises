#include "dog.h"
#include <string>
#include <iostream>

Dog::Dog(std::string kind, int price)
	:m_Kind(kind), m_Price(price)
{

}
Dog::~Dog()
{
	std::cout << "good" << std::endl;
}

void Dog::setKind(const std::string &kind)
{
	m_Kind = kind;
}
void Dog::setPrice(const int &price)
{
	m_Price = price;
}

std::string Dog::getKind() const
{
	return m_Kind;
}
int Dog::getPrice() const
{
	return m_Price;
}

	
