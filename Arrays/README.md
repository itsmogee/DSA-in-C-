# Dynamic Arrays / Vectors

## Big O

### Time

- O(1) : Insert/Remove at the end, Index, Update
- O(n) : Insert/Remove at other places

### Space

- Contiguous in memory, so proximity helps performance
- O(n)

## Properties

- size
- capacity

## Methods

- [x] is_empty()
- [x] at(index) - returns the item at a given index, blows up if index out of bounds
- [x] push(item)
- [x] insert(index, item) - inserts item at index, shifts that index's value and trailing elements to the right
- [x] prepend(item) - can use insert above at index 0
- [x] pop() - remove from end, return value
- [x] delete(index) - delete item at index, shifting all trailing elements left
- [x] remove(item) - looks for value and removes index holding it (even if in multiple places)
- [x] find(item) - looks for value and returns first index with that value, -1 if not found
- [x] resize(new_capacity) // private function

## TODO:

- Create Unit tests for each method
