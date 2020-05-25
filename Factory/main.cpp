#include <string>
#include"Register.h"
#include "CreatClass.h"
class imagea
{
public :
	imagea() {
		_id = 0;
		_name = "image 1";


	}
public :
	int _id;
	std::string _name;
};

class imageb
{
public:
	imageb() {
		_id = 0;
		_name = "image 2";


	}
public:
	int _id;
	std::string _name;
};

REGISTER(imagea);
REGISTER(imageb);

#include <iostream>
#include "Register.h"
int main(int argc, char *argv[])
{
	imagea *ia = static_cast<imagea*>(BaseFactory::Creat("imagea"));

	imageb *b=   static_cast<imageb*>(BaseFactory::Creat("imageb"));
	return 0;

}