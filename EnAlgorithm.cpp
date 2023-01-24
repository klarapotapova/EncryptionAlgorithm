#include <iostream>
#include <string>

std::string encrypt(const std::string& plaintext, int key) {
    std::string ciphertext;
    for (const auto& c : plaintext) {
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            ciphertext += char(((c - offset + key) % 26) + offset);
        } else {
            ciphertext += c;
        }
    }
    return ciphertext;
}

int main() {
    std::string plaintext;
    int key;
    std::cout << "Enter a message to encrypt: ";
    std::getline(std::cin, plaintext);
    std::cout `oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter a key (1-26): \";\n    std::cin >>"}` key;

    std::string ciphertext = encrypt(plaintext, key);
    std::cout << "Encrypted message: " << ciphertext << std::endl;

    return 0;
}
