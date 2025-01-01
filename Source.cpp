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

	cout << "1 - ��������\n2 - �������\n3 - ������� ���������\n4 - �����\n";

	do
	{
		try {
			cin >> choise;

			switch (choise)
			{
			case ADD:
				cout << "������� �������� ��� ����������: ";
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
				cout << "������� �������� ��� ������: ";
				cin >> value;
				if (list.search(value) == true)
				{
					cout << "�������� �������\n";
				}
				else
				{
					cout << "������ �������� ���\n";
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