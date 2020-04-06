#ifndef OBJECT_H
#define OBJECT_H

#include <string>

class Object
{
public:
    typedef std::string String;
    /**
     * @brief Default Ctor
     */
    Object();

    /**
     * @brief Copy Ctor
     * @param o - source object
     */
    Object(const Object & o);

    /**
     * @brief Move Ctor
     * @param o - source object
     */
    Object(Object && o);

    /**
     * @brief Copy operator
     * @param o - sourcec obejct
     * @return this
     */
    Object& operator=(const Object & o);

    /**
     * @brief Move operator
     * @param o - source object
     */
    void operator=(Object && o);

    /**
     * @brief ~Object - Dtor
     */
    virtual ~Object();

    /**
     * @brief toString - Method to get String representation of the object
     * @return string representation of the Object
     */
    virtual String toString();
};

#endif // OBJECT_H
