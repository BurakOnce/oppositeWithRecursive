#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


//Burak Önce   20120205052
//Bu program girilen sayının tersini yazar
//(recursive olarak)


char tersbas(char n[], int uzunluk) //fonksiyon
{
static int x=11;  //static ile fonksiyon her döndüğünde x in değerinin değişmesini sağlarız
if(x==0)
return 0;
printf("%c",n[x-1]);
x--;
return tersbas(n,uzunluk);  //recursive kısım
}


int main() {
  
char n[11]={"Tersten yaz"};



tersbas(n,11);

  return 0;
}