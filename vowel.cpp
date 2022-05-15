#include<iostream>
using namespace std;
main()
{
    char alphabet;
    
    cout<<endl<<" Enter the Alphabet : ";
    cin>>alphabet;
   
   if(alphabet == 'a' || alphabet == 'e' || alphabet == 'o' || alphabet == 'u' || alphabet == 'i' )
   cout<<" is a vowel "<<alphabet; 
   else
   cout<<alphabet<<" is a consonant ";
   
   return 0;
}      