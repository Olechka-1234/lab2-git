#ifndef MODULE1_h

#define MODULE1_h

#include <iostream>

#include <string>

using namespace std;



class KOD {

private:

	int key;	

public:

	KOD(int);

	string shifr(string str);

	string rashifr(string str);

	~KOD();

};



KOD::KOD(int s)

{

	key = s;

}



KOD::~KOD()

{

}



string KOD::shifr(string str)

	// str - ������ �������� ��� ����������

{

	for (int i=0;i<str.length();i++) 

		if (('a'<=str[i]) && (str[i] <='z') )

		{

			if (char(int(str[i]) + key) > 'z') str[i] = char(int(str[i]) + key - 26) ;//��������-�������� ������ �����

			else 

				if (char(int(str[i]) + key) < 'a') str[i] = char(int(str[i]) + key + 26) ;//��������-�������� ������ �����

				else str[i] = char(int(str[i]) + key);

		}

	return str;

}



string KOD::rashifr(string str)

	// str - ������ �������� ��� ����������

{

	for (int i=0;i<str.length();i++) 

		if (('a'<=str[i]) && (str[i] <='z') )

		{

			if (char(int(str[i]) - key) > 'z') str[i] = char(int(str[i]) - key - 26) ;//��������-�������� ������ �����

			else 

				if (char(int(str[i]) - key) < 'a') str[i] = char(int(str[i]) - key + 26) ;//��������-�������� ������ �����

				else str[i] = char(int(str[i]) - key);

		}

	return str;

}



#endif
