#include "object.h"
#include <iostream>

static void log(const char * message)
{
    std::cout << "Obejct: [" << message << "]" << std::endl;
}

Object::Object()
{
    log("Default Constructor");
}

Object::Object(const Object &/*o*/)
{
    log("Copy Constructor");
}

Object::Object(Object &&/*o*/)
{
    log("Move Constructor");
}

Object & Object::operator=(const Object &/*o*/)
{
    log("Copy operator");
    return *this;
}

void Object::operator=(Object &&/*o*/)
{
    log("Move operator");
}

Object::~Object()
{
    log("Destructor");
}

Object::String Object::toString()
{
    return "Object";
}
