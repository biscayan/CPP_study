#include <iostream>
#include <vector>
#include <string>

using namespace std;

//forward declaration
class Doctor; 

//Association relationship
class Patient
{
private:
	string m_name;
	vector <Doctor*> m_doctors;

public:
	Patient(string name_in)
		:m_name(name_in)
	{}

	void addDoctor(Doctor* new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	void meetDoctors();

	friend class Doctor;
};

class Doctor
{
private:
	string m_name;
	vector <Patient*> m_patients;

public:
	Doctor(string name_in)
		:m_name(name_in)
	{}

	void addPatient(Patient* new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatients()
	{
		for (auto& element : m_patients)
		{
			cout << "Meet patient : " << element->m_name << endl;
		}
	}

	friend class Patient;
};

void Patient::meetDoctors()
{
	for (auto& element : m_doctors)
	{
		cout << "Meet doctor : " << element->m_name << endl;
	}
}

int main()
{
	Patient* p1 = new Patient("SJ");
	Patient* p2 = new Patient("OE");
	Patient* p3 = new Patient("LA");

	Doctor* d1 = new Doctor("HJ");
	Doctor* d2 = new Doctor("NB");

	//Correlation
	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	p1->meetDoctors();
	d1->meetPatients();

	delete p1;
	delete p2;
	delete p3;
	delete d1;
	delete d2;

	return 0;
}