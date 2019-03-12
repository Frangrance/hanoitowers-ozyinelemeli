#include <stdafx.h>
#include <stdio.h>
#include <iostream>
#include <ctime>

using namespace std;

void Hesapla(int n, char kaynak, char hedef, char yardimci)
{
	if (n > 1)
	{
		Hesapla(n - 1, kaynak, yardimci, hedef);
		Hesapla(1, kaynak, hedef, yardimci);
		Hesapla(n - 1, yardimci, hedef, kaynak);
	}
	else
		cout << "Ustteki diski " << kaynak << "'den " << hedef <<"'ye tasi"<< endl;
}
int main()
{
        clock_t t1, t2;
	cout << "Disk sayisini giriniz: ";
	
	int diskSayisi;
	cin >> diskSayisi;
	t1 = clock();
	Hesapla(diskSayisi, '1', '2', '3');
	
	t2 = clock();
	float diff = (((float)t2 - (float)t1) / 1000000.0F) * 1000;
	printf("%f""ms", diff);

	system("pause");
}