#include <iostream>

int** create_two_dim_array(int rows, int colums){
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++){
        arr[i] = new int[colums]{};
    }
    return arr;
}

void fill_two_dim_array(int** arr, int rows, int colums){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < colums; j++){
            arr[i][j] = (i + 1) * (j + 1);
        }
    }
}
void print_two_dim_array(int** arr, int rows, int colums){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < colums; j++){
            std::cout << arr[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}

void delete_two_dim_array(int** arr, int rows, int colums){
    for (int i = 0; i < rows; i++){
        delete[] arr[i];
    }
    delete arr;
}

int main(int argc, char** argv)
{
    std::cout << "Enter the number of rows: ";
    int rows{};
    std::cin >> rows;
    std::cout << std::endl;
    std::cout << "Enter the number of colums: ";
    int colums{};
    std::cin >> colums;
    std::cout << std::endl;
    std::cout << "Multiplication table:" << std::endl;
    int** arr = create_two_dim_array(rows, colums);
    fill_two_dim_array(arr, rows, colums);
    print_two_dim_array(arr, rows, colums);
    delete_two_dim_array(arr, rows, colums);
    
	
	return 0;
}
