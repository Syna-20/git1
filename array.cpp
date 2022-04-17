#include <iostream>

using namespace std; 
int main()
{
int arr[]={1,2,3,4,5,6,7,8};
int len = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0;i<len;i++){
    cout<<arr[i]+2<<" ";
}

return 0;
} 
// #include <iostream>
// using namespace std;

// int main() {
//     int a;
//     cout<<"Enter n:";
//     cin>>a;
//     int numbers[a];

//     cout << "Enter  numbers: " << endl;

//     for (int i = 0; i < a; i++) {
//         cin >> numbers[i];
//     }

//     cout << "The numbers are: ";

//     for (int n = 0; n < a; n++) {
//         cout << numbers[n] << "  ";
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//    int marks[5]={};
//    for(int i=0;i<5;i++){
//        cout<<marks[i]<<endl;
       
//    }
//    marks[3]=100;
//    marks[4]=45;
//    cout<<marks[3]<<'\t'<<marks[4];
//    for(int i=0;i<5;i++){
//        cout<<marks[i]<<endl;
       
//    }

//     return 0;
// }