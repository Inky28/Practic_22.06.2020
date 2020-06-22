/*
1. Создайте класс Student, который будет содержать информацию о студенте.
С помощью механизма наследования, реализуйте класс Aspirant (аспирант —
студент, который готовится к защите кандидатской работы) производный от Student.
*/

#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	string surname;
	string specialty;
public:

	Student(string name, string surname, string specialty)
	{
		SetName(name);
		SetSurname(surname);
		SetSpecialty(specialty);
	}

	Student()
	{
		this->name = "NONAME";
		this->surname = "NONAME";
		this->specialty = "NO SPECIALTY";
	}

	void SetName(string name)
	{
		this->name = name;
	}
	string GetName() const
	{
		return this->name;
	}

	void SetSurname(string surname)
	{
		this->surname = surname;
	}
	string GetSurname() const
	{
		return this->surname;
	}

	void SetSpecialty(string specialty)
	{
		this->specialty = specialty;
	}
	string GetSpecialty() const
	{
		return this->specialty;
	}

	void Print()
	{
		cout << "Name: " << GetName() << endl;
		cout << "Surname: " << GetSurname() << endl;
		cout << "Specialty : " << GetSpecialty() << endl;
	}

};

class Aspirant : public Student
{
private:
	string theme;
	string email;
public:

	Aspirant(string name, string surname, string specialty) : Student(name, surname, specialty)
	{
		this->theme = "NO THEME";
		this->email = "NO EMAIL";
	}

	Aspirant(string theme, string email, string name, string surname, string specialty) : Student(name, surname, specialty)
	{
		SetTheme(theme);
		SetEmail(email);
	}

	void SetTheme(string theme)
	{
		this->theme = theme;
	}
	string GetTheme() const
	{
		return this->theme;
	}

	void SetEmail(string email)
	{
		this->email = email;
	}
	string GetEmail(string email)
	{
		return this->email;
	}

	void Print()
	{
		Student::Print();
		cout << "Theme : " << GetTheme() << endl;
		cout << "Specialty : " << GetSpecialty() << endl;
	}
};

int main()
{
	Student firstStudent;
	firstStudent.Print();

	Student secondStudent("Igor", "Ivanov", "Engineer");
	secondStudent.Print();

	Aspirant firstAspirant("Water system", "My_email@suc.com", "Ivan", "Viscont", "Technik");
	firstAspirant.Print();

	return 0;
}