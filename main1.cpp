#include <iostream>

double* createArray(int size){
    return  new double[size]{};
}

int main(int argc, char** argv)
{
    std::cout << "Enter the array size: ";
    int size{};
    std::cin >> size;
    double* arr = createArray(size);
    std::cout << std::endl;
    std::cout <<"Array: ";
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    
    delete[] arr;
	
	return 0;
}

