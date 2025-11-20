#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start < end) {
        int min = start;
        int max = start;

        for (int i = start + 1; i <= end; i++) {
            if (arr[i] < arr[min])
                min = i;
            if (arr[i] > arr[max])
                max = i;
        }

        int temp = arr[start];
        arr[start] = arr[min];
        arr[min] = temp;

        if (max == start)
            max = min;

        temp = arr[end];
        arr[end] = arr[max];
        arr[max] = temp;

        start++;
        end--;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    SelectionSort(arr, n);
    display(arr, n);
}
