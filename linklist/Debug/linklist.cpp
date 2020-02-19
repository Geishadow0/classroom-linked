#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Simpul {
	char dat[10], masukan[10];
	struct Simpul* next;
};
struct Simpul* temp, * head = NULL, * ptr = NULL, di;

int main() {
	cout << "Entry Serial Data" << endl;
	int j = 0;
	char cari[10];
	do
	{
		int i = j++;
		cout << "Data Ke-" << j << " : ";
		gets_s(di.masukan);
		if (strlen(di.masukan) > 0)
		{
			if (strlen(di.masukan) > 0)
			{
				temp = (struct Simpul*) malloc(sizeof(struct Simpul));
				strcpy_s(temp->dat, di.masukan);
				temp->next = NULL;
				if (head == NULL)
				{
					head = temp;
					ptr = head;
				}
				else
				{
					ptr->next = temp;
					ptr = ptr->next;
				}
			}
		}
	} while (strlen(di.masukan) > 0);
	int i = j - 1;
	cout << "Jumlah Data : " << i << endl;
	cout << endl;
	if (head != NULL)
	{
		ptr = head;
		cout << "Hasil Entry Data : " << endl;
		do
		{
			cout << "[" << ptr->dat << "] --> Alamat PTR " << ptr << " --> Next PTR " << ptr->next << endl;
			ptr = ptr->next;
		} while (ptr != NULL);
	}
	cout << endl; bool loop;
	loop = true;
	do
	{
		cout << "Data yang anda cari : ";
		gets_s(cari);
		if (strlen(cari) != 0) {
			ptr = head;
			cout << "Data ini ada pada alamat : " << ptr << endl;
		}
		else
		{
			ptr = head;
			cout << "Data ini ada pada alamat : " << ptr->next << endl;
		}
	} while (strlen(cari) > 0);

}
