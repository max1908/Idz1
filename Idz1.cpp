#include <iostream>
#include <conio.h>
using namespace std;




class cats
{

private:

	float weight;
	int age;
	int number;

public:

	enum color { WHITE, BLACK, ORANGE, GRAY, SMOKE, TWO_COLOR, THREE_COLOR } color_of_cat;

	cats()
	{
		weight = 0;
		age = 0;
		number = 0;
		color_of_cat = BLACK;

	}
	cats(color _color_of_cat, float _weight, int _age, int _number)
	{
		color_of_cat = _color_of_cat;
		weight = _weight;
		age = _age;
		number = _number;



	}

	void set_color(color new_color)
	{
		color_of_cat = new_color;
	}
	void set_weight(float new_weight)
	{
		weight = new_weight;
	}
	void set_age(int new_age)
	{
		age = new_age;
	}
	void set_number(int _number)
	{
		number = _number;
	}

	int get_number() {
		return number;
	}
	color get_color()
	{
		return color_of_cat;
	}
	float get_weight()
	{
		return weight;
	}
	int get_age()
	{
		return age;
	}
};

int choose_1(float weight, cats cat, int i)
{
	if (cat.get_weight() > weight)
		return i;
	else {
		return (i + 1);
	}
}
int main()
{
	cout << "Welcome in OnlineCatsShop" << endl;
	
	cout << "1)a cat weighing more than - ... " << endl;
	cout << "2)sort cats by age   " << endl;
	cout << "3)Exit " << endl;
	int a=0;
	// int best=0;
	// cin>> a;

	const int L = 5;
	cats cat[L];
	cat[0] = cats(cats::color::BLACK      , 1.7    , 2, 0);
	cat[1] = cats(cats::color::WHITE,       2.3, 4, 1);
	cat[2] = cats(cats::color::ORANGE,      3.3, 3, 2);
	cat[3] = cats(cats::color::THREE_COLOR, 2.5, 2, 3);
	cat[4] = cats(cats::color::TWO_COLOR,   4  , 6, 4);
	

	while (a != 3)
	{
		cout << "Choose the action ";
		cin >> a;
		switch (a)
		{
		case 1:
		{   
			cout << "set weight - " << endl;
			bool  k = false;
			float weight;
			cin >> weight;
			for (int  i(0); i < 5; i++)
			{
				if (choose_1(weight, cat[i], i) == i)
				{
					cout << " Nice! It is cat number - " << i << endl;
					k = true;
					break;
				}
			}
				if (k == false)
				{
					cout << "Sorry, enter a different weight " << endl;
				
				
				}
			
			break;
		}
		case 2:
		{  cats temp();
		for (int i(0); i<5; i++)
		{
			for (int k(0); k < 4; k++)
				if (cat[k].get_age() > cat[k + 1].get_age())
					swap(cat[k], cat[k + 1]);

		}
		for (int i(0); i < 5; i++)
		{
			cout << cat[i].get_age() << " - age   number -   " << cat[i].get_number() << endl;
		}
		
		break;

		}
		case 3:
		{  
		break;
		}
		default:
		{cin.clear();
		cin.ignore(cin.rdbuf()->in_avail()); cin.clear();
			a = 0;
			cout << "Error" << endl;
		}
		}

		
	}
	return 0;
}