#include <iostream>
using namespace std;

class TokenSystem {
    static int token; // Static variable jo share hoga

public:
    void generateToken() {
    	
        token++; // Har dafa token barhao
        
        // Agar token 50 se upar nikal jaye to reset kar do
        if (token > 50) {
            token = 1; // 0 se start karna hai to 0 likh dein
        }
        
        cout << "Aapka Token Number hai: " << token << endl;
    }
    static void getcount(){
    	cout<<"The count is this "<<token<<endl;
	}
};

// Memory allocation aur initialization
int TokenSystem::token = 0;

int main() {
    TokenSystem customer;

    // Test karne ke liye loop chalate hain taake 50 tak jaye
    cout << "--- Token Generation Start ---" << endl;
    for (int i = 1; i <= 55; i++) {
    	
        cout << "Customer " << i << ": ";
        customer.generateToken();
        TokenSystem::getcount();
    }

    return 0;
}
