#include <iostream>
#include <string>
#include <map>


using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> faces = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20},};

    int faces_count = 0;
    while(n--) {
        string input;
        cin >> input;
        faces_count += faces[input];
    }
    cout << faces_count << endl;

    return 0;
}
