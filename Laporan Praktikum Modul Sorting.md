# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Mikhael Setia Budi</p>

## Dasar Teori

### 1. Konsep Dasar Sorting

Algoritma sorting adalah algoritma untuk meletakan elemen data ke dalam urutan tertentu, berdasarkan satu atau beberapa kunci ke dalam tiap tiap elemen. Algoritma Sorting termasuk salah satu contoh yang 
kaya akan solusi. Sorting adalah proses pengurutan data yang sebelumnya disusun secara acak atau tidak teratur menjadi urut dan teratur menurut suatu aturan tertentu [1].

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
jika elemen sekarang > elemen berikutnya, maka ditukar. Suatu  metode  yang  ada  pada  algoritma  sorting,  yang  dilakukan  dengan  cara melakukan suatu perbandingan pada tiap komponen elemennya, selanjutnya menukar elemen satu  dengan  yang  lainnya  hingga  berulang sampai  sesuai ketetentuan  yang  ditetapkan [2].

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
Jika ditemukan elemen paling kecil, kemudian ditukar dengan elemen sekarang. Algoritma selection sort adalah modifikasi algoritma bubble sort dengan mengurangi banyaknya parameter. Algoritma ini untuk mengurutkan data secara ascending maupun descending dimulai dari data awal sampai data ke N-1 [3].

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

**Code 1**
```C++
#include <iostream>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;
```
kode diatas adalah mendeklarasikan fungsi bubble sort. fungsi ini menerima 2 parameter yaitu arr[] merupakan array yang akan diurutkan, dan lenght menyatakan panjang array. mendeklarasikan variabel not_sorted dengan tipe data boolean. variabel ini menunjukkan apakah array masih dalam keadaan tidak terurut. lalu mendeklarasikan variabel j dengan tipe data integer dan diinisialisasi dengan nilai 0. variabel ini digunakan sebagai couter untuk jumlah perulangan yang dilakukan dalam bubble sort. variabel temp dideklarasikan sebagai tipe data double, ini digunakan untuk menyimpan nilai sementara ketika pertukaran elemen array yang dilakukan dalam bubble sort.

**Code 3**
```C++
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
perulangan while akan terus berjalan selama variabel noy_sorted bernilai true. artinya jika ada pertukaran elemen yang dilakukan dalam perulangan terakhir, perulangan akan berlanjut karena masih terdapat kemungkinan bahwa array belum sepenuhnya terurut. jika tidak ada pertukaran yang dilakukan dalam perulangan ini, variabel not_sorted akan tetap false, dan perulangan while akan berhenti. j++ merupakan variabel yang digunakan untuk membatasi jumlah elemen yang perlu dibandingkan pada setiap perulangan. setiap perulangan satu elemen dari ujung array (elemen terakhir) akan berada pada posisi yang benar sehingga tidak dibandingkan lagi. for digunakan untuk setiap perulangan for akan membandingkan elemen saat ini dengan elemen berikutnya. pertukaran dilakukan menggunakan variabel sementara tmp. elemen saat ini disimpan dalam tmp lalu elemen berikutnya dipindahkan ke posisi saat ini, dan elemen yang disimpan dalam elemen tmp ditempatkan di posisi berikutnya. not_sorted menjadi true sehingga perulangan while akan terus berlanjut. perulangan while akan memeriksa dan memindahkan elemen yang tidak berurutan ke posisi yang benar sampai tidak ada lagi pertukaran yang diperlukan.

**Code 4**
```C++
void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
```
mendeklarasikan fungsi print_array yang terdapat dua parameter yaitu array dan panjang array. fungsi print_array digunakan untuk mencetak isi array a[] ke layar. loop for digunakan untuk mencetak setiap elemen dari array dengan menggunakan cout. setiap elemen array akan dicetak ke layar menggunakan cout diikuti dengan tanda tab("\t"). setiap elemen untuk dicetak dalam satu bari dan dipisahkan oleh tanda tab.

**Code 5**
```C++
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
fungsi main adalah tempat dimulainya eksekusi program. lalu menyimpan panjang array dalam variabel lenght dengan tipe data integer. array a[] diisikan nilai array awal yang belum terurut dengan tipe data double agar dapat menyimpan angka desimal. lalu munculkan pesan Urutan bilangan sebelum sorting, diikuti dengan mencetak isi array sebelum pengurutan. fungsi bubble_sort dipanggil untuk mengurutkan array dengan menggunakan bubble sorting. lalu setelah diurutkan munculkan pesan Urutan bilangan setelah sorting, diikuti dengan mencetak isi array setelah pengurutan.

