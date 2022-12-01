// Musor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int sum1 = 1;
    int sum2 = 1;
    for (int i = 0; i < row; i++)
    {
        int j = 2;
        if (arr[i][j] == arr[i + 1][j])
            sum1++;
    }

    cout << sum1;




    int sort;

    for (int i = 0; i < row; i++)
    {
        sort = arr[i][2];
        for (int j = i + 1; j < row; j++)
        {
            if (arr[i][2] > arr[j][2])
            {
                arr[i][2] = arr[j][2];
                arr[j][2] = sort;
            }
        }

    }


    int sum = 0;
    for (int i = 1; i < row; i++)
    {
        int j = 2;
        if (arr[i][j] == arr[i - 1][j])
            sum++;
    }

    cout << sum;



    int max2 = 0;
    int k2 = 3;

    for (int i = 0; i < row; i++)
    {
        int sort = 0;

        for (int j = i; j < row; j++)
        {
            if (arr[i][k2] == arr[j][k2])
            {
                sort++;
                if (sort > max)
                {
                    max = sort;
                }
            }
        }
    }
    cout << k2 << " = " << max2;  
       




#include <iostream>
#include <iomanip>
    using namespace std;

    int main()
    {
        const int row = 5;
        const int col = 4;
        int arr[row][col] = { {1,3,4,4},
                                 {2,3,3,2},
                                 {3,3,4,2},
                                 {4,3,3,4},
                                 {5,3,4,5}
        };



        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << setw(4) << arr[i][j];
            }
            cout << endl;
        }


        for (int n = 0; n < col - 1; n++)
        {
            int max = 0;
            int num = 0;
            int k = 1;

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
                            num = arr[i][k];
                        }
                    }
                }
            }
            cout << num << " = " << max;
            cout << endl;


            int max2 = 0;
            int num2 = 0;
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
                            num2 = arr[i][y];
                        }
                    }
                }
            }
            cout << num2 << " = " << max2;

            if (max > max2)
            {
                for (int i = 0; i < row; i++)
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][y];
                    arr[i][y] = temp;
                }
            }
            k++;
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







#include <iostream>
#include <iomanip>
    using namespace std;

    int main()
    {
        const int row = 5;
        const int col = 4;
        int arr[row][col] = { {1,3,4,4},
                                 {2,3,3,2},
                                 {3,3,4,2},
                                 {4,3,3,4},
                                 {5,3,4,5}
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

        for (int n = 0; n < col - 1; n++)          // Начало расчёта
        {
            int max = 0;
            int k = 1;

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
            k++;
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



#include <iostream>
#include <iomanip>
    using namespace std;

    int main()
    {
        const int row = 5;
        const int col = 4;
        int arr[row][col] = { {1,3,4,4},
                                 {2,3,3,2},
                                 {3,3,4,2},
                                 {4,3,3,4},
                                 {5,3,4,5}
        };



        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << setw(4) << arr[i][j];
            }
            cout << endl;
        }

        int max = 0;
        int num = 0;
        int k = 1;

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
                        num = arr[i][k];
                    }
                }
            }
        }
        cout << num << " = " << max;
        cout << endl;


        int max2 = 0;
        int num2 = 0;
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
                        num2 = arr[i][y];
                    }
                }
            }
        }
        cout << num2 << " = " << max2;

    }


    {5, 9, 8, 4},
    { 7,6,3,2 },
    { 7,6,4,9 },
    { 8,1,3,6 },
    { 7,2,4,1 }


    {0, 1, 0, 1},
    { 0,1,0,1 },
    { 0,1,0,1 },
    { 0,1,0,1 },
    { 0,1,0,1 }

    {1, 3, 4, 4},
    { 2,3,3,2 },
    { 3,3,4,2 },
    { 4,3,3,4 },
    { 5,3,4,5 }

                          {0,2,4,5},
                          {0,2,4,5},
                          {2,2,4,9},
                          {4,4,5,0},
                          {5,8,5,0}
}



