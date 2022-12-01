



#include <iostream>
#include <iomanip>
using namespace std;


void print(const int nrow, const int ncol, int ara[5][4])
{

    for (int i = 0; i < nrow; i++)             //Вывод массива
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << setw(4) << ara[i][j];
        }
        cout << endl;
    }
}

void sort(const int nrow, int ara[5][4], int nk, int nmax)
{
    for (int i = 0; i < nrow; i++)
    {
        int sort = 0;

        for (int j = i; j < nrow; j++)
        {
            if (ara[i][nk] == ara [j][nk])
            {
                sort++;
                if (sort > nmax)
                {
                    nmax = sort;
                }
            }
        }
    }
}


int main()
{
    const int row = 5;
    const int col = 4;
    int arr[row][col] = { { 1,3,4,4 },
                          { 2,3,3,2 },
                          { 3,3,4,2 },
                          { 4,3,3,4 },
                          { 5,3,4,5 }
    };



    print(row, col, arr);

    cout << endl;



    for (int xuy = 0; xuy < col; xuy++)
    {

        for (int k = 0; k < col - 1; k++)          // Начало расчёта
        {
            int max = 0;

            sort(row, arr, k, max);
           
            int max2 = 0;
            int y = k + 1;

            sort(row, arr, y, max2);


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



    print(row, col, arr);

}
