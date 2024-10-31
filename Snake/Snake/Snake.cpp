#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

pair <int, int> spawnFood(char world[20][20])
{
    int x = rand() % 20;
    int y = rand() % 20;

    while (world[x][y] != '.'
    {
        x = rand() % 20;
        y = rand() % 20;
    }
    return { x, y };
}




int main()
{
    char world[20][20];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            world[i][j] = '.';
        }
    }

    vector<pair<int, int>> snake = { {10, 10} };

    vector<pair<int, int>> food = {};

    food.push_back(spawnFood(world));
    food.push_back(spawnFood(world));
    food.push_back(spawnFood(world));

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << world[i][j];
        }
        cout << endl;
    }


    for (auto f : food)
        world[f.first][f.second] = 'F';

    system("cls");
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout<<world[i][j];
        }
        cout << endl;
    }


    return 0;
}


