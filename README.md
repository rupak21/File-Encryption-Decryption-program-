"# File-Encryption-Decryption-program-" 
This C++ program allows you to encrypt and decrypt text files using the Caesar cipher encryption algorithm. The program prompts you to input the file names and encryption/decryption key. It then performs the operation and saves the result in a new file.

Caution: The Caesar cipher is a basic encryption method for educational purposes. For real-world use, consider more secure algorithms like AES or RSA.

Usage
Prepare a text file (input.txt) with the content to encrypt/decrypt.

Run the program and provide the input/output file names and key.

The program will create a new file with the encrypted/decrypted content.

Note: To decrypt, use the same key you used for encryption.

Contributing
Contributions are welcome! Feel free to open a pull request for improvements or fixes.

License
This project is under the MIT License. You can use, modify, and distribute the code as allowed by the license.









------------------------------------------------------------------------------------------------------------------------------------------
Caesar cipher is one of the simplest and oldest encryption techniques used to secure information. It is a type of substitution cipher where each character in the plaintext (original message) is shifted by a fixed number of positions down the alphabet or in the ASCII table to create the ciphertext (encrypted message).

Here's how the Caesar cipher works:

Encryption Process:

Choose a key (an integer between 1 and 25) that represents the number of positions each character in the plaintext will be shifted.
For each character in the plaintext:
If the character is a letter (A-Z or a-z), shift it by the key value. For example, if the key is 3, 'A' will become 'D', 'B' will become 'E', 'Z' will become 'C', 'a' will become 'd', 'b' will become 'e', and so on.
If the character is not a letter (e.g., space, punctuation, or a number), leave it unchanged.
The resulting encrypted message is the ciphertext.
Decryption Process:

To decrypt the ciphertext, use the reverse process. Choose the same key value, but instead of shifting the characters forward, shift them backward by the key value.
For each character in the ciphertext:
If the character is a letter, shift it backward by the key value to find the original plaintext character.
If the character is not a letter, leave it unchanged.
The resulting decrypted message is the original plaintext.
