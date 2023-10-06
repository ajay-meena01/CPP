// // Maximum element of array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {2,4,1,9,5};
//     int mx = a[0];

//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         if (a[i] > mx)
//         {
//             /* code */
//             mx = a[i];
//         }
        
//     }
//     cout<<mx;
//     return 0 ;
// }

////////////////////////////////////

// count the element of array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[10] = {4,8,3,3,3,6,7,4,7,2};
//     int count = 0;

//     for (int i = 0; i < 10; i++)
//     {
//         /* code */
//         if (a[i]%2 == 0)
//         {
//             /* code */
//             count++;
            
//         }
        
//     }
//     cout<<count;
//     return 0 ;
// }

/////////////////////////////////////////////

// // sorted array without using any algo

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3] = {1,0,2};

//     for (int i = 0; i < 3; i++)
//     {
//         /* code */
//         if (arr[i]>arr[i+1])
//         {
//             /* code */
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;
//         }
        
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         /* code */
//         cout<<arr[i];
//     }
//     return 0 ;
// }

//////////////////////////////////////

// linear search Algorithm

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[10] = {2,4,57,3,9,3,8,3,7,5};
//     int x = 57;
//     for (int i = 0; i < 10; i++)
//    {
//         /* code */
//         if (a[i] == x)
//         {
//             /* code */
//             cout<<a[i];
            
//         }
        
//     }
    
//     return 0 ;
// }
