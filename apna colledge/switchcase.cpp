// print differnt word for different output
// #include <iostream>
// using namespace std;
 
// int main(){
//     char buton;
//     cout<<"enter a number"<<endl;
//     cin>>buton;
//     switch (buton)
//     {
//     case 'a':
//       cout<<"heloo"<<endl;
//         break;
//     case 'b':
//       cout<<"hii"<<endl;
//         break;
//     case 'c':
//       cout<<"yup"<<endl;
//         break;
//     case 'd':
//       cout<<"whatsapp"<<endl;
//         break;
    
//     default:
//       cout<<"you are my friend"<<endl;
//         break;

//     }
//     return 0;
// }

// make a calculator using switch statement
// #include <iostream>
// using namespace std;

// int main(){
//     float a,b,c;
//     cout<<"print nubers for calculation"<<endl;
//     cin>>a>>b>>c;
//     char opt;
//     cout<<"print operator"<<endl;
//     cin>>opt;
//     switch (opt)
//     {
//     case '*':
//         cout<<a*b<<endl;
//         break;
//     case '+':
//         cout<<a+b<<endl;
//         break;
//     case '-':
//         cout<<a-b<<endl;
//         break;
//     case '/':
//         cout<<a/b<<endl;
//         break;
    
//     default:
//         break;
//     }

//     return 0;
// }

// Ques2. Write a program to find whether an alphabet is a vowel or a consonant.
#include <iostream>
using namespace std;

int main(){
    
    char opt;
    cout<<"print alphabet"<<endl;
    cin>>opt;
    switch (opt)
    {
    case 'a':
        cout<<"vowels"<<endl;
        break;
    case 'e':
        cout<<"vowels"<<endl;
        break;
    case 'i':
        cout<<"vowels"<<endl;
        break;
    case 'o':
        cout<<"vowels"<<endl;
        break;
    case 'u':
        cout<<"vowels"<<endl;
        break;
    
    default:
        cout<<"this is an constanta"<<endl;
        break;
    }

    return 0;
}