
// // Remove all duplicate from String


// string removeduplicate(string s, int n, int i){
    
//     if(i == n){
//         return "";
//     }
      
//     if(s[i] == s[i+1]){
//         string r;
//          r = s.substr(i+1);
//          removeduplicate(r,n,i+1);
//     }
//        removeduplicate(s,n,i+1);
//     return  s ;
// }

// int main(){
//     string s = "aaabbb";
//     cout<<removeduplicate(s,6,0);
//     return 0;
// }