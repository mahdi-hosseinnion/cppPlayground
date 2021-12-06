#include <iostream>

using namespace std;

/* Function to search in array using linearSearch algorithm */
int linearSearch(int arr[], int lenght, int query);

/* Function to sort an array using bubbleSortt algorithm*/
void bubbleSort(int arr[], int n);

/* Function to print an array */
void printArray(int arr[], int lenght);

int main() {
  int arr[] = {22, 44, 66, 88, 77, 55, 11};
  // int query;
  // cout << "Inter a search query: ";
  // cin >> query;
  // int result = linearSearch(arr, 7, query);
  //
  // cout << result << endl;
  int lenght = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, lenght);
  bubbleSort(arr, lenght);
  cout << "sort.." << endl;
  printArray(arr, lenght);
}

int linearSearch(int arr[], int lenght, int query) {

  for (int i = 0; i < lenght; i++) {

    if (arr[i] == query) {

      cout << "We found your query in index: " << i << endl;
      return arr[i];
    }
  }
  // there isn't any object in arr[] matching query
  cout << "We search whole array and didn't find any matching result" << endl;
  return query;
}

void bubbleSort(int arr[], int n) {
  for (int i = 1; i < n; i++)
    // bubble up max{a[0..n-i]}:
    for (int j = 0; j < n - i; j++)
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
  // INVARIANT: a[n-1-i..n-1] is sorte
}

void printArray(int arr[], int lenght) {
  for (int i = 0; i < lenght; i++)
    cout << arr[i] << " ";
  cout << endl;
}
