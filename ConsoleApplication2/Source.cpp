#include <stdlib.h>
#include <iostream>

using namespace std;

void main()
{
	
	int num = 142857;
	int m = 4;

	int num2 = m*num;

	int temp = num;
	int temp2 = num2;

	int t, t2;
	int c = 0;
	
	int a[50], a2[50];
	
	while(temp!=0)
	{
		t = temp % 10;
		t2 = temp2 % 10;

		a[c] = t;
		a2[c] = t2;

		temp /= 10;
		temp2 /= 10;

		c++;
	}

	int count = 0;

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i]==a2[j])
			{
				count++;
			}
		}
	}

	if (count==c)
	{
		cout << num << " is cyclic\n";
	}
	else
	{
		cout << num << " is not cyclic";
	}
	cout << endl;
	system("pause");
}

