


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int row = 5;
    const int col = 4;
    int arr[row][col] = {    {0,1,0,1},
                             {0,1,0,1},
                             {0,1,0,1},
                             {0,1,0,1},
                             {0,1,0,1}
    };



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

/*
Test 3
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