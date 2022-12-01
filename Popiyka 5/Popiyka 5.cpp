


#include <iostream>                      
#include <iomanip>
using namespace std;


void print(const int nrow, const int ncol, int ara[5][4])        //Вывод массива
{

    for (int i = 0; i < nrow; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << setw(4) << ara[i][j];
        }
        cout << endl;
    }
}

int main()
{
    const int row = 5;
    const int col = 4;
    int ara[col] = {};
    int arr[row][col] = { { 5,9,8,4 },
                          { 7,6,3,2 },
                          { 7,6,4,9 },
                          { 8,1,3,6 },
                          { 7,2,4,1 }
    };



    print(row, col, arr);

    cout << endl;


    for (int k = 0; k < col; k++)          // Начало расчёта
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
        ara[k] = max;
    }

    cout << endl;

    for (int e = 0; e < col; e++)
    {
        for (int i = 0; i < col - 1; i++)
        {
            int y = i + 1;

            if (ara[i] > ara[y])
            {
                int temp = ara[i];
                ara[i] = ara[y];
                ara[y] = temp;


                for (int u = 0; u < row; u++)
                {
                    int temp2 = 0;
                    temp2 = arr[u][i];
                    arr[u][i] = arr[u][y];
                    arr[u][y] = temp2;

                }
            }
        }

    }

    print(row, col, arr);
}


/*
Test 1

   1   3   4   4
   2   3   3   2
   3   3   4   2
   4   3   3   4
   5   3   4   5

   1   4   4   3
   2   2   3   3
   3   2   4   3
   4   4   3   3
   5   5   4   3
*/

/*
Test 2
   0   1   0   1
   0   1   0   1
   0   1   0   1
   0   1   0   1
   0   1   0   1

   0   1   0   1
   0   1   0   1
   0   1   0   1
   0   1   0   1
   0   1   0   1
*/

/*
Test 3
   0   2   4   5
   0   2   4   5
   2   2   4   9
   4   4   5   0
   5   8   5   0

   0   2   0   4
   0   2   0   4
   2   2   5   4
   4   4   5   5
   5   8   9   5
*/

/*
Test 4
   5   9   8   4
   7   6   3   2
   7   6   4   9
   8   1   3   6
   7   2   4   1

   4   9   8   5
   2   6   3   7
   9   6   4   7
   6   1   3   8
   1   2   4   7
*/


