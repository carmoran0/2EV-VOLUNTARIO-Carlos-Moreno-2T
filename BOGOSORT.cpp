#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

// Bogosort function to check if the numbers are sorted
bool isSorted(std::vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] > nums[i+1]) {
            return false;
        }
    }
    return true;
}

// Bogosort function to shuffle the numbers randomly
void shuffle(std::vector<int>& nums) {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(nums.begin(), nums.end(), g);
}

// Bogosort function to sort the numbers
void bogosort(std::vector<int>& nums) {
    while (!isSorted(nums)) {
        shuffle(nums);
    }
}

int main() {
    std::vector<int> nums;
    
    int num;
    char choice;
    
    do {
        std::cout << "NUUMERO: ";
        std::cin >> num;
        nums.push_back(num);
        
        std::cout << "otro numero? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    bogosort(nums);
    
    std::cout << "ordenados: ";
    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}