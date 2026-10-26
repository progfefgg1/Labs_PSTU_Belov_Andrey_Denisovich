#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int N = 100;
    int arr[N];
    int NumToDelete;
    const int NewN = N - 1;
    int NewArr[NewN];
    const int NewNewN = N;
    int NewNewArr[NewNewN];
    int EvenIndex;
    srand(time(0));

    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100;
    }

    cout << "Our massive: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    // delete number
    cout << "\n" << "What do u want to delete? (tell me index): ";
    cin >> NumToDelete;

    for (int i = 0; i < NewN; i++) 
    {
        if (i < NumToDelete) 
        {
            NewArr[i] = arr[i];
        } 
        else 
        {
            NewArr[i] = arr[i + 1];
        }
    }

    for (int i = 0; i < NewN; i++) 
    {
        if (NewArr[i] % 2 == 0) 
        {
            EvenIndex = i;
            break;
        }
    }

    for (int i = 0; i < NewNewN; i++)
    {
        if (i <= EvenIndex)
        {
            NewNewArr[i] = NewArr[i];
        }
        else if (i == EvenIndex + 1)
        {
            NewNewArr[i] = NewArr[EvenIndex - 1] + 2;
        }
        else
        {
            NewNewArr[i] = NewArr[i - 1];
        }
        
    }

    cout << "\n" << "Our massive: ";
    for (int i = 0; i < NewNewN; i++)
    {
        cout << NewNewArr[i] << " ";
    }

    return 0;
}