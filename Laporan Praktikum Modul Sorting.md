# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Mikhael Setia Budi</p>

## Dasar Teori

### 1. Konsep Dasar Sorting

Algoritma sorting adalah algoritma untuk meletakan elemen data ke dalam urutan tertentu, berdasarkan satu atau beberapa kunci ke dalam tiap tiap elemen. Algoritma Sorting termasuk salah satu contoh yang 
kaya akan solusi.

Algoritma sorting terbagi menjadi dua jenis berdasarkan data terurutnya yaitu:

Ascending merupakan pengurutan dari yang terkecil hingga terbesar, contohnya : a, b, c, d, e.

Descending merupakan pengurutan dari yang terbesar hingga terkecil, contohnya : e, d, c, b, a

### 2. Insertion Sort

Cara pengurutan insertion sort adalah dengan mengecek satu persatu mulai dari yang kedua sampai yang terakhir.
Apabila ditemukan data yang lebih kecil dari data sebelumnya, maka data tersebut disisipkan pada posisi yang sesuai.

**Pseudocode Algoritma Insertion Sort:**
```C++
for i = 1 to n-1
      set j = i
      set t = a[j]
      repeat while j > 0 and a[j-1] > t
            move a[j-1] to right
      end repeat
      set a[j] = t
end for
```

**Prosedur Insertion Sort dalam bahasa C++:**
```C++
void insertion_sort(int arr[], int length) {
  int i, j ,tmp;

    for (i = 1; i < length; i++) {
           j = i;

           while (j > 0 && arr[j - 1] > arr[j]) {
               tmp = arr[j];
               arr[j] = arr[j - 1];
               arr[j - 1] = tmp;
               j--;
           }//end of while loop
    }//end of for loop
}
```
**Contoh**

Diketahui array suatu integer terdiri dari 6 elemen sebagai berikut; {22, 10, 15, 3, 8, 2}. Contoh 
Program untuk mengurutkan ke-6 elemen tersebut adalah sebagai berikut:

```C++
#include <iostream>
using namespace std;
void insertion_sort(int arr[], int length) {
    int i, j ,tmp;
    for (i = 1; i < length; i++) {
      j = i;

       while (j > 0 && arr[j - 1] > arr[j]) {
           tmp = arr[j];
           arr[j] = arr[j - 1];
           arr[j - 1] = tmp;
           j--;
       }//end of while loop
    }//end of for loop
}

void print_array(int a[], int length) {

     for(int i=0; i<length; i++) {
         cout << a[i] << "\t";
     }
     cout << endl;
}
int main() {

    int length = 6;
    int a[length] = {22, 10, 15, 3, 8, 2};

    insertion_sort(a, length);
    print_array(a, length);
}
```

**Output**
```C++
2       3       8       10      15      22
```

### 3. Bubble Sort

Cara pengurutan Bubble Sort adalah membandingkan elemen yang sekarang dengan elemen berikutnya.
jika elemen sekarang > elemen berikutnya, maka ditukar.

**Contoh Prosedur Bubble Sort dalam bahasa C++**
```C++
void bubble_sort(int arr[], int length){
    bool not_sorted = true;
    int j=0,tmp;
 
    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort
```

### 4.  Selection Sort

Cara pengurutan Selection Sort adalah dengan membandingkan elemen sekarang dengan elemen berikutnya sampai terakhir.
Jika ditemukan elemen paling kecil, kemudian ditukar dengan elemen sekarang.

**Contoh prosedur Selection Sort:**
```C++
void selectSort(int arr[], int n) {
    int pos_min,temp;
      for (int i=0; i < n-1; i++) {
          pos_min = i;
            for (int j=i+1; j < n; j++) {
            if (arr[j] < arr[pos_min])
                pos_min=j;
            }

        if (pos_min != i) {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
      }
}
```

## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99,99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);
 
    bubble_sort(a, length);
 
    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```


#### Output
```C++
Urutan bilangan sebelum sorting: 
22.1    15.3    8.2     33.21   99

Urutan bilangan setelah sorting:
8.2     15.3    22.1    33.21   99
```


#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Modul%203%20Alstrukdat/Code%20Guided%201%20Sorting.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Output%20Modul%203%20Alstrukdat/Output%20Guided%201%20Sorting.png?raw=true)

### 2.  Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort

```C++
#include <iostream>

using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;
 
    for (i = 1; i < length; i++) {
    j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}
void print_array(char a[], int length) {
 
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
 
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
 
    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);
 
    insertion_sort(a, length);
 
    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}
```



#### Output
```C++
Urutan karakter sebelum sorting: 
c       f       a       z       d       p

Urutan karakter setelah sorting:
z       p       f       d       c       a
```



#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Modul%203%20Alstrukdat/Code%20Guided%202%20Sorting.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Output%20Modul%203%20Alstrukdat/Output%20Guided%202%20Sorting.png?raw=true)


## Unguided 

### 1. [Soal]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
