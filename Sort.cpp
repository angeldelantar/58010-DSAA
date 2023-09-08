#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int numbers[] = {1,2,3,4,5,6,7,8,9,10};
	int arraySize = sizeof(numbers) / sizeof(numbers[0]);
	std::sort(numbers, numbers + arraySize);
	
	for (int i = 0; i < arraySize; i++){
		cout << numbers[i] << " ";
	}
	
	return 0;
}
