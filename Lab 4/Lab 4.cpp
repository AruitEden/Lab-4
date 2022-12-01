// Lab 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int row = 5;
    const int col = 4;
    int arr[row][col] = { };


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " Input ara [" << i << "]" << "[" << j << "]" << " = ";
            cin >> arr[i][j];
            cout << "\r\n";
        }
    }

    cout << endl;

    for (int i = 0; i < row; i++)             //Вывод массива
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    cout << endl;



    for (int xuy = 0; xuy < col; xuy++)
    {

        for (int k = 0; k < col - 1; k++)          // Начало расчёта
        {
            int max = 0;

            for (int i = 0; i < row; i++)
            {
                int sort = 0;

                for (int j = i; j < row; j++)
                {
                    if (arr[i][k] == arr[j][k])
                    {
                        sort++;
                        if (sort > max)
                        {
                            max = sort;
                        }
                    }
                }
            }


            int max2 = 0;
            int y = k + 1;

            for (int i = 0; i < row; i++)
            {
                int sort = 0;

                for (int j = i; j < row; j++)
                {
                    if (arr[i][y] == arr[j][y])
                    {
                        sort++;
                        if (sort > max2)
                        {
                            max2 = sort;
                        }
                    }
                }
            }


            if (max > max2)
            {
                for (int i = 0; i < row; i++)
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][y];
                    arr[i][y] = temp;
                }
            }
        }
    }



    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

}








