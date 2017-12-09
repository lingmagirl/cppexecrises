#include "teacher.h"


Teacher::Teacher(std::string ID, std::string name, double salary)
	:m_ID(ID), m_Name(name), m_Salary(salary) 
{

}

Teacher::~Teacher() 
{

}

void Teacher::setID(const std::string &ID) 
{
	m_ID = ID;
}

void Teacher::setName(const std::string &name) 
{
	m_Name = name;
}

void Teacher::setSalary(const double &salary) 
{
	m_Salary = salary;
}

std::string Teacher::getID() 
{
	return m_ID;
}

std::string Teacher::getName() 
{
	return m_Name;
}

double Teacher::getSalary() 
{
	return m_Salary;
}