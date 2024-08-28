# Thought Process

Since I cannot use any type of hash, I opt to using `std::vector<bool>` to keep track of what is added and deleted.

The vector will have the max size based on the constraints, which is 0 <= key <= 10<sup>6</sup>. The input key will be inserted at the index, where index == key, and change false to true. Adding a key will be O(1)

The same concept is applied when deleting a key. Since key and index are the same, changing bool from true to false will be O(1)

Since key and index are the same, finding whether the key is present will be O(1)
