#pragma once

#include "Person.h"

class Teacher : public Person
{
private:
    int m_age;

public:
    Teacher(const std::string& name_in = "", const int& age_in = 30)
        : Person(name_in), m_age(age_in)
    {}

    void setAge(const int& age_in)
    {
        m_age = age_in;
    }

    int getAge() const
    {
        return m_age;
    }

    void teach()
    {
        std::cout << getName() << " is teaching" << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& out, const Teacher& teacher_in)
    {
        out << teacher_in.getName() << " , " << teacher_in.m_age;
        return out;
    }
};