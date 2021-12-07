// class formatibn student = sahil


// #include <iostream>
// using namespace std;

// class student {

//     public:
//     string name;
//     int age;
//     string gender;

//     void printInfo(){

//         cout<<name<<"  ";
//         cout<<age<<"  ";
//         cout<<gender<<"  ";
        

   
//     }
// };



// int main(){

//    student arr[1];
//     for (int i = 0; i<1; i++)
//     {   cout<<"give name"<<"= ";
//         cin>>arr[i].name;
//          cout<<"give age"<<"= ";
//         cin>>arr[i].age;
//          cout<<"give gender"<<"= ";
//         cin>>arr[i].gender;
//     }
//      for (int i = 0; i <3; i++)
//      {
//         arr[i].printInfo();
//      }
     

//    return 0;
// }


#include <iostream>
using namespace std;

int main(){
    string g ; int count_letters = 0,count_words=0,count_sentence = 0; char r = " ";
    getline(cin , g);
    for(int i = 0;i<=g.size();i++){
        if(g[i] = r){
        count_words++;}
        else {
            count_letters++;
        }
    }
    
    cout<<count_letters;
    cout<<count_words;
    return 0;
}