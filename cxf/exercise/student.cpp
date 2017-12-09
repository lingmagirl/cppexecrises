#include <string>
#include <iostream>

/**
ctor:构造函数 constructor 构造器 有重载
dtor:析构函数 destructor  析构器 没有重载
*/

class Student {
private:
	std::string name;
	short age;

public:
	//默认构造函数
	Student() {}
/*
	Student(const char* name, int age) {
		this->name = name;
		this->age = age;
		std::cout << "ctor" << std::endl;
	}

	Student(const char* name) {
		this->name = name;
		age = 99;
	}

	Student() {
		name = "xiaowang";
	}
*/
	~Student() {
		std::cout << "dtor" << std::endl;
	}

	void setName(const std::string &name) {
		this->name = name;
	}

	void setAge(const short &age) {
		
		this->age = age;
	}

	std::string getName() {
		return name;
	}

	short getAge() {
		return age;
	}
};

/*
访问权限：在某个地方对某个名称是否可见
public:
private:
protected:

面向对象三大特性：
封装、继承和多态

提供一个统一的接口（函数）
*/

int main () {

	//object: shiwu
	Student s1;


	std::cout << s1.getName() << "\t" << s1.getAge() << std::endl;

	return 0;
}
