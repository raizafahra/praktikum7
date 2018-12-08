
#Praktikum7

##Latihan1

**Alur algoritma**
1. Mulai program tersebut
2. Input interger fungsi (int, int) 
3. Input interger a dan b dan deskripsikan a=0, dan b=1
4. Jika nilai suku satu (b) adalah =1 dan jika nilai suku dua (a) adalah =0
5. Maka cetak rumus fungsi iteratif menggunakan for instruksikan fungsi fibonacci di awali dengan 2 dan di akhiri dengan indexs suku 
6. Deskripsikan variabel untuk mencetak fungsi selanjutnya
7. Cetak suku fibonacci menggunakn pemanggilan fungsi iteratif

**Hasil program**
https://github.com/raizafahra/praktikum7/blob/master/latihan1/hasil1.png

**Pseudecode**
```
1. int type data r (a, b)
2. if (bill=1) return a
3. if (bill=0) return b
4. for (int i=2; i<=bil; i++)
5. c= a+b, a=b, b=c
6. end
```

**Kode program**
```
#include<iostream>
using namespace std;

int iteratif (int bil, int a, int b, int c)
{
a=0, b=1;
    if (bil == 1) return b;
    if (bil == 0) return a;

    else{
    for (int i=2; i<=bil; i++){

    c = a + b;
    a = b;
    b = c;
    }
    return c;
    }
}

int main()
{
    int bil, a, b, c;

    cout << "masukan bilangan deret ke -: ";
    cin >> bil;
    cout << "\nbilangan fibonaccinya untuk " << bil << " adalah ";
    cout << iteratif (bil, a, b, c);

    return 0;
}
```

##Latihan2

**Alur program**
1. Mulai program tersebut
2. Input interger fungsi (int a, int b)
3. Jika nilai (b==0) return
4. Jika nilai (b>0) intruksikan return a + type data (a, b-1)
5. Sebaliknya return (-a) + type data (a, b+1)
6. Masukan variabel a, untuk menginput nilai awal dan dibagi dengan nilai selanjutnya
7. Cetak nilai perkalian dengan memanggil fungsi rekrusif menggunakan type datanya

**Hasil program**
https://github.com/raizafahra/praktikum7/blob/master/latihan2/hasil2.png

**Pseudecode**
```
deskripsi a x b
1. 0, untuk b = 0
2. a + (a x (b-1)), untuk b > 0
3. -a + (a x (b+1)), untuk b < 0
4. end
```

**Kode program**
```
#include<iostream>
using namespace std;

int kali_rekursif(int a, int b)
{
    if (b==0)
        return 0;
    else if (b > 0)
        return a + kali_rekursif(a, b - 1);
    else
        return (-a) + kali_rekursif(a, b+1);
}

main()
{
    int a, b;
    cout << "masukan bilangan: ";
    cin >> a;
    cout << "dikali dengan: ";
    cin >> b;
    cout << " AxB = " << kali_rekursif(a, b) << endl;
}
```

##Latihan3

**Alur algoritma**
1. Mulai program tersebut 
2. Input menggunakan intruksi void dan menggunakn pointer untuk menetapkan void type data (char s) 
3. Jika nilai s!=0--> menggunakan pointer() maka masukan instruksi membalik (&s[1])
4. Masukan char untuk intruksi kata yang ingin kita ubah dan instruksi balik
5. Cetak pembalikan kata dengan memanggil fungsi rekrusif menggunakan type datanya

**Hasil program**
https://github.com/raizafahra/praktikum7/blob/master/latihan3/hasil3.png

**Pseudecoede**
```
#include
#include
void balik(char *k){
if(*k!="){
balik(&k[1]);
cout <<
}
}main(){
char *kata="....";--> //untuk masukan kata
balik (kata);
cout <<
return 0;
```

**Kode program**
```
#include<iostream>
#include<string.h>
using namespace std;

void balik(char *s)
{
    if (*s != '\0'){
        balik(&s[1]);
        cout << s[0];
    }
}

int main()
{
    char* kata = (char*) "raiza";
    balik(kata);
    cout << endl;

    return 0;
}
```
