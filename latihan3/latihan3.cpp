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
