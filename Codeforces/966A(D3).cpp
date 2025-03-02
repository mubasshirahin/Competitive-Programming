#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x = n; // Save the original number

        // Determine the number of digits in n
        int digit = (int)log10(n) + 1;

        // Create an array to store each digit of n
        int arr[digit] = {0};

        // Fill the array with digits from n
        for (int i = digit - 1; i >= 0; i--) {
            int ld = n % 10;
            n = n / 10;
            arr[i] = ld;
        }

        // Check if the number starts with a digit >= 2
        if (arr[0] >= 2) {
            cout << "NO" << endl;
            continue;
        }

        // Find the number of leading zeros
        int leadingZeros = 0;
        for (int i = 1; i < digit; i++) {
            if (arr[i] == 0) {
                leadingZeros++;
            } else {
                break;
            }
        }

        // If the number of leading zeros is not exactly 1, output "NO"
        if (leadingZeros != 1) {
            cout << "NO" << endl;
        } else {
            // Extract the remaining part of the number not included in the array
            int remainingPart = 0;
            int multiplier = 1;

            // Calculate the remaining part
            for (int i = digit - 1; i >= leadingZeros + 1; i--) {
                remainingPart += arr[i] * multiplier;
                multiplier *= 10;
            }

            // Output the remaining part
            //cout << remainingPart << " " << endl;
            if(remainingPart>=2){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
