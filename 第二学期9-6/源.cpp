#include<iostream>  
using namespace std;
int main()
{
	int wallet;
	cin >> wallet;
	bool jug = false;
	int x, y, z;
	int x_max = wallet / 5 + 2;
	int y_max = wallet / 3 + 2;
	int z_max = wallet * 3 + 2;
	for (x = 0; x <= x_max; x++)
	{
		for (y = 0; y <= y_max; y++)
		{
			for (z = 0; z <= z_max; z += 3)
			{
				if (5 * x + 3 * y + z / 3 == wallet && x + y + z == 100)
				{
					jug = true;
					cout << "cock:" << x << " "
						<< "hen:" << y << " " << "chick:" << z<< endl;
				}
			}
		}
	}
	if (jug == false)
		cout << "No Solution";
	return 0;
}