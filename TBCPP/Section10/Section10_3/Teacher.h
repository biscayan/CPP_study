#pragma once

#include <iostream>
#include <string>

class Teacher 
{
private:
    std::string m_name;
    int m_age;

public:
    Teacher(const std::string& name_in = "", const int& age_in = 30) 
        : m_name(name_in), m_age(age_in) 
    {}

    void setName(const std::string& name_in) 
    {
        m_name = name_in; 
    }

    void setAge(const int& age_in) 
    { 
        m_age = age_in; 
    }

    int getAge() const 
    { 
        return m_age; 
    }

    std::string getName() const
    {
        return m_name;
    }

    friend std::ostream& operator<<(std::ostream& out, const Teacher& teacher_in) 
    {
        out << teacher_in.m_name << " , " << teacher_in.m_age;
        return out;
    }
};