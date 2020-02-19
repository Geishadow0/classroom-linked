using namespace std;
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct simpul
{
	char dat[10];
	struct simpul *next;
	
}; struct simpul* temp, temp, * head = NULL, * ptr = NULL;

void main() {
	char masukan[10];
	do
	{
		cout << "Input data: "; gets_s(masukan);
		if (strlen(masukan)>0)
		{
			if (strlen(masukan)>0)
			{
				for (int i = strlen(masukan); i < 10; i++)
				{
					strcat_s(masukan, " ");
					temp = (struct simpul *)malloc(sizeof(struct simpul));
					strcpy(temp->dat, masukan);
					temp->next = NULL;
					if (head==NULL)
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
				{

				}
			}
		}
	} while (strlen (masukan)>0);
	if (head!=NULL)
	{
		ptr = head;
		cout << "[" << ptr << "] [" << ptr->dat << "] [" << ptr->next << "]\t";
		ptr = ptr->next;
	}while (ptr!=NULL)
	{

	}
}