#### Output
```C++
Urutan bilangan sebelum sorting: 
22.1    15.3    8.2     33.21   99

Urutan bilangan setelah sorting:
8.2     15.3    22.1    33.21   99
```
memunculkan urutan bilangan sebelum sorting lalu setelah memanggil fungsi bubble sort, setelah itu memunculkan urutan bilangan setelah sorting secara ascending.

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

**Code 1**
```C++
#include <iostream>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
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
```
fungsi diatas mengimplementasikan algoritma insertion sort untuk mengurutkan array yang memiliki panjang array. variabel i digunakan untuk menunjukkan posisi saat ini dalam array yang sedang diproses. variabel j digunakan untuk mencari posisi yang tepat untuk memasukkan elemen ke dalam urutan yang benar. setiap perulangan dari loop for, elemen ke-i akan dipertimbangkan untuk dimasukkan ke dalam urutan yang tepat. loop while di dalam loop for. elemen ke-i akan dibandingkan dengan elemen elemen sebelumnya dan dipindahkan ke posisi yang benar jika diperlukan. proses akan berlanjut sampai semua elemen dalam array diurutkan.

**Code 3**
```C++
void print_array(char a[], int length) {
 
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
```
fungsi diatas digunakan untuk mencetak isi dari array a[]. setiap elemen array akan dicetak ke layar dalam satu baris, dipisahkan oleh tanda tab("\t"), setekah mencetak semua elemen, fungsi ini mencetak newline untuk memisahkan output.

**Code 4**
```C++
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
fungsi main adalah tempat dimulai eksekusi program. variabel lenght menunjukan panjang array dengan tipe data integer. array a[] diisi dengan nilai awal yang belum diurutkan. pesan urutan karakter sebelum sorting dicetak dengan menggunakan cout dan endl adalah untuk newline outputnya. memanggil fungsi insertion_sort untuk mengurutkan array. lalu mencetak pesan urutan karakter setelah sorting dengan menggunakan cout dan endl digunakan untuk newline.

#### Output
```C++
Urutan karakter sebelum sorting: 
c       f       a       z       d       p

Urutan karakter setelah sorting:
z       p       f       d       c       a
```
dapat dilihat output akan memunculkan pesan urutan karakter sebelum sorting dengan urutan awal, lalu memanggil fungsi insertion_sort dan memunculkan pesan urutan karakter setelah sorting dengan karakter yang telah diurutkan secara descending.

#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Modul%203%20Alstrukdat/Code%20Guided%202%20Sorting.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Output%20Modul%203%20Alstrukdat/Output%20Guided%202%20Sorting.png?raw=true)


## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! 

```C++
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
```

**Code 1**
```C++
#include <iostream>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
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
```
fungsi diatan digunakan untuk mengimplementasikan algoritma selection sort untuk mengurutkan array arr[] yang memiliki panjang array lenght. algoritma selection sort bekerja dengan cara mencari nilai minimal atau maksimal pada sekumpulan nilai kemudia meletakannya pada posisi ujung sekumpulan nilai tersebut. variabel pos_max digunakan untuk menyimpan indeks elemen dengan nilai terbesar pada setiap pengulangan. for digunakan untuk mencari elemen dengan nilai terbesar di antara elemen yang belum terurut. if membuat kondisi dengan membandingkan nilai elemen arr[j] dengan nilai terbesar yang terlah ditemukan arr[pos_max]. if (pos_max != i) digunakan untuk mengecek apakah elemen terbesar tersebut berada pada posisi yang benar atau tidak. proses ini terus berulang hingga semua elemen telah terurut, if (arr[j] > arr[pos_max]).

**Code 3**
```C++
void print_array(float array[], int length)
{
    for (int i = 0; i < length; i++) 
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}
```
mendeklarasikan fungsi print_array yang menerima dua parameter yaitu array[] dan lenght. for (int i = 0; i < length; i++) adalah sebuah perulangan for yang akan melakukan perulangan melalui setiap elemen dalam array[]. cout digunakan untuk mencetak setiap elemen array, dengan dipisahkan oleh tanda tab.

**Code 4**
```C++
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
```
fungsi main adalah tempat dimulai eksekusi program. variabel lenght menunjukan panjang array dengan tipe data integer. float array[] diisi dengan nilai awal yang belum diurutkan. pesan "Urutan IPS mahasiswa sebelum diurutkan: " dicetak dengan menggunakan cout dan endl adalah untuk newline outputnya. memanggil fungsi selectSort untuk mengurutkan array dengan pengurutan selection sort. lalu mencetak pesan "Urutan IPS mahasiswa sesudah diurutkan: " dengan menggunakan cout dan endl digunakan untuk newline.

#### Output:
```C++
Urutan IPS Mahasiswa sebelum diurutkan : 
3.8     2.9     3.3     4       2.4

