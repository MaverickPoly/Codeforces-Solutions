#include <bits/stdc++.h>

using namespace std;

// Function to calculate a sum of two numbers in a form of a string
string add_nums(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int asize = a.size();
    int bsize = b.size();

    string res = "";
    int cur = 0;
    for (int i = 0; i < max(asize, bsize); i++) {
        int numa = i < asize ? a[i] - '0' : 0;
        int numb = i < bsize ? b[i] - '0' : 0;

        int s = numa + numb + cur;
        cur = s / 10;

        res.push_back(s % 10 + '0');
    }

    if (cur) res.push_back(cur);
    
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string a, b;
    cin >> a >> b;

    // Calculate sum
    string sum = add_nums(a, b);

    // cout << "REMOVE A\n";
    
    // Remove all zeros from a
    string a_c = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != '0') a_c.push_back(a[i]);
    }

    // cout << "REMOVE B\n";

    // Remove all zeros from b
    string b_c = "";
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != '0') b_c.push_back(b[i]);
    }

    // cout << "REMOVE SUM\n";

    // Remove all zeros from sum
    string sum_without_zeros = "";
    for (int i = 0; i < sum.size(); i++) {
        if (sum[i] != '0') sum_without_zeros.push_back(sum[i]);
    }

    // cout << "FINAL SUM\n";

    string final_sum = add_nums(a_c, b_c);
    // cout << sum << " " << sum_without_zeros << " " << final_sum << endl;
    if (final_sum == sum_without_zeros) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }


    return 0;
}
