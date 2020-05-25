#pragma once
#include "class_factory.h"
class Register {
public :
	Register(const char *class_name, fun_ptr fp) { BaseFactory::register_class(class_name, fp); }

};




#define REGISTER(class_name)            \
    class Register##class_name {        \
        public:                         \
            static void * instance() {         \
                return new class_name;  \
            }                           \
        private:                        \
            static const Register _static_register; \
    };                                   \
    const Register Register##class_name::_static_register(#class_name, Register##class_name::instance);