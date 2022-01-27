### File Compressor using Huffman's Coding Algorithm:

---

###### Data Structures:

1. Queue
  
2. Unordered Map
  
3. Vector
  
4. Binary Heap
  

---

###### Steps:

1. Get frequency of each character from the input text
  
2. Build Huffman Tree and assign the binary code to each character
  
3. *Compression:* Encode each character of the input text with the binary code
  
4. *Decompression:* Decode by replacing each binary code with the associated character
  

---

- Linked list will be used extensively to generate the Huffman Tree
  
- Unordered Maps from the STL will be utilised in storing the characters and their frequencies
  
- Priority queue will be cruicial while generating the Huffman Tree as the algorithm depends on the priority of the characters
  
- Vectors from the STL will be required to create leaf nodes for each character and to add them to the priority queue
  

---