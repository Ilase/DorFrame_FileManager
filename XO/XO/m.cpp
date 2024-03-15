#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    setlocale(0, "");
    int size;
    cin >> size;

    vector < vector <int> > field(size, vector <int>(size));


    int center = size / 2;
    int xS = 0, yS = 0, endSize = size - 1;
    int y = 0, x = xS;
    cout << "Создание квадратов: " << "(Центр: " << center << ")" << endl;


    for (int z = 0; z < center; z++) {
        if (xS < endSize) {
            cout << "Квадрат: " << z + 1 << " " << endl;
            for (y = yS; y <= endSize; y++) {
                cout << "Строка: " << y << " " << endl;

                for (x = xS; x <= endSize; x++)
                {
                    cout << x << " ";

                    if (x == xS || y == yS || x == endSize || y == endSize) {
                        field[y][x] = 1;
                    }
                    else {
                        field[y][x] = 0;
                    }

                }
                cout << endl;

            }
            cout << endl << xS << " " << yS << " " << endSize << endl;


            xS = xS + 2;
            yS = yS + 2;
            endSize = endSize - 2;
            cout << endl << xS << " " << yS << " " << endSize << endl;

            system("pause");
        }
        else break;
    }

    cout << endl << "Вывод квадрата:" << endl << endl;



    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) {
            if (field[i][j] == 1) {
                cout << "##";

            }
            else {
                cout << "``";
            }
        }
        cout << endl;
    }
    system("pause");
    system("cls");
    main();
    return 0;
}
