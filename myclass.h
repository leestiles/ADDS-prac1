#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

class myclass
{

    public:
            myclass();
            
            void setMyAge(int num);

            int getMyAge();

    private:
        int age;

};