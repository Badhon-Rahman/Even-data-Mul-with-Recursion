#include <iostream>

using namespace std;

int EvenMulRecursion(int arr[], int arrSize, int mul){
    if(arrSize < 0){
       return mul;
    }

    if((arr[arrSize] % 2) == 0){
       mul *= arr[arrSize];
       return EvenMulRecursion(arr, arrSize - 1, mul);
     }
     else{
         cout << "";
         return EvenMulRecursion(arr, arrSize - 1, mul);
     }


}


int main()
{
    int arrSize, mul = 1;
    cout << "Enter array Size:";
    cin >> arrSize;

    int arr[arrSize], result;
    cout << "Enter the array element:";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }
    result = EvenMulRecursion(arr, arrSize, mul);
    cout << "Result: " << result << endl;
    return 0;
}
