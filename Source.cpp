#include "List.h"

int main()
{
	setlocale(LC_ALL, "rus");
	List list;
	int choise, value;
	enum MENU {
		EXIT = 0,
		ADD,
		PRINT,
		DELETE,
		SEARCH
	};

	cout << "1 - Добавить\n2 - Вывести\n3 - Удадить последний\n4 - Поиск\n";

	do
	{
		try {
			cin >> choise;

			switch (choise)
			{
			case ADD:
				cout << "Введите значение для добваления: ";
				cin >> value;
				list.append(value);
				break;
			case PRINT:
				list.print();
				break;
			case DELETE:
				list.removeLast();
				break;
			case SEARCH:
				cout << "Введите значение для поиска: ";
				cin >> value;
				if (list.search(value) == true)
				{
					cout << "Значение найдено\n";
				}
				else
				{
					cout << "Такого значения нет\n";
				}
				break;
			}
		}
		catch (const char* exc)
		{
			puts(exc);
		}
	} while (choise != 0);

	return 0;
}