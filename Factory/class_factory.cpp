#include "class_factory.h"

std::map<const std::string, fun_ptr> BaseFactory::CreatObject;//Iinit CreatObject
 
void *BaseFactory::Creat(const char* class_name)
{
	std::map<std::string, fun_ptr>::const_iterator it;
	
	it = CreatObject.find(class_name);
	if (it == CreatObject.end())
		return NULL;
	else
	{
		fun_ptr np = it->second;
		return np();
	}
}


//Register class 
void BaseFactory::register_class(const char* class_name, fun_ptr fp)
{
	//Check whether class name exist or not
	if  (CreatObject.find(class_name)== CreatObject.end())
	{
		CreatObject[class_name] = fp;
	}
	/*else
	{
		std::string coutstr;
		sprintf((char *)coutstr.c_str(), "%s  already exists!", class_name);
		printf("%s", coutstr.c_str());
	}*/
}