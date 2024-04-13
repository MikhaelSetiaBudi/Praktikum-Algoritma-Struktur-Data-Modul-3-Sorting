#include <iostream>
#include <string>

using namespace std;

void swap(string &a, string &b) 
{
    string temp = a;
    a = b;
    b = temp;
}


void bubbleSort(string array[], int n) 
{
    for (int i = 0; i < n-1; i++) 
    {
        for (int j = 0; j < n-i-1; j++) 
        {
            if (array[j] > array[j+1]) 
            {
                swap(array[j], array[j+1]);
            }
        }
    }
}

int main() 
{
    string nama[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(nama)/sizeof(nama[0]);

    cout << "Nama 10 warga sebelum diurutkan: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << nama[i] << endl;
    }

    bubbleSort(nama, n);

    cout << "Nama 10 warga setelah diurutkan:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << nama[i] << endl;
    }

    return 0;
}


// Mikhael Setia Budi
// 2311110033
// copyright@MikhaelS.B