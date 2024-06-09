### Constant Class Members

**Constant Member Variables:** 
- Declared with the `const` keyword.
- Must be initialized either in the constructor initializer list or where they are declared.

**Constant Member Functions:** 
- Functions that do not modify any member variables of the class.
- Declared with the `const` keyword after the function signature.

### Static Class Members

**Static Member Variables:** 
- Declared using the `static` keyword inside the class declaration.
- Must be defined outside the class definition.

**Static Member Functions:** 
- Functions that can access only static member variables and other static member functions.
- Declared with the `static` keyword.

### Memory Allocation

**Static Allocation:** 
- Lifetime of the entire program.
- Used for global and static variables.

**Automatic Allocation:** 
- Lifetime limited to the scope of the block or function.
- Used for local variables.

**Dynamic Allocation:** 
- Manual control over the lifetime.
- Used for objects requiring longer or variable lifetimes.
- Managed using `new` and `delete`.
