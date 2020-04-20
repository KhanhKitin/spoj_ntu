#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
long Fibonaci(long n);
int main()
{
   long n;
   cin>>n;
   Fibonaci(n);
   getch();
}
long Fibonaci(long n)   
{
   int f1=0,f2=1,fi;
   fi=f2;
   for(int i = 1;i <= n ;i ++)
   {
    cout<<fi<<" ";
        fi=f1+f2;
        f1=f2;
        f2=fi;
   }
   return fi;
}
