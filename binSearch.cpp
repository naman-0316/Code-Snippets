#include<iostream>
#include<bits/stdc++.h>
int binarySearch(int arr[], int x)
{
    int left = 0; 
    int right = sizeof(arr);
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}