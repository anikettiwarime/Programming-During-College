// NAME-ANIKET BALENDRA TIWARI
// ROLLNO- 21143285
// BATCH-I4
#include <iostream>
#include <string.h>
using namespace std;
#define MAX_LEN 50
void selectionSort(char arr[][50], int n){
   int i, j, mIndex;
   char minStr[50];
   for (i = 0; i < n-1; i++){
      int mIndex = i;
      strcpy(minStr, arr[i]);
      for (j = i + 1; j < n; j++)
      {
        if (strcmp(minStr, arr[j]) > 0)
        {
            strcpy(minStr, arr[j]);
            mIndex = j;
        }
      }
      if (mIndex != i){
        char temp[50];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[mIndex]);
        strcpy(arr[mIndex], temp);
      }
   }
}
int main(){
   char arr[][50] = {"Vikas", "Bhushan", "Abhay" ,"Aniket"};
   int n = sizeof(arr)/sizeof(arr[0]);
   int i;
   cout<<"Given String is:: ";
   for (i = 0; i < n; i++)
    cout << i << ": " << arr[i] << endl;
   selectionSort(arr, n);
   cout << "\nSelection Sorted is::\n";
   for (i = 0; i < n; i++)
    cout << i << ": " << arr[i] << endl;
   return 0;
}