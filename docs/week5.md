# Week 5: Data Structures

## Overview
Week 5 focuses on fundamental data structures in C, with a particular emphasis on linked lists. The implementation includes two different approaches to linked list creation and management.

## Linked List Implementations

### Demo Implementation
File: `Data-structures/linked_list_demo.c`

#### Features
1. **Node Structure**
   ```c
   typedef struct node {
       int number;
       struct node *next;
   } node_t;
   ```

2. **Key Functions**
   - `create_node`: Allocates and initializes new nodes
   - `print_list_visual`: Displays the list with arrow notation

3. **Memory Management**
   - Proper memory allocation with `malloc`
   - Complete memory cleanup to prevent leaks
   - Error handling for allocation failures

4. **Visualization**
   - Visual representation of list structure
   - Shows connections between nodes using arrows
   - Clear NULL termination display

### Basic Node Implementation
File: `Data-structures/node.c`

#### Features
1. **Node Structure**
   ```c
   struct Node {
       int data;
       struct Node *next;
   };
   ```

2. **Functions**
   - `initializeHead`: Creates an empty list
   - `createFunctionForCreatingNode`: Node creation with error handling

3. **Key Concepts**
   - Dynamic memory allocation
   - Pointer manipulation
   - Error handling for NULL cases

## Implementation Differences

### Linked List Demo
- Uses typedef for cleaner syntax
- Includes visualization functionality
- Complete implementation with list traversal
- Demonstrates full list operations

### Node Implementation
- Basic structure setup
- Focus on fundamental operations
- Emphasizes error handling
- Foundation for further development

## Learning Outcomes
- Understanding of pointer-based data structures
- Memory management in C
- Dynamic memory allocation
- Error handling in data structures
- Linked list operations and traversal
- Visual representation of data structures

## Best Practices Demonstrated
1. **Memory Management**
   - Proper allocation and deallocation
   - Null checks
   - Memory leak prevention

2. **Error Handling**
   - NULL pointer checks
   - Allocation failure handling
   - Proper error reporting

3. **Code Organization**
   - Clear structure definitions
   - Modular function design
   - Descriptive naming conventions

4. **Documentation**
   - Clear comments
   - Function purpose documentation
   - Structure explanation