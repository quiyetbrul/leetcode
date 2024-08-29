# Thought Process

- find the delta between CityB cost - CityA cost to find how much the company would save if the interviewee is sent to CityB.
- Save all the delta in a 2d vector <c2-c1, c1, c2> -- we add c1, c2 to keep track of associated values with the delta
- Sort the 2d vector using the delta, we do this by using a predicate inside std::sort, which is `[](const std::vector<int>& a, const std::vector<int>& b) {return a[0] < b[0]; }` to sort the 2d vector inceasingly using first column (delta of c2-c1)
- the first half of this 2d vector will go to CityB while the rest will go to CityA
