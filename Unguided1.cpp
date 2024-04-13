#include <iostream>

using namespace std;

void selectSort(float arr[], int length) 
{
    int pos_max;
    float temp;
    for (int i = 0; i < length - 1; i++) 
    {
        pos_max = i;
        for (int j = i + 1; j < length; j++) 
        {
            if (arr[j] > arr[pos_max])
                pos_max = j;
        }
        if (pos_max != i) 
        {
            temp = arr[i];
            arr[i] = arr[pos_max];
            arr[pos_max] = temp;
        }
    }
}

void print_array(float array[], int length)
{
    for (int i = 0; i < length; i++) 
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int length = 5;
    float array[] = {3.8, 2.9, 3.3, 4.0, 2.4};

    cout << "Urutan IPS Mahasiswa sebelum diurutkan : " << endl;
    print_array(array, length);

    selectSort(array, length);

    cout << "\nUrutan IPS Mahasiswa setelah diurutkan dari yang terbesar hingga terkecil : " << endl;
    print_array(array, length);

    return 0;
}


// Mikhael Setia Budi
// 2311110033
// copyright@MikhaelS.B