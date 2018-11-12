#include<iostream>
using namespace std;
int cmmdc(int a, int b)
int main()
{
if(a == 0)
return b;
while(b != 0)
{
if(a > b) a -= b;
else b -= a;
} return a;
}
