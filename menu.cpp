#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int userID;
    string username;
    string password;
    static int nextID;  // Biến tĩnh để đánh số tự động cho userID

public:
    Account(string user, string pass) : username(user), password(pass) {
        userID = nextID++;
    }

    // hiển thị thông tin tài khoản
    void display() const {
        cout << "\nTao tai khoan thanh cong!" << endl;
        cout << "UserID: " << userID << endl;
        cout << "Username: " << username << endl;
    }
};

// Khởi tạo biến tĩnh
int Account::nextID = 0;

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "-----------------------" << endl;
        cout << "1. Tao tai khoan" << endl;
        cout << "2. Exit" << endl;
        cout << "Chon tuy chon: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string user, pass;
                cout << "Nhap username: ";
                cin >> user;
                cout << "Nhap password: ";
                cin >> pass;
                Account acc(user, pass);
                acc.display();
                break;
            }
            case 2:
                cout << "Thoat chuong trinh!" << endl;
            running = false;
            break;
            default:
                cout << "Choice not valid" << endl;
            break;
        }
    }

    return 0;
}
