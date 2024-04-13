#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cout << "Masukkan banyaknya karakter: ";
    cin >> n;

    vector<char> characters(n);

    cout << "Masukkan karakter:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cout << "Karakter ke-" << i + 1 << ": ";
        cin >> characters[i];
    }

    cout << "Urutan karakter sebelum sorting: " << endl;
     for (char character : characters) 
    {
        cout << character << " ";
    }
    cout << endl;

    sort(characters.begin(), characters.end());

    cout << "Urutan karakter setelah ascending sort: " << endl;
    for (char character : characters) 
    {
        cout << character << " ";
    }
    cout << endl;

    sort(characters.rbegin(), characters.rend());

    cout << "Urutan karakter setelah descending sort: " << endl;
    for (char character : characters) 
    {
        cout << character << " ";
    }
    cout << endl;

    return 0;
}


// Mikhael Setia Budi
// 2311110033
// copyright@MikhaelS.B