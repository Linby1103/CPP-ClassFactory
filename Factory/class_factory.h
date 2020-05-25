#ifndef  _CLASS_FACTORY_H
#define _CLASS_FACTORY_H
#include <iostream>
#include <map>

typedef void *(*fun_ptr)();//Define function pointer


class BaseFactory {
public:
	
	static void register_class(const char *, fun_ptr);
	static void *Creat(const char* classname);

private:
	static std::map<const std::string, fun_ptr> CreatObject;
};

#endif // ! __CLASS_FACTORY_H
