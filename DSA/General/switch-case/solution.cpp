class Solution {
public:
    /* Function to determine the day of
    the week based on day number */
    void whichWeekDay(int day) {
        // Check if the day number is valid


        // Print the corresponding day of the week
        switch (day) {
            case 1: cout << "Monday"; break;
            case 2: cout << "Tuesday"; break;
            case 3: cout << "Wednesday"; break;
            case 4: cout << "Thursday"; break;
            case 5: cout << "Friday"; break;
            case 6: cout << "Saturday"; break;
            case 7: cout << "Sunday"; break;
            default: cout << "Invalid";
        }
    }
};