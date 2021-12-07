// // // // character Array
// largest word in Array

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();
    int i =0;
    int current = 0;
    int max = 0;
    int start = 0, mxstart = 0;

    while (1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(current > max) {
                max = current ;
                mxstart = start;
            }
               current = 0;
               start = i+1;
        }
        else
        current++;
         if (arr[i] == '\0')
         break;
        i++;

    }

    cout<<max<<endl;
    for (int i = 0; i < max; i++)
    {
        cout<<arr[i+mxstart];
    }
    
    
    return 0;
}