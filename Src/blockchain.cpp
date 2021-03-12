#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

//Transaction Data
struct TransactionData {

    double amount;
    string senderKey;
    string receiveKey;
    time_t timestamp;

}

class Block {
    private:

        int index;
        size_t blockHash;
        size_t previousHash;
        size_t generateHash;

        public:

            Block(int idx, TransactionData d, size_t prevHash);

            size_t getHash();

            size_t getPreviousHash();

            TransactionData data;

            bool isHashvalid();
};
