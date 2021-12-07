 #include <bits/stdc++.h>
 using namespace std;
 
 int main(){
     int n,count= 0;
     cin>>n;
     vector<int>v;
     for(int i = 0;i<n;i++){
         int x;
         cin>>x;
         v.push_back(x);
         
     }
     for(int i = 0;i<n-1;i++){
         cout<<v[i]<<endl;
         for(int j = 1;j<n;j++){
             if (v[i] == v[j]){
                 
                count++;
                
             }
         }
     }

    
    
     return 0;
 }