#include<iostream>
#include<vector>
using namespace std;

/*
int binarySearch(vector<int>& arr, int si, int ei, int k)
{
    while(si <= ei)
    {
        int mid = si + (ei - si) / 2;

        if(arr[mid] == k)
        {
            return mid;
        }

        if(arr[mid] > k)
        {
            ei = mid - 1;
        }
        else
        {
            si = mid + 1;
        }
    }

    return -1;
}


int search(vector<int>& arr, int n, int k)
{
    int si = 0, ei = n - 1;

    int pivot = 0, index;

    while(si <= ei)
    {
        int mid = si + (ei - si) / 2;

        if(arr[mid] < arr[0])
        {
            pivot = mid;
            ei = mid - 1;
        }
        else
        {
            si = mid + 1;
        }
    }

    if(pivot == 0 || (k <= arr[n - 1] && k >= arr[pivot]))
    {
        index = binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        index = binarySearch(arr, 0, pivot - 1, k);
    }

    return index;
}

int main() {
    vector<int> arr = {7,8,9,2,3,4,4,5};
    cout << " '4' is at index " << search(arr, 8, 4) << endl;
}
*/


int binarySearch(vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


int getPivot(vector<int>& arr, int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]) {
        return binarySearch(arr, pivot, n-1, k);
    }
    else {
        return binarySearch(arr,0, pivot-1, k);
    }

}

int main() {
    vector<int> arr = {7,8,9,2,3,4,4,5};
    cout << " '4' is at index " << search(arr, 8, 4) << endl;
}
