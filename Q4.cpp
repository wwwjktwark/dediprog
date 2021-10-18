#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <string>

using namespace std;


int main()
{  int a[12]={77,5,5,22,13,55,97,4,796,1,0,9};
   for (int i = 0; i < 12; ++i) {
    for (int j = 0; j < i; ++j) {
      if (a[j] > a[i]) {
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
    }
   }
   for (int i = 0; i < 12; ++i) {cout<<a[i]<<",";}
}
