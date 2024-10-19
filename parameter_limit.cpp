#include <iostream>
#include <vector>
using namespace std;


template <typename... Args>
void test_function(Args... args) {
   
}
int main() {
    int num_params;

    cout << "Entrez le nombre de paramètres : ";
    cin >> num_params;
    try {
        
        while (true) {
            
            vector<int> params(num_params, 1);
            
            
            test_function(params.begin(), params.end());

            cout << "Successfully passed " << num_params << " parameters." << endl;

            
            num_params++;

        }
    } catch (exception &e) {
        cout << "Error encountered after passing " << num_params << " parameters: " << e.what() << endl;
    }

    return 0;
}
