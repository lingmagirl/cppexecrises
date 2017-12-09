#ifndef _TEACHER_H_
#define _TEACHER_H_

#include <string>

class Teacher {
public:
	Teacher(std::string ID, std::string name, double salary);
	~Teacher();

	void setID(const std::string &ID) ;
	void setName(const std::string &name);
	void setSalary(const double &salary);
	std::string getID();
	std::string getName();
	double getSalary();

private:
	std::string m_ID;
	std::string m_Name;
	double m_Salary;
};

#endif