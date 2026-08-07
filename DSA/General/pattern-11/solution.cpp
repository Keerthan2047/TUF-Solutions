class Solution {
public:
    void pattern11(int n) {
    	for (int i = 0; i < n; i++) {
    		for (int j=i; j >= 0; j--) {
    			if (j%2 == 0) {
    				cout << "1 "; 
				} else {
					cout << "0 ";
				}
			}
			cout << endl;
		}    	
	} 
};