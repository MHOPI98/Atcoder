#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[50];
   for(int i=1; i<=26; i++)
   {
       cin>>arr[i];
   }
   for(int i=1; i<=26; i++)
   {
     cout<<(char)(96+arr[i]);

   }

}
