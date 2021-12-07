#include <iostream>
using namespace std;

int main(){
     long long m,n,o;
    cin>>m>>n>>o;
    long long  key[n];
    for (int i = 0; i < n; i++)
    {
        cin>>key[i];
    }
    long long mouse[o];
    for (int i = 0; i < o; i++)
    {
        cin>>mouse[i];
    }

     long long  max = 0;
    for (int i = 0; i < n; i++)
    {    
          long long s = 0;
        for (int j = 0; j < o; j++)
        {
            s = key[i] + mouse[j];
            
            if (s <= m && s>= max){
                max = s;
            }
        }
         
    }

    if(max == 0){
            cout<<"-1"<<endl;
        }
    else{
        cout<<max;
    }
    
    

    return 0;
}