Urutan IPS Mahasiswa setelah diurutkan dari yang terbesar hingga terkecil : 
4       3.8     3.3     2.9     2.4
```
menapilkan pesan "Urutan IPS Mahasiswa sebelum diurutkan: " dengan output array yang masih belum diurutkan. setelah memanggil fungsi selection sort lalu menampilkan Urutan IPS Mahasiswa setelah diurutkan dari yang terbesar hingga terkecil.

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Modul%203%20Alstrukdat/Code%20Unguided%201%20Sorting.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Output%20Modul%203%20Alstrukdat/Output%20Unguided%201%20Sorting.png?raw=true)

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan nama-nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

```C++
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
```

**Code 1**
```C++
#include <iostream>
#include <string>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. using namespace std digunakan untuk menggunakan namespace std. mengimpor pustaka string untuk dapat menggunakan fungsi string.

**Code 2**
```C++
void swap(string &a, string &b) 
{
    string temp = a;
    a = b;
    b = temp;
}
```
fungsi swap digunakan untuk menukar nilai 2 string. didefinisikan dengan menggunakan referensi '&' sebagai parameter. ketika fungsi dipanggil, nilai variabel a akan disimpan dalam variabel temp, kemudian nilai b disalin ke a, dan nilai temp (nilai asli dari a) disalin ke b. maka nilai a dan b akan ditukar.

**Code 3**
```C++
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
```
fungsi bubbleSort yang digunakan untuk algoritma bubble sorting untuk mengurutkan array string. terdapat dua pengulangan, pengulangan pertama digunakan untuk mengontrol jumlah perulangan keseluruhan, sementara perulangan kedua digunakan untuk melakukan perbandingan dan pertukaran elemen. setiap perulangan jika nilai string pada indeks j lebih besar dari nilai indeks j+1 maka dilakukan pertukaran dengan menggunakan swap.

**Code 4**
```C++
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
```
fungsi main adalah tempat dimulai eksekusi program. array nama[] diisi dengan nama warga yang belum diurutkan. panjang array dihitung dengan menggunakan sizeof(nama)/sizeof(nama[0]), sehingga program dapat berjalan dengan baik walapun ukuran array diubah. pesan "Nama 10 warga sebelum diurutkan: " dicetak dengan menggunakan cout dan endl adalah untuk newline outputnya. memanggil fungsi bubbleSort untuk mengurutkan array dengan pengurutan bubble sorting. lalu mencetak pesan "Nama 10 warga setelah diurutkan: " dengan menggunakan cout dan endl digunakan untuk newline.

#### Output:
```C++
Nama 10 warga sebelum diurutkan: 
siti
situ
sana
ana
ani
caca
cici
dida
dodo
dadi
Nama 10 warga setelah diurutkan:
ana
ani
caca
cici
dadi
dida
dodo
sana
siti
situ
```
menapilkan pesan "Nama 10 warga sebelum diurutkan: " dengan output array yang masih belum diurutkan. setelah memanggil fungsi bubble sort lalu menampilkan pesan "Nama 10 warga setelah diurutkan: " dengan array yang sudah diurutkan.

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Modul%203%20Alstrukdat/Code%20Unguided%202%20Sorting.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Output%20Modul%203%20Alstrukdat/Output%20Unguided%202%20Sorting.png?raw=true)

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

```C++
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
```

**Code 1**
```C++
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. algoritma untuk fungsi pengurutan, dan vector untuk menggunakan struktur data vektor. using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
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
```
fungsi main merupakan fungsi utama yang akan dieksekusi saat program dijalankan. lalu mendeklarasikan variabel n yang digunakan untuk menyimpan jumlah karakter yang akan dimasukkan pengguna dengan tipe data integer. membuat vektor bernama characters dengan panjang n dibuat untuk menyimpan karakter yang akan dimasukkan oleh pengguna. program akan diminta untuk memasukkan karakter sejumlah n dan disimpan dalam vektor characters.

