# Simple-Encryption-and-Decryption-Program
Below is the content for a "README.md" file to provide information about the simple encryption and decryption program:

---

# Simple Encryption and Decryption Program


## Table of Contents

- [Introduction](#introduction)
- [Program Overview](#program-overview)
- [Usage Instructions](#usage-instructions)
- [Encryption Algorithm](#encryption-algorithm)
- [Limitations](#limitations)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This is a simple encryption and decryption program implemented in the C programming language. The program allows users to encrypt their text data using a basic substitution cipher and later decrypt it back to its original form. It demonstrates concepts of random number generation and circular search to achieve encryption and decryption functionalities.

## Program Overview

The program consists of the following main components:

- `generateRandomNumber`: A function that generates a random number within a given range. It is used to shuffle the order of characters during encryption.

- `circle`: A function that performs a circular search for a target element within an array and returns its index. It plays a key role in decrypting the encrypted data.

- `encryption`: This function handles the encryption process. It prompts the user to input text data, generates a random encryption key, performs the encryption, and saves the encrypted data and encryption key to separate files.

- `dencryption`: This function handles the decryption process. It reads the encrypted data and encryption key from files, decrypts the data using the key, and displays the decrypted text to the user.

- `main`: The `main` function serves as the entry point of the program. It provides users with the option to either encrypt or decrypt data and then calls the corresponding functions.

## Usage Instructions

1. Clone the repository to your local machine.

2. Compile the C program using a C compiler.

3. Execute the compiled program in your terminal or command prompt.

4. The program will prompt you with options:
   - Enter "1" to encrypt data.
   - Enter any other key to decrypt data.

5. For encryption, enter the text data you wish to encrypt. The encrypted data will be saved to a file named "encryption.txt," and the encryption key will be saved to a file named "KEY."

6. For decryption, make sure the "encryption.txt" and "KEY" files are present in the same directory as the program. The decrypted text will be displayed on the terminal.

## Encryption Algorithm

The encryption algorithm used in this program is a basic substitution cipher. During encryption, each character of the input data is replaced with another character based on a randomly generated key. The key represents the original index of each character in the input data. By shuffling the order of characters according to this key, the encryption process obfuscates the original data, making it challenging to decipher without the correct key.

## Limitations

- The encryption algorithm employed in this program is a basic substitution cipher and is not suitable for securing sensitive data. For real-world encryption needs, more robust and well-established encryption algorithms and libraries should be utilized.

- The program assumes that the input text does not exceed the size of the `Endata` and `Rdata` arrays. For larger inputs, additional memory management may be required.

- Error handling for invalid input or file operations is minimal in this version of the program. For production-grade code, more comprehensive error handling can be implemented.

## Contributing

Contributions to the project are welcome. If you encounter any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.


---

Save the content above in a file named "README.md" in the same directory as the C program. This will provide users with information about the program and how to use it.
