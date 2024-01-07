#include <iostream>

int main()
{
	int nums[] = { 1, 2, 3, 4, 5 };
	int nums2[5] = { 1, 2, 3, 4, 5 };
	std::cout << sizeof(nums) << std::endl;
	std::cout << sizeof(nums)/sizeof(nums[0]) << std::endl;
	std::cout << std::size(nums) << std::endl;

	// declare an array of 20 integers an populate it with random numbers
	int numbers[20];
	for (int i = 0; i < 20; i++)
	{
		numbers[i] = rand() % 100;
	}

	// display the array
	std::cout << "The unsorted array is: " << std::endl;
	for (int i : numbers)
		std::cout << i << " ";
	std::cout << std::endl;

	// sort the array
	bool swapped = true;
	int n = 19; // last item to compare
	while (swapped)
	{
		swapped = false;
		int maxn = 1;
		for (int j = 0; j < n; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
				maxn = j;
				swapped = true;
			}
		}
		n = maxn;
	}

	// display the sorted array
	std::cout << "The sorted array is: " << std::endl;
	for (auto i : numbers)
		std::cout << numbers[i] << " ";
	std::cout << std::endl;

}
