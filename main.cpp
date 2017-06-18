#include "module1.h"

void main()

{

	string mas;

	int sdvig, N;

	cout << "Enter text for codding: ";

	std::getline(std::cin, mas);

	cout << "Enter key (sdvig): ";

	cin >> sdvig;

	KOD box(sdvig);

	int c = 1;

	while (c != 0)

	{

		cout << "0 - exit "<<endl;

		cout << "1 - KOD "<<endl;

		cout << "2 - UNKOD "<<endl;

		cin>>c;

		if (c == 1) 

		{

			mas = box.shifr(mas);//�������

			cout << "KOD: " << mas<<endl;

		}

		if (c == 2) 

		{

			mas = box.rashifr(mas);//����������

			cout << "UNKOD: " << mas<<endl;

		}

	}

	system("pause");

}
