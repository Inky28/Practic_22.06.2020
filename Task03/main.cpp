/*
3. Создать базовый класс «Домашнее животное» и производные классы «Собака», «Кошка», «Попугай», «Хомяк».
С помощью конструктора установить имя каждого животного и его характеристики.
Реализуйте для каждого из классов функции:
Sound – издает звук животного (пишем текстом в консоль);
Show – отображает имя животного;
Type – отображает название его подвида.
*/

#include <iostream>

using namespace std;

class Animal
{
private:
	string nameAnimal;
public:

	void SetName(string nameAnimal)
	{
		this->nameAnimal = nameAnimal;
	}
	string GetName()
	{
		return this->nameAnimal;
	}

	void Sound()
	{

	}

	void Print()
	{
		cout << "Name animal : " << GetName() << endl;
	}
};

class Dog : public Animal
{
private:
	string Type;
public:
};

int main()
{


	return 0;
}