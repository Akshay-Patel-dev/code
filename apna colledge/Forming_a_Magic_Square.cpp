#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
             cin>>arr[i][j];
        }
    }
    int count = 0;
    int updatematrix[3][3];
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            int s = 0;
             if(15 <= (arr[i][j] + arr[i][j+1] + arr[i][j+2])){
                s =  (15 - (arr[i][j] + arr[i][j+1] + arr[i][j+2]));
                
                 count = count + s;
                
             }            
             if(15 > (arr[i][j] + arr[i][j+1] + arr[i][j+2])){
                s =  ((arr[i][j] + arr[i][j+1] + arr[i][j+2])- 15) ;
                
                  count = count + s;
             }
             
             break;
        }
    }
     cout<<-count<<endl;
    return 0;
}