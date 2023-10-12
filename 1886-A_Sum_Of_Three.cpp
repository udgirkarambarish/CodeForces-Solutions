#include <iostream>
using namespace std;
int main() {
    int n,t;
    cin>>t;
//     std::cout << "Enter an integer n: ";
    while(t--){
    std::cin >> n;
 
    if (n < 6) {
        std::cout << "NO" << std::endl;
    } else {
        bool found = false;
 
        for (int x = 1; x <= n - 2; x++) {
            for (int y = x + 1; y <= n - 1; y++) {
                int z = n - x - y;
 
                if (z > y && x % 3 != 0 && y % 3 != 0 && z % 3 != 0) {
                    cout<<"YES"<<endl;
                    std::cout << x << " " << y << " " << z << std::endl;
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
 
        if (!found) {
            std::cout << "NO" << std::endl;
        }
    }
    }
 
    return 0;
}