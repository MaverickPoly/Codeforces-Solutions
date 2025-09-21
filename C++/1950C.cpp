#include <bits/stdc++.h>
#include <format>

using namespace std;

vector<string> split(string st, char delimiter) {
    vector<string> parts;
    stringstream ss(st);

    string token;
    while(getline(ss, token, delimiter)) {
        parts.push_back(token);
    }

    return parts;
}

int main() {
    int t;
    cin >> t;

    while(t--) 
    {
        string st;
        cin >> st;

        vector<string> parts = split(st, ':');
        string period = "AM";

        int hour = stoi(parts[0]);
        if (hour == 0) {
            hour = 12;
            period = "AM";
        }
        else if (hour == 12) {
            period = "PM";
        }
        else if (hour > 12) {
            hour %= 12;
            period = "PM";
        }

        printf("\t%02d:%s %s\n", hour, parts[1].c_str(), period.c_str());
    }

    return 0;
}