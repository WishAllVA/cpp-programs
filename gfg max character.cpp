#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
 
char getMaxOccuringChar(char* str)
{
 
    int count[ASCII_SIZE] = {0};
    int len = strlen(str);
    for (int i=0; i<len; i++)
    	//cout<<str[i]<<"\t";
        count[str[i]]++;
 
    int max = -1;  // Initialize max count
    char result;   // Initialize result
 
    // Traversing through the string and maintaining
    // the count of each character
    for (int i = 0; i < len; i++) {
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
 
    return result;
}
 
// Driver program to test the above function
int main()
{
    char str[] = "sample string";
    cout << "Max occurring character is "
         << getMaxOccuringChar(str);
}
