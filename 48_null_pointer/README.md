nullptrs are helpful when determining if an address was successfully assigned to a pointer.
When using pointer, be careful that your code isn't dereferencing nullptr or pointing to free memory
This will cause undefined behavior.