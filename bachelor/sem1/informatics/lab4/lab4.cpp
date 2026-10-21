#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    const int n = 20;
    int arr[n];
    int NumToDelete;

    srand(time(nullptr));

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < n; i++)
    {
            cout << arr[i] << " ";
    }

    cout << "\n" << "what do u want to delete? ";
    cin >> NumToDelete;

    for (int i = NumToDelete - 1; i < n - 1; i++)
    {
         arr[i] = arr[i + 1];
    }
    
    int even_num = -1;
    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            even_num = i;
            break;
        }
    }

    
    for (int i = NumToDelete; i > even_num + 1; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[even_num + 1] = arr[even_num] + 2;
    NumToDelete++;
    ;

    for (int i = 0; i < n; i++)
    {
            cout << arr[i] << " ";
    }


    return 0;
}