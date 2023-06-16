#include <iostream>

using namespace std;

main()
{
    int count = 10;

    for (int i = count; i > 0; i--)
    {
        for (int y = 0; y < i; y++)
        {
            cout << " ";
        }

        for (int j = count; j > i; j--)
        {
            cout << i - j;
        }
        cout << endl;
    }
}
