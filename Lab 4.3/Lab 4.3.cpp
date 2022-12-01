


#include <iostream>
#include <iomanip>
using namespace std;

int main()                    // Код каторый считает общее количество повторений
{
    const int row = 5;
    const int col = 4;
    int arr[row][col] = { { 5,9,8,4 },
                          { 7,6,3,2 },
                          { 7,6,4,9 },
                          { 8,1,3,6 },
                          { 7,2,4,1 }
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


    for (int x = 0; x < col; x++)              // Сортировка по цифрам
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = i + 1; j < row; j++)
            {
                if (arr[i][x] > arr[j][x])
                {
                    int sort = arr[i][x];
                    arr[i][x] = arr[j][x];
                    arr[j][x] = sort;
                }
            }

        }
    }

    for (int mew = 0; mew < col; mew++)   //Сортировка по столбцам
    {

        for (int k = 0; k < col - 1; k++)
        {
            int max = 0;

            for (int i = 0; i < row; i++)
            {
                for (int j = i + 1; j < row; j++)
                {
                    if (arr[i][k] == arr[j][k])
                    {
                        max++;
                    }
                }
            }

            int y = k + 1;
            int max2 = 0;

            for (int i = 0; i < row; i++)
            {
                for (int j = i + 1; j < row; j++)
                {
                    if (arr[i][y] == arr[j][y])
                    {
                        max2++;
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


/*Test 1

   1   3   4   4
   2   3   3   2
   3   3   4   2
   4   3   3   4
   5   3   4   5

   1   2   3   3
   2   2   3   3
   3   4   4   3
   4   4   4   3
   5   5   4   3

*/

/*
Test 2

   5   9   8   4
   7   6   3   2
   7   6   4   9
   8   1   3   6
   7   2   4   1

   1   1   3   5
   2   2   3   7
   4   6   4   7
   6   6   4   7
   9   9   8   8
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
{ 1,3,4,4 },
                          { 2,3,3,2 },
                          { 3,3,4,2 },
                          { 4,3,3,4 },
                          { 5,3,4,5 }
{ 0,2,4,5 },
                          { 0,2,4,5 },
                          { 2,2,4,9 },
                          { 4,4,5,0 },
                          { 5,8,5,0 }

{ 0,1,0,1 },
                          { 0,1,0,1 },
                          { 0,1,0,1 },
                          { 0,1,0,1 },
                          { 0,1,0,1 }

{ 5,9,8,4 },
                          { 7,6,3,2 },
                          { 7,6,4,9 },
                          { 8,1,3,6 },
                          { 7,2,4,1 }

*/