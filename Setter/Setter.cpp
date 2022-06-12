#include"Cat.h"
void Cat::Play()
{
	if (is_hungry == true)
	{
		std::cout << name << " is not playing\n";
	}
	else if (is_hungry == false && energy > 25)
	{
		std::cout << name << " is playing\n";
		energy -= 20;
	}
}
void Cat::SetName(std::string Name)
{
	name = Name;
}
void Cat::SetColor(std::string Color)
{
	color = Color;
}
void Cat::SetAge(int Age)
{
	age = Age;
}
void Cat::SetWeight(double Weight)
{
	weight = Weight;
}
void Cat::SetEnergy(int Energy)
{
	energy = Energy;
}
void Cat::Sleep()
{
	std::cout << name << " is sleeping\n";
	energy += 10;
	is_hungry = true;
	weight -= 100;
}
void Cat::Hunt()
{
	int probability = rand() % 2;
	if (energy > 10)
	{
		if (probability == 1)
		{
			std::cout << name << " is hunting\n";
			energy -= 10;
		}
		else
			std::cout << name << " is not hunting\n";
	}  
}
void Cat::SetHungry(bool Hungry)
{
	if (is_hungry == true)
	{
		Hungry = is_hungry;
		std::cout << name << "is hungry\n";
	}
	else if (is_hungry == false) {
		Hungry = is_hungry;
		std::cout << name << " is not hungry\n";
	}
	weight--;
}
void Cat::Eating()
{
	std::cout << name << " is eating\n";
	is_hungry = false;
	weight++;
	energy += 10;
}
void Cat::Speak()
{
	if (is_hungry == false)
		std::cout << "MYYYAAAAUUuu\n";
}
void Cat::Print()
{
	std::cout << "Barsick name is " << name << "\n";
	std::cout << name << " weight is " << weight << "\n";
	std::cout << name << " energy is " << energy << "\n";
}
void Cat::Condition()
{
	if (energy == 0)std::cout << "Cat is dead";
	else if (energy == 100)std::cout << "Cat can conquer the world";
}
