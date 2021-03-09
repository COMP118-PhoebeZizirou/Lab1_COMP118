/* Lab1 - COMP118
   Phoebe Zizirou
*/

#include<iostream>

using namespace std;

//Horizontal Line Function Prototype

void drawHorizontalLine(const int length, const char ch);

//Vertical Line Funtion Prototype

void drawVerticalLine(const int height, const char ch);

//Square Function Prototype

void drawSquare(const int size, const char ch);

//Rectangle Function Prototype

void drawRectangle(const int length, const int height, const char ch);

//Menu Function Prototype

void showMenu();

int main()
{
    int choice, size;
    char symbol;
    int height, length;

    do
    {
        showMenu();
        cin >> choice;

        cout << endl;

        switch (choice)
        {
            case 1:

                //Asking the user to enter values for length and symbol

                cout << "Enter length: ";
                cin >> size;

                cout << endl;

                cout << "Enter symbol: ";
                cin >> symbol;

                //Calling drawHorizontalLine Function

                drawHorizontalLine(size, symbol);

            case 2:
                drawVerticalLine(height, symbol);

            case 3:
                drawSquare(size, symbol);

            case 4:
                drawRectangle(length, height, symbol);

            default:
                cerr << "Wrong Choice!"<<endl;
        }

    } while (choice != 5);

    cout << "Thank you, bye :)";

    return 0;
}

void showMenu()
{
    cout << "1. Draw a horizontal line" << endl;
    cout << "2. Draw a vertical line" << endl;
    cout << "3. Draw a square" << endl;
    cout << "4. Draw a rectangle" << endl;
    cout << "5. Exit" << endl;
    
    cout << endl;
    cout << "Enter your choice:";
}

//Draw horizontal line according to arguments

void drawHorizontalLine(const int length, const char ch)
{
    cout << "I am drawHorizalLine" << endl;

    int i;

    for (i = 0; i < length; i++)
        cout << ch;

    cout << endl;
}

//Draw vertical line according to arguments

void drawVerticalLine(const int height, const char ch)
{
    cout << "I am drawVerticalLine" << endl;

    int i;

    for (i = 0; i < height; i++)
        cout << ch<< endl; 

    cout << endl;
}

//Draw square according to arguments

void drawSquare(const int size, const char ch)
{
    cout << "I am drawSquare" << endl;

    int i, j;
    char arr[100][100];

    //Filling the columns of square

    for (i = 0; i < size; i++)
    {
        arr[i][0] = ch;
        arr[i][size - 1] = ch;
    }

    //Filling the rows of square

    for (j = 1; j < size - 1; j++)
    {
        arr[0][j] = ch;
        arr[size - 1][j] = ch;
    }

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            cout << arr[i][j];
}

//Draw rectangle according to arguments

void drawRectangle(const int length, const int height, const char ch)
{
    cout << "I am drawRectangle" << endl;

    int i, j;
    char arr[100][100];

    //Filling the columns of the Rectangle

    for (i = 0; i < height; i++)
    {
        arr[i][0] = ch;
        arr[i][length - 1] = ch;
    }

    //Filling the rows of the Rectangle

    for (j = 0; j < height; j++)
    {
        arr[0][j] = ch;
        arr[height - 1][j] = ch;
    }

    for (i = 0; i < length; i++)
        for (j = 0; j < height; j++)
            cout << arr[i][j];
}