# Thought Process

create a 1D vector, to store the results -- to be returned at the end
create ​a map with int vector for key and a string vector for value

- iterate through input array of strings
  - create a vector that represents the alphabet
  - each element in the vector represents the count of the corresponding alphabet
    - e.g. eat will be e-1 a-1 t-1, the same as 10001000000000000001000000
      - this will be the key for the map

- iterate through the map
  - add each entry to the results 2d vector
