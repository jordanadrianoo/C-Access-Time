#include <iostream>
#include <time.h>
#include <vector>

using namespace std;


int main()
{

	clock_t start;
	clock_t stop;
	double elapsed_time;

	int nums[] = { 1,2,3,4,5 };
	vector<int> num = { 1,2,3,4,5 };


	start = clock();

	for (int i = 0; i < 100000000; i++)
	{

	}
	stop = clock();

	elapsed_time = double(stop - start)/CLOCKS_PER_SEC;
	cout << elapsed_time << endl;
}