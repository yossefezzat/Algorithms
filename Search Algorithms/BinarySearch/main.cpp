#include <iostream>

using namespace std;

///normal BS
int binarySearch(int A[], int key, int iMin, int iMax){

    while(iMax >= iMin){
        int iMid = iMin + (iMax - iMin)/2;
        if(key > A[iMid])
            iMin = iMid + 1;
        else if(key < A[iMid])
            iMax = iMid - 1;
        else
            return iMid;
    }
    return 0;

}

///in case we use binary_search to find the first element in repeated elements
int BSFindFirst(int A[], int start, int end, int val ){
    while(end > start){
        int mid = start + (end - start)/2;
        if(A[mid] > val)
            end = mid -1;
        else if(A[mid] < val)
            start = mid+1;
        else
            end = mid;
    }
    return start;
}

///in case we use binary_search to find the last element in repeated elements
int BSFindLast(int A[], int start, int end, int val ){
    while(end > start){
        int mid = start + (end - start + 1)/2;
        if(A[mid] > val)
            end = mid -1;
        else if(A[mid] < val)
            start = mid+1;
        else
            start = mid;
    }
    return start;
}


int main()
{
    int A[] = {1,2,3,6,6,6,6,7};
    cout<<"normal BS :"<<binarySearch(A,6,1,7)<<endl;
    cout<<"find first BS : "<<BSFindFirst(A,1,7,6)<<endl;
    cout<<"find last BS : "<<BSFindLast(A,1,7,6)<<endl;
    return 0;
}
