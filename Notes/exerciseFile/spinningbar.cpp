#include <iostream>
#include <thread> // For std::this_thread
#include <chrono> // For std::chrono

static char s[4] = { '|', '/', '-', '\\' };

int main() {
    int a = 0;
    while (true) {
        std::cout << s[a % 4];
        std::cout.flush();
        
        // Add a delay here using std::this_thread and std::chrono
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // 100 milliseconds delay
        
        a++;
        std::cout << '\b'; // Move the cursor back to overwrite the spinner
    }

    return 0;
}

