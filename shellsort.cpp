#include <iostream>

// (3n + 1) shell sort
template <typename T>
void shellSort(T *arr, int size)
{
	int k = (size-2)/3;
	int leap = 3*k + 1;

	while(k >= 0)
	{
		std::cout << "Leap size: " << leap << '\n';
		for (int i = leap; i < size; ++i)
			for (int j = i; j >= leap; j-=leap)
			{
				if (arr[j] < arr[j - leap])
				{
					T el = arr[j];
					arr[j] = arr[j-leap];
					arr[j-leap] = el;
				}
			}
		k--;
		leap = 3*k + 1;	
	}
}

int main()
{
	int size;
	std::cout << "Enter array size: " << '\n';
	std::cin >> size;
	int arr[size];
	for (int i = 0; i<size;++i){
		std::cin >> arr[i];
	}

	shellSort(arr, size);

	std::cout << "Sorted array: " << '\n';
	for (int i = 0;i<size;++i){
		std::cout <<arr[i] << "    ";
	}

	std::cout << '\n';
	return 0;
}
