// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
    
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<endl;
//     }  
//     vector <int> v2 (3,3);
//     swap(v,v2);

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<endl;
//     } 
//     for (int i = 0; i < v2.size(); i++)
//     {
//         cout<<v2[i]<<endl;
//     } 
//      sort (v.begin(),v.end());
//     //   vector<int>::iterator it;
//     //   for(it= v.begin(); it!= v.end(); it++) {
//     //       cout<<*it<<endl;
//     //   }
       
//     //    for ( auto element: v){
//     //        cout<<element<<endl;
//     //    }

//     return 0;
// }


// //  Pairs basic and vectors basic 

#include<bits/stdc++.h>

 using namespace std;

 int main(){
    //    pair<string,int>p,p2,p3;
    //    p = make_pair("abc",45);
    //    p2 = make_pair("ans",30);
    //    cout<<p.first<<" "<<p.second<<endl;
    //    cout<<p.first<<" "<<p.second<<endl;
    //    cout<<p2.first<<" "<<p2.second<<endl;
       
    //    p3 = {"adit",808};
    //    cout<<p3.first<<" "<<p3.second<<endl;
    //    int arr[] = {1,2,3};
    //    int arr2[] = {2,3,4};
    //    pair<int,int>parr[2];
    //    parr[0] = {1,2};
    //    parr[1] = {2,3};
    //    parr[2] = {3,4};

    //    for (int i = 0; i < 3; i++)
    //    {
    //        cout<<parr[i].first<<" "<<parr[i].second<<endl;
    //    }
       
    //    swap(parr[0],parr[2]);

    //    for (int i = 0; i < 3; i++)
    //    {
    //        cout<<parr[i].first<<" "<<parr[i].second<<endl;
    //    }

    vector<int>v;
    cout<<v.size();
    cout<<v.capacity();
    v.push_back(1);
    v.push_back(6);
    v.push_back(0);
    
    for(auto element: v){
        cout<<element<<endl;
    }
     return 0;
 }