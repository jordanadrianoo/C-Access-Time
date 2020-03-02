#include <iostream>
#include <time.h>
#include <vector>

using namespace std;


int main()
{

	clock_t start;
	clock_t stop;
	double elapsed_time;
	int delay = 10000000;

	int nums[] = { 1,2,3,4,5 };
	vector<int> num = { 1,2,3,4,5 };

	cout << "Array Access Time ";;
	start = clock();

	for (int i = 0; i < delay; i++)
	{
		nums[0];
	}
	stop = clock();

	elapsed_time = double(stop - start)/CLOCKS_PER_SEC;
	cout << elapsed_time << endl;


	cout << "Vector Access Time ";;
	start = clock();

	for (int i = 0; i < delay; i++)
	{
		num[0];
	}
	stop = clock();

	elapsed_time = double(stop - start) / CLOCKS_PER_SEC;
	cout << elapsed_time << endl;
	system("pause");
}
