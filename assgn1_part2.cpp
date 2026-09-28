
#include <iostream>
using namespace std;

int main()
{
    int id1, id2, id3, searchID;

  cout << "Enter Book 1 ID: ";
   cin >> id1;

    cout << "Enter Book 2 ID: ";
    cin >> id2;

  cout << "Enter Book 3 ID: ";
  cin >> id3;

    cout << "\n===== LIBRARY BOOK IDs ====="<<endl;
    cout << "Book ID: " << id1<<endl;
    cout << "Book ID: " << id2<<endl;
    cout << "Book ID: " << id3<<endl;

    cout << "\n\nEnter Book ID to search: ";
    cin >> searchID;

    if (searchID == id1) { cout << "Book found!"; } 
    else if (searchID == id2) { cout << "Book found!"; } 
    else if (searchID == id3) { cout << "Book found!"; }
    else { cout << "Not found!"; } return 0; }
