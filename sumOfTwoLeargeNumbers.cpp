//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        if(X.length() > Y.length())
            swap(X,Y);
        string sum = "";
        int len1 = X.length();
        int len2 = Y.length();
        int diff = len2-len1;
        int carry = 0;
        int intSum;
        for(int i=len1-1; i>=0; i--){
            intSum = ((X[i]-'0')+(Y[i+diff]-'0')+carry);
            sum.push_back(intSum%10 + '0');
            carry = intSum/10;
        }
        for(int i=diff-1; i>=0; i--){
            intSum = ((Y[i]-'0')+carry);
            sum.push_back(intSum%10 +'0');
            carry = intSum/10;
        }
        if(carry)
            sum.push_back(carry+'0');
        reverse(sum.begin(), sum.end());
        return sum;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends
