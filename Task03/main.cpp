/*
3. ������� ������� ����� ��������� �������� � ����������� ������ �������, ������, ��������, ������.
� ������� ������������ ���������� ��� ������� ��������� � ��� ��������������.
���������� ��� ������� �� ������� �������:
Sound � ������ ���� ��������� (����� ������� � �������);
Show � ���������� ��� ���������;
Type � ���������� �������� ��� �������.
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