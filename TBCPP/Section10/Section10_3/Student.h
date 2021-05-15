#pragma once

#include <iostream>
#include <string>

class Student
{
private:
    std::string m_name;
    int m_intel;

public:
    Student(const std::string& name_in = "", const int& intel_in = 0) 
        : m_name(name_in), m_intel(intel_in) 
    {}

    void setName(const std::string& name_in)
    {
        m_name = name_in;
    }

    void setIntel(const int& intel_in) 
    { 
        m_intel = intel_in; 
    }

    std::string getName() const 
    { 
        return m_name; 
    }

    int getIntel() const 
    { 
        return m_intel; 
    }

    friend std::ostream& operator<<(std::ostream& out, const Student& student_in)
    {
        out << student_in.m_name << " , " << student_in.m_intel;
        return out;
    }
};