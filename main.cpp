#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "Enter the size of the array: ";
    int size{};
    std::cin >> size;
    std::cout<<std::endl;
    int* arr{ new int[size]{} };
    for (int i = 0; i < size; i++){
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];

    }
    std::cout<<std::endl;
    std::cout << "The entered array: ";
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    delete[] arr;
	
	return 0;
}

