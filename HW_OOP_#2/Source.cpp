#include<iostream> 
using namespace std;

// ТEMA: введение в объектно - ориентированное программирование.
// Знакомство с классами.

/*
Задание 1
Реализуйте класс Дробь.Необходимо хранить числитель и знаменатель
в качестве полей класса. Реализуйте конструкторы(перегружаем!),
методы для ввода данных, для выполнения арифметических операций
(сложение, вычитание, умножение, деление, и т.д.) и для вывода данных.
Реализовать методы аксессоры для работы с отдельными полями класса!
*/

class Fraction
{
private:
	int num;
	int den;
public:
	Fraction()
	{
		num = 0;
		den = 1;
	}
	Fraction(int a, int b)
	{
		num = a;
		den = b;
	}
	Fraction(int a)
	{
		num = a;
		den = a;
	}

	void Input()
	{
		cin >> num >> den;
	}
	void Show()
	{
		cout << "Fraction: " << num << "/" << den << endl;
	}

	Fraction Sum(Fraction& b)
	{
		Fraction rez;
		rez.num = num * b.den + b.num * den;
		rez.den = den * b.den;
		return rez;
	}
	Fraction Min(Fraction& b)
	{
		Fraction rez;
		rez.num = num * b.den - b.num * den;
		rez.den = den * b.den;
		return rez;
	}
	Fraction Mul(Fraction& b)
	{
		Fraction rez;
		rez.num = num * b.num;
		rez.den = den * b.den;
		return rez;
	}
	Fraction Div(Fraction& b)
	{
		Fraction rez;
		rez.num = num * b.den;
		rez.den = den * b.num;
		return rez;
	}

	void SetNum(int a)
	{
		num = a;
	}
	void SetDen(int a)
	{
		den = a;
	}
	int GetNum()
	{
		return num;
	}
	int GetDen()
	{
		return den;
	}
};

int main()
{
	// Fraction f()
	// Fraction f;
	// f.Input();

	Fraction f1(1, 2);
	f1.Show();
	Fraction f2(3);
	f2.Show();

	cout << endl << "Result of arithmetic operations" << endl;
	Fraction f3 = f1.Sum(f2);
	f3.Show();
	f3 = f1.Min(f2);
	f3.Show();
	f3 = f1.Mul(f2);
	f3.Show();
	f3 = f1.Div(f2);
	f3.Show();

	// cout << endl;
	// f1.SetNum(2);
	// f1.Show();

	// int x = f1.GetDen();
	// cout << endl << x;

	return 0;
}