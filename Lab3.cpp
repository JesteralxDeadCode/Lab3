#include <iostream>

using namespace std;

void zad1()
{
	int x = 0, result;
	cout << "Введите X:";
	cin >> x;

	result = x > 0 ? x - 12: x == 0 ? 5: (int)pow(x, 2);
	cout<<"x = " << result;
}
void zad2()
{
	int age;
	cout << "Введите ваш возраст:";
	cin >> age;
	if (age < 18 || age > 59)
	{
		cout << "Непризывной возраст";
	}
	else if (age <= 27 && age >= 18)
	{
		cout << "вы подлежите призыву на срочную службу или можете служить по контракту";
	}
	else if (age <= 59 && age >= 28)
	{
		cout << "вы можете служить по контракту";
	}
	else
	{
		cout << "Неверный возраст";
	}
}
void zad3()
{
	int i;
	cout << "Введите тип расписания (1 или 2):";
	cin >> i;
	if (i == 1)
	{
		int day = 0;
		cout << "Введите ден недели:";
		cin >> day;
		switch (day)
		{
		case 1:
			cout << "Расписание на понедельник !";
			break;
		case 2:
			cout << "Расписание на вторник !";
			break;
		case 3:
			cout << "Расписание на среду !";
			break;
		case 4:
			cout << "Расписание на четверг !";
			break;
		case 5:
			cout << "Расписание на пятницу !";
			break;
		case 6:
			cout << "Расписание на суботу !";
			break;
		case 7:
			cout << "Расписание на воскресенье !";
			break;
		default:
			cout << "Ошибка";
			break;
		}
	}
	else if (i == 2)
	{
		int day = 0, dayN;
		double dayX = 0;

		cout << "Введите день семестра:";
		cin >> day;
		if (day <= 0)
		{
			cout << "День не может быть меньше !";
		}
		else if (day > 126)
		{
			cout << "Выход за диапозон !";
		}
		else
		{
			cout << "выбирите с какого дня начинаеться учебный симестр\n"
				<< "Понедельник - 1\n"
				<< "Вторник - 2\n"
				<< "Среда - 3\n"
				<< "Четверг - 4\n"
				<< "пятница - 5\n"
				<< "Субота - 6\n"
				<< "Воскресенье - 7\n"
				<< "ваш вариант:";
				cin >> dayN;
				if (dayN > 7 || dayN < 1)
				{
					cout << "Неверный вариант";
				}
				else
				{
					dayX = (day % 7);
					dayX += dayN;
					switch ((int)dayX)
					{
					case (1):
						cout << "Расписание на понедельник !";
						break;
					case 2:
						cout << "Расписание на вторник !";
						break;
					case 3:
						cout << "Расписание на среду !";
						break;
					case 4:
						cout << "Расписание на четверг !";
						break;
					case 5:
						cout << "Расписание на пятницу !";
						break;
					case 6:
						cout << "Расписание на суботу !";
						break;
					case 7:
						cout << "Расписание на воскресенье !";
						break;
					}
				}
		}
	}
	else
	{
		cout << "неверное число";
	}
}
void zad4()
{
	int nub = 0, result = 0;
	cout << "Введите число:";
	cin >> nub;
	if ((nub / 10) > 0)
	{
		do
		{
			result += nub % 10;
			nub /= 10;
		} while ((nub / 10) > 0);
		result += nub;
	}
	else
	{
		result = nub;
	}
	cout << "Сумма ровна:" << result;
}
void zad5()
{
	int age;
	cout << "Введите год:";
	cin >> age;
	if (age > 0)
	{
		age %= 12;
		switch (age)
		{
		case 0:
			cout << "сейчас год Обезьяна";
			break;
		case 1:
			cout << "сейчас год Петух";
			break;
		case 2:
			cout << "сейчас год Собака";
			break;
		case 3:
			cout << "сейчас год Свинья";
			break;
		case 4:
			cout << "сейчас год Крыса";
			break;
		case 5:
			cout << "сейчас год Бык";
			break;
		case 6:
			cout << "сейчас год Тигр";
			break;
		case 7:
			cout << "сейчас год Кролик";
			break;
		case 8:
			cout << "сейчас год Дракон";
			break;
		case 9:
			cout << "сейчас год Змея";
			break;
		case 10:
			cout << "сейчас год Лошадь";
			break;
		case 11:
			cout << "сейчас год Овца";
			break;
		}
	}
	else
	{
		cout << "ошибка";
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "\n" << "Задание 1" << "\n";
	zad1();
	cout << "\n" << "Задание 2" << "\n";
	zad2();
	cout << "\n" << "Задание 4" << "\n";
	zad3();
	cout << "\n" << "Задание 3" << "\n";
	zad4();
	cout << "\n" << "Задание 5" << "\n";
	zad5();
}

