#include <iostream>

using namespace std;

int main()
{
    /*const int size = 3;
    float arr[size]{ 5.7, 6.9, 4.4 };
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << arr[1] << endl;

    arr[2] = 8.8;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }*/

    /*
    Сжать (сдвинуть элементы) массив, удалив из
    него все 0, и заполнить освободившиеся справа элементы
    значениями -1.
    */

    /*const int size = 10;
    int arr[size]{ 5,0,7,9,4,0,4,0,6,3 }; //5,7,9,4,4,6,3,-1,-1,-1

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            for (int j = i + 1; j < size; j++) {
                arr[j-1] = arr[j];
                if (j == size - 1) 
                    arr[j] = -1;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }*/

    /*
    Написать программу, копирующую элементы
    2-х массивов размером 5 элементов каждый в один массив 
    размером 10 элементов следующим образом: сначала
    копируются последовательно все элементы, большие 0,
    затем последовательно все элементы, равные 0, а затем
    последовательно все элементы, меньшие 0.
    */

    /*const int size1 = 5;
    const int size2 = 10;
    int arr1[size1]{ 4,0,7,-5,3 };
    int arr2[size1]{ -8,7,0,0,4 };
    int arr3[size2]; // 4,7,3,7,4,0,0,0,-5,-8

    for (int i = 0, h = 0; i < 3; i++) {
        switch (i)
        {
        case 0:
            for (int j = 0; j < size1; j++) {
                if (arr1[j] > 0) {
                    arr3[h] = arr1[j];
                    h++;
                }
            }
            for (int j = 0; j < size1; j++) {
                if (arr2[j] > 0) {
                    arr3[h] = arr2[j];
                    h++;
                }
            }
            break;
        case 1:
            for (int j = 0; j < size1; j++) {
                if (arr1[j] == 0) {
                    arr3[h] = arr1[j];
                    h++;
                }
            }
            for (int j = 0; j < size1; j++) {
                if (arr2[j] == 0) {
                    arr3[h] = arr2[j];
                    h++;
                }
            }
            break;
        case 2:
            for (int j = 0; j < size1; j++) {
                if (arr1[j] < 0) {
                    arr3[h] = arr1[j];
                    h++;
                }
            }
            for (int j = 0; j < size1; j++) {
                if (arr2[j] < 0) {
                    arr3[h] = arr2[j];
                    h++;
                }
            }
            break;
        }
    }

    for (int i = 0; i < size2; i++) {
        cout << arr3[i] << " ";
    }*/

/*
Пользователь вводит любое целое число А. Необходимо
вывести все целые числа В, для которых А делиться без остатка
на В*В и не делиться без остатка на В*В*В.
*/
/*long A;
cin >> A;
for (int i = 1; i < A; i++) {
    if (A%(i * i) == 0 && A%(i * i * i) != 0)
        cout << i << endl;
}*/
/*
Пользователь вводит целое число А. Программа должна
определить, что куб суммы цифр этого числа равен А*А.
*/
    //int A;
    //cin >> A; // 3
    /*for (int A = 1; A < 100000; A++) {
        int cubeA = A * A * A; // 27
        int sumCube = 0;
        while (cubeA > 0) {
            sumCube += cubeA % 10;
            cubeA /= 10;
        }
        if (A * A == sumCube) {
            cout << A << " Ok" << endl;
        }
    }*/

    /*
    Пользователь вводит прибыль фирмы за год
    (12 месяцев). Необходимо определить месяц, в котором
    прибыль была максимальна и месяц, в котором прибыль
    была минимальна.
    */
    /*
    int arr[12];
    for (int i = 0; i < 12; i++) {
        cin >> arr[i];
    }
    int index_max = 0, index_min = 0;

    for (int i = 1; i < 12; i++) {
        if (arr[index_max] < arr[i]) index_max = i;
        if (arr[index_min] > arr[i]) index_min = i;
    }
    cout << "max = "  << arr[index_max] << " " << index_max + 1 << endl
        << "min = " << arr[index_min] << " " << index_min + 1 << endl;
        */

const int size = 10;
int arr[size]{ 5,9,3,8,0,7,4,3,1,8 };
int temp;
//сортировка выбором
/*int i, j, k;
for (i = 0; i < size; i++) {
    k = i;
    temp = arr[i];
    for (j = i + 1; j < size; j++) {
        if (arr[j] < temp) {
            k = j;
            temp = arr[j];
        }
    }
    if (k != i) {
        arr[k] = arr[i];
        arr[i] = temp;
    }
}*/

//сортировка пузырьком
/*for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}*/
/*
for (int i = 0; i < size; i++) {
    for (int j = size - 1; j > i; j--) {
        if (arr[j] < arr[j - 1]) {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
        }
    }
}
*/

//сортировка вставками
/*int j;

for (int i = 0; i < size; i++) {
    temp = arr[i];
    for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
        arr[j + 1] = arr[j];
    }
    arr[j + 1] = temp;
}
*/

for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
}
