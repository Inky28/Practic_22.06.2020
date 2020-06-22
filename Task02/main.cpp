/*
2. Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.
С помощью механизма наследования, реализуйте класс ForeignPassport (загранпаспорт) налсідуваний от Passport.
Напомним, что загранпаспорт содержит помимо паспортных данных, также данные о визах, номер загранпаспорта.
*/

#include <iostream>
#include <list>

using namespace std;

class Passport
{
private:
	string name;
	string surname;
	string patronymic;

public:
	Passport(string name, string surname, string patronymic)
	{
		SetName(name);
		SetSurname(surname);
		SetPatronymic(patronymic);
	}

	Passport()
	{
		this->name = "NONAME";
		this->surname = "NONAME";
		this->patronymic = "NONAME";
	}

	void SetName(string name)
	{
		if (!name.empty())
			this->name = name;
	}

	void SetSurname(string surname)
	{
		if (!surname.empty())
			this->surname = surname;
	}

	void SetPatronymic(string patronymic)
	{
		if (!patronymic.empty())
			this->patronymic = patronymic;
	}

	string GetName()
	{
		return this->name;
	}

	string GetSurname()
	{
		return this->surname;
	}

	string GetPatronymic()
	{
		return this->patronymic;
	}

	void Print()
	{
		cout << "Name: " << GetName() << endl;
		cout << "Surname: " << GetSurname() << endl;
		cout << "Patronymic : " << GetPatronymic() << endl;
	}
};

class ForeignPassport : public Passport
{
private:
	string number;
	list<string> visas;

public:

	void SetNumber(string number)
	{
		if (!number.empty())
			this->number = number;
	}

	void AddVisa(string visa)
	{
		if (!number.empty())
			visas.push_back(visa);
	}

	string GetNumber()
	{
		return this->number;
	}

	list<string> GetVisas()
	{
		return this->visas;
	}

	void Print()
	{
		Passport::Print();
		cout << "Number : " << GetNumber() << endl;
	}
};

int main()
{
	Passport myPassport;
	myPassport.Print();


	return 0;
}