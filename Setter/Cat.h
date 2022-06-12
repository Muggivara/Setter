#pragma once
#include<iostream>
class Cat
{
private:
	std::string name;
	std::string color;
	int age;
	double weight ;
	bool is_hungry;
	int energy ;
	
public:
	void SetName(std::string Name);
	void SetColor(std::string Color);
	void SetAge(int Age);
	void SetWeight(double Weight);
	void SetHungry(bool Hungry);
	void SetEnergy(int Energy);
	
	void Play();
	void Sleep();
	void Hunt();
	void Eating();
	void Speak();
	void Print();
	void Condition();
	
};


