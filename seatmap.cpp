#include <iostream>
#include <vector>


using namespace std;


// Arrays for LOWER, MIDDLE, and UPPER




std::vector<int> lower = {1, 4, 9, 12, 17, 20, 25, 28, 33, 34, 41, 49, 52, 57, 60, 65, 68, 73, 76};
std::vector<int> middle = {2, 5, 10, 13, 18, 21, 26, 29, 34, 37, 42, 45, 50, 53, 58, 61, 66, 69, 74, 77};
std::vector<int> upper = {3, 6, 11, 14, 19, 22, 27, 30, 35, 38, 43, 46, 51, 54, 59, 62, 67, 70, 75, 78};
std::vector<int> sideLower = {7, 15, 23, 31, 39, 47, 55, 63, 71, 79};
std::vector<int> sideUpper = {8, 16, 24, 32, 40, 48, 56, 64, 72, 80};
 


 std::vector<int> lowerBerth1 = {1, 4, 9, 12, 17, 20, 25, 28, 33, 36, 41, 44, 49, 52, 57, 60};
    std::vector<int> middleBerth1 = {2, 5, 10, 13, 18, 21, 26, 29, 34, 37, 42, 45, 50, 53, 58, 61};
    std::vector<int> upperBerth1 = {3, 6, 11, 14, 19, 22, 27, 30, 35, 38, 43, 46, 51, 54, 59, 62};
    std::vector<int> sideLowerBerth1 = {7, 15, 23, 31, 39, 47, 55, 63};
    std::vector<int> sideUpperBerth1 = {8, 16, 24, 32, 40,48,56,64};


    std::vector<int> lowerBerth = {1, 3, 7, 9, 13, 15, 19, 21, 25, 27, 31, 33, 37, 39, 43, 45, 49, 51};
    std::vector<int> upperBerth = {2, 4, 8, 10, 14, 16, 20, 22, 26, 28, 32, 34, 38, 40, 44, 46, 50, 52};
    std::vector<int> sideLowerBerth = {5, 11, 17, 23, 29, 35, 41, 47, 53};
    std::vector<int> sideUpperBerth = {6, 12, 18, 24, 30, 36,42,48,54};









// Binary search function to find the seat number
bool binarySearch(const std::vector<int>& arr, int key) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return true;
        }

        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

// Function for finding the section based on seat number
std::string findSection(int seatNumber,int d) {
    
    if(d==1){
    if (binarySearch(lower, seatNumber)) {
        return "LOWER";
    } else if (binarySearch(middle, seatNumber)) {
        return "MIDDLE";
    } else if (binarySearch(upper, seatNumber)) {
        return "UPPER";
    } else if (binarySearch(sideLower, seatNumber)) {
        return "SIDE LOWER";
    } else if (binarySearch(sideUpper, seatNumber)) {
        return "SIDE UPPER";
    } else {
        return "Seat not found in any section.";
    }
    }

    else if(d==2){
        if (binarySearch(lowerBerth1, seatNumber)) {
        return "LOWER";
    } else if (binarySearch(middleBerth1, seatNumber)) {
        return "MIDDLE";
    } else if (binarySearch(upperBerth1, seatNumber)) {
        return "UPPER";
    } else if (binarySearch(sideLowerBerth1, seatNumber)) {
        return "SIDE LOWER";
    } else if (binarySearch(sideUpperBerth1, seatNumber)) {
        return "SIDE UPPER";
    } else {
        return "Seat not found in any section.";
    }
    }


     else if(d==3){
        if (binarySearch(lowerBerth, seatNumber)) {
        return "LOWER";
    } 
     else if (binarySearch(upperBerth, seatNumber)) {
        return "UPPER";
    } else if (binarySearch(sideLowerBerth, seatNumber)) {
        return "SIDE LOWER";
    } else if (binarySearch(sideUpperBerth, seatNumber)) {
        return "SIDE UPPER";
    } else {
        return "Seat not found in any section.";
    }
    }

    }


int main() {
    cout<<"enter 1 for sleeper class"<<endl;
    cout<<"enter 2 for 3AC class"<<endl;
    cout<<"enter 3 for 2AC class"<<endl;
    int q;
    cin>>q;


    


   
    int seatNumber;
    std::cout << "Enter seat number to search: ";
    std::cin >> seatNumber;

    std::string section = findSection(seatNumber,q);
    std::cout << "The seat " << seatNumber << " is in the " << section << " section." << std::endl;

    return 0;
}
