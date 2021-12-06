#include <iostream>

using namespace std;

int linearSearch(int arr[], int lenght, int query);

int main() {
  int arr[] = {22, 44, 66, 88, 77, 55, 11};
  int query;
  cout << "Inter a search query: ";
  cin >> query;
  int result = linearSearch(arr, 7, query);
  cout << result;
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
