#include <iostream>

using namespace std;

/* Function to search in array using linearSearch algorithm */
int linearSearch(int arr[], int lenght, int query);

/* Function to sort an array using bubbleSortt algorithm*/
void bubbleSort(int arr[], int n);

/* Function to search in array using binarySearch algorithm */
int binarySearch(int arr[], int lenght, int query);

/* Function to print an array */
void printArray(int arr[], int lenght);

/* Main function*/
int main() {

  // test array and size of test array
  int arr[] = {22, 44, 66, 88, 77, 44, 55, 11, 33};
  int lenght = sizeof(arr) / sizeof(arr[0]);

  // get search query from user
  int query;
  cout << "Inter a search query: ";
  cin >> query;

  // print raw array
  cout << "array:       ";
  printArray(arr, lenght);

  // find query using linearSearch
  cout << "linearSearch: " << linearSearch(arr, 7, query) << endl;

  // sort arry
  bubbleSort(arr, lenght);

  // print sorted array
  cout << "sortedArray: ";
  printArray(arr, lenght);

  // find query using binarySearch
  cout << "binarySearch: " << binarySearch(arr, 7, query) << endl;
}

int linearSearch(int arr[], int lenght, int query) {

  for (int i = 0; i < lenght; i++) {

    if (arr[i] == query) {

      cout << "ls: There is a object matching query in index: " << i << endl;
      return arr[i];
    }
  }
  // there isn't any object in arr[] matching query
  cout << "ls: There isn't any object in array matching with entered query"
       << endl;
  return query;
}

void bubbleSort(int arr[], int n) {
  for (int i = 1; i < n; i++)

    for (int j = 0; j < n - i; j++)

      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
}

int binarySearch(int arr[], int lenght, int query) {
  // array in binary search should be sorted first
  bubbleSort(arr, lenght);
  int low = 0;
  int high = lenght - 1;
  int mid;

  while (low <= high) {
    // the middle of low and high
    mid = (low + high) / 2;

    // if the number in the middle is equal to query return it
    if (arr[mid] == query) {
      cout << "bs: There is a object matching query in index: " << mid << endl;
      return arr[mid];
    }
    if (arr[mid] < query)
      // if the number in the middle is less then query it means
      // query isn't in first half so the new low is 'mid + 1';
      low = mid + 1;
    else
      // if the number in the middle is greater then query it means
      // query isn't in the second half so the new hight is 'mid - 1'
      high = mid - 1;
  }
  // there isn't any object in arr[] matching with entered query
  cout << "bs: There isn't any object in array matching with entered query"
       << endl;
  return query;
}

void printArray(int arr[], int lenght) {
  for (int i = 0; i < lenght; i++)
    cout << arr[i] << " ";
  cout << endl;
}
