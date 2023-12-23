/*#include <iostream>
#include <fstream>
using namespace std;

struct Matrix
{
    int** matrix;
    int Summ_ell;
    Matrix(){}
};

Matrix* Read_Matrix(ifstream&, const int&, const int&);

void Print_Matrix(Matrix*, ofstream&, const int&, const int&);

bool Is_Symmetric_Matrix(Matrix*, const int&, const int&);

void Eval_Summ_elem_matrix(Matrix*, const int&, const int&);

void Sort_Matrix(Matrix*, const int&, const int&);


int main() {
    ifstream input("Matrix_input.txt");
    ofstream output("Matrix-output.txt");
    int l, n;
    input >> l >> n;

	Matrix* Array_matrix = Read_Matrix(input, l, n);

	Matrix* Array_res = new Matrix[l];
	int count = 0;
	for (int i = 0; i < l; ++i) {
		if (Is_Symmetric_Matrix(Array_matrix, n, i)) {
			count++;

			Eval_Summ_elem_matrix(Array_matrix, n, i);

			Array_res[i] = Array_matrix[i];
		}
	}

	Sort_Matrix(Array_res, count, n);

	Print_Matrix(Array_res, output, count, n);


    return 0;
}

Matrix* Read_Matrix(ifstream& input, const int& l, const int& n) {
	Matrix* arr = new Matrix[l];
	for (int i = 0; i < l; i++) {

		arr[i].matrix = new int* [n];

		for (int j = 0; j < n; j++) {

			arr[i].matrix[j] = new int[n];

			for (int k = 0; k < n; k++)
				input >> arr[i].matrix[j][k];
		}
	}

	input.close();

	return arr;
}

void Print_Matrix(Matrix* arr, ofstream& output, const int& count, const int& n) {
	
	for (int i = 0; i < count; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				output << arr[i].matrix[j][k];
			}
			output << endl;
		}
		output << endl;
		output << endl;
	}

	output.close();
}

bool Is_Symmetric_Matrix(Matrix* arr, const int& n, const int& index) {
	int i = 1, j = 0;
	while (j < n - 1)
	{
		while (i < n - j)
		{
			if (arr[index].matrix[i][j] != arr[index].matrix[j][i]) return false;
			else i++;
		}
		j++;
		i = j + 1;
	}
	return true;
}

void Eval_Summ_elem_matrix(Matrix* arr, const int& n, const int& index) {
	int Summ = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			Summ += arr[index].matrix[i][j];
		}
	}
	arr[index].Summ_ell = Summ;
}

void Sort_Matrix(Matrix* arr, const int& count, const int& n) {

	for (int i = 0; i < count; ++i) {
		for (int j = i; j < count - i - 1; ++j) {
			if (arr[j].Summ_ell > arr[j + 1].Summ_ell)
				swap(arr[j], arr[j + 1]);
		}
	}

}*/