**Code 3**
```C++
 cout << "Urutan karakter sebelum sorting: " << endl;
     for (char character : characters) 
    {
        cout << character << " ";
    }
    cout << endl;
```
Program akan mencetak pesan Urutan karakter sebelum sorting dengan menggunakan cout dan endl untuk newline sehingga karakter yang belum diurutkan akan muncul dibawahnya. lalu program akan mencetak karakter yang belum diurutkan.

**Code 4**
```C++
sort(characters.begin(), characters.end());
```
fungsi sort digunakan untuk mengurutkan karakter dalam vektor characters secara ascending (menaik)

**Code 5**
```C++
cout << "Urutan karakter setelah ascending sort: " << endl;
    for (char character : characters) 
    {
        cout << character << " ";
    }
    cout << endl;
```
program akan mencetak urutan karakter yang sudah diurutkan secara ascending atau menaik dan mencetak pesan Urutan karakter setelah ascending sort dengan menggunakan cout, endl untuk newline sehingga karakter yang sudah diurutkan akan muncul dibawahnya.

**Code 6**
```C++
sort(characters.rbegin(), characters.rend());
```
fungsi sort digunakan kembali untuk mengurutkan karakter dalam vektor characters secara descending atau menurun.

**Code 7**
```C++
 cout << "Urutan karakter setelah descending sort: " << endl;
    for (char character : characters) 
    {
        cout << character << " ";
    }
    cout << endl;

    return 0;
}
```
setelah diurutkan secara descending, program mencetak karakter yang telah diurutkan dan mencetak pesan Urutan karakter setelah descending sort dengan menggunakan cout. endl untuk newline sehingga karakter yang sudah diurutkan akan muncul dibawahnya. return 0 untuk menandakan bahwa program telah berakhir. 

#### Output:
```C++
Masukkan banyaknya karakter: 5
Masukkan karakter:
Karakter ke-1: a
Karakter ke-2: c
Karakter ke-3: e
Karakter ke-4: d
Karakter ke-5: b
Urutan karakter sebelum sorting:
a c e d b
Urutan karakter setelah ascending sort:
a b c d e
Urutan karakter setelah descending sort:
e d c b a
```
menampilkan pesan dimana pengguna dapat memasukkan panjang array, setelah itu masukkan karakter secara acak. lalu akan muncul pesan Urutan karakter sebelum sorting dan karakter yang belum diurutkan. setelah diurutkan secara ascending maka akan muncul pesan Urutan karakter setelah ascending sort dan karakter yang telah diurutkan secara ascending (menaik). diurutkan secara descending lalu akan memunculkan pesan Urutan karakter setelah descending sort dan karakter yang telah diurutkan secara descending (menurun)

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Modul%203%20Alstrukdat/Code%20Unguided%203%20Sorting.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-3-Sorting/blob/master/Output%20Modul%203%20Alstrukdat/Output%20Unguided%203%20Sorting.png?raw=true)

## Kesimpulan
dalam sorting terdapat 3 cara pengurutan yaitu insertion sort, bubble sort, dan selection sort dimana masing masing memiliki kelebihan dan kekurangan. dengan sorting ini ketika memasukkan elemen atau karakter yang tidak urut menjadi menjadi mudah diurutkan. tentu ini sangat penting dalam menganalisis data karena tidak perlu mengurutkannya dalam coding karena bisa menggunakan fungsi sorting.

## Referensi
[1]	Y. A. Sandria, M. R. A. Nurhayoto, L. Ramadhani, and R. S. Harefa, “Penerapan Algoritma Selection Sort untuk Melakukan Pengurutan Data dalam Bahasa Pemrograman PHP,” 2022.

[2]	* Saputri, D. Pemograman, B. Seleksi, and P. Saputri, “Analisis Study Komperatif Bubble Sort Dan Selection Sort Pada Algoritma,” Bhs. dan Mat., vol. 1, no. 6, pp. 151–161, 2023, [Online]. Available: https://doi.org/10.61132/arjuna.v1i6.305

[3]	L. Lasriana and A. Gunaryati, “Sistem Informasi Apotek Berbasis Web Menggunakan Algoritma Sequential Search Dan Selection Sort,” JIPI (Jurnal Ilm. Penelit. dan Pembelajaran Inform., vol. 7, no. 2, pp. 392–401, 2022, doi: 10.29100/jipi.v7i2.2709.



