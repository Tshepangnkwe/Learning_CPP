#include <iostream>
#include <vector>
#include <map>
#include <string>

class Stokvel {
private:
    std::map<std::string, int> members;
    std::vector<std::string> transactions;

public:
    void add_member(const std::string& name) {
        if (members.find(name) == members.end()) {
            members[name] = 0;
            std::cout << name << " has been added as a member." << std::endl;
        } else {
            std::cout << name << " is already a member." << std::endl;
        }
    }

    void make_contribution(const std::string& name, int amount) {
        if (members.find(name) != members.end()) {
            members[name] += amount;
            transactions.push_back(name + " contributed " + std::to_string(amount));
            std::cout << name << " contributed " << amount << " to the Stokvel." << std::endl;
        } else {
            std::cout << name << " is not a member of the Stokvel." << std::endl;
        }
    }

    void distribute_funds() {
        if (members.empty()) {
            std::cout << "No members in the Stokvel." << std::endl;
            return;
        }

        if (transactions.empty()) {
            std::cout << "No contributions have been made yet." << std::endl;
            return;
        }

        std::string current_member = transactions.front();
        transactions.erase(transactions.begin());
        size_t pos = current_member.find(" contributed ");
        std::string name = current_member.substr(0, pos);
        int contribution = std::stoi(current_member.substr(pos + 13));

        if (members[name] >= contribution) {
            members[name] -= contribution;
            transactions.push_back(current_member);
            std::cout << name << " received " << contribution << " from the Stokvel." << std::endl;
        } else {
            std::cout << "Not enough funds for " << name << " to receive " << contribution << "." << std::endl;
        }
    }

    void show_members() {
        if (members.empty()) {
            std::cout << "No members in the Stokvel." << std::endl;
        } else {
            for (const auto& entry : members) {
                std::cout << entry.first << ": " << entry.second << std::endl;
            }
        }
    }

    void show_transactions() {
        if (transactions.empty()) {
            std::cout << "No transactions yet." << std::endl;
        } else {
            for (const std::string& transaction : transactions) {
                std::cout << transaction << std::endl;
            }
        }
    }
};

int main() {
    Stokvel stokvel;

    while (true) {
        std::cout << "\nStokvel Bookkeeping Platform" << std::endl;
        std::cout << "1. Add Member" << std::endl;
        std::cout << "2. Make Contribution" << std::endl;
        std::cout << "3. Distribute Funds" << std::endl;
        std::cout << "4. Show Members" << std::endl;
        std::cout << "5. Show Transactions" << std::endl;
        std::cout << "6. Exit" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        //To be continued

    return 0;
}