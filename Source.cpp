#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	while (1)
	{
		setlocale(LC_ALL, "Russian");
		int z = 0; int vs = 0; int nz = 0;
		cout << "�������� �������� 1 -����������, 0 - �����" << endl;
		cin >> z;
		if (z == 0)
		{
			break;
		}
		srand(time(NULL));
		int m, n;
		cout << "������� n" << endl;
		cin >> n;
		m = n;
		int** arr = new int* [m];
		for (int i(0); i < m; i++)
			arr[i] = new int[n];



		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				
				arr[i][j] = rand() % 10;
				
			}
		}
		
		cout << "������: " << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{

				cout << arr[i][j]<<"\t";

			}
			cout << endl;
		}
		int j = 1;
		for (int i = 0; i < m; i++)
		{   
			for ( ;j < n; j++)
			{
				if (arr[i][j]%2==0)
				{
					vs++;
				}
				
			}
			j++;

		}
		j = n;
		for (int i=0;i<m;i++)
		{
			for ( int j=0;j<i;j++)
			{
				if (arr[i][j]%2==0)
				{
					nz++;
				}

			}
			
		}

		cout << "���� ������� ���������= " << vs << endl;
		cout << "���� ������� ���������= " << nz << endl;
		if (vs > nz)
		{
			cout << "���� ������" << endl;
		}
		else
		{
			if (vs < nz)
			{
				cout << "���� ������" << endl;
			}
			else
			{
				cout << "���� � ���� �������" << endl;
			}
		}




	}

	system("pause");

	return 0;
}