#include <iostream>
using namespace std;

class Animal{

public:
	const char* name;
	int age;
	Animal(const char* myname) : name (myname){};
	void set_value(int age_value){age = age_value;};	
};

class Zebra : public Animal{
public:
	const char* origin;
	Zebra (const char* myname, const char* myorigin) : Animal (myname), origin (myorigin){};
	void display_info(){cout << "Im: "<< name << " , my age is: " << age << " and im from: "<< origin<< endl;};

};

class Dolphin : public Animal{
public:
	const char* origin;
	Dolphin (const char* myname, const char* myorigin) : Animal (myname), origin (myorigin){};
	void display_info(){cout << "Im: "<< name << " , my age is: " << age << " and im from: "<< origin<< endl;};

};

int main()
{	
	const char* name = "Chaimae";
	const char* origin = "Morocco";
	Zebra zeb(name, origin);
	zeb.set_value(20);
	zeb.display_info();
	return 0;
}
