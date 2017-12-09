#ifndef _DOG_H_
#define _DOG_H_

#include <string>

class Dog {
public:
	Dog(std::string kind, int price);
	~Dog();

	void setKind(const std::string &kind);
	void setPrice(const int &price);

	std::string getKind() const;
	int getPrice() const;
	
private:
	std::string m_Kind;
	int m_Price;
};

#endif