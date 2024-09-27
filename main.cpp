// // // // // // // // #include <iostream>

// // // // // // // // template <std::size_t n>
// // // // // // // // struct Fib {
// // // // // // // //     enum : unsigned long long {val = Fib<n-1>::val + Fib<n-2>::val};
// // // // // // // // };

// // // // // // // // template <>
// // // // // // // // struct Fib<1> {
// // // // // // // //     enum {val = 1};
// // // // // // // // };

// // // // // // // // template <>
// // // // // // // // struct Fib<2> {
// // // // // // // //     enum {val = 1};
// // // // // // // // };

// // // // // // // // template <std::size_t n>
// // // // // // // // struct Fact {
// // // // // // // //     enum : unsigned long long {val = n * Fact<n-1>::val};
// // // // // // // // };

// // // // // // // // template <>
// // // // // // // // struct Fact<1> {
// // // // // // // //     enum : unsigned long long {val = 1};
// // // // // // // // };

// // // // // // // // template <int f, int s>
// // // // // // // // struct max {
// // // // // // // //     enum {val = f > s ? f : s};
// // // // // // // // };

// // // // // // // // template <int f, int s>
// // // // // // // // struct min {
// // // // // // // //     enum {val = f < s ? f : s};
// // // // // // // // };

// // // // // // // // std::size_t gcd(std::size_t arg1, std::size_t arg2) {
// // // // // // // //     while (arg2 != 0) {
// // // // // // // //         std::size_t tmp = arg2;
// // // // // // // //         arg2 = arg1 % arg2;
// // // // // // // //         arg1 = tmp;
// // // // // // // //     }
// // // // // // // //     return arg1;
// // // // // // // // }

// // // // // // // // template <std::size_t f, std::size_t s>
// // // // // // // // struct GCD {
// // // // // // // //     enum : std::size_t {res = GCD<s, f % s>::res};
// // // // // // // // };

// // // // // // // // template <std::size_t f>
// // // // // // // // struct GCD<f, 0> {
// // // // // // // //     enum : std::size_t {res = f};
// // // // // // // // };

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     std::cout << GCD<48,18>::res << std::endl;
// // // // // // // //     std::cout << gcd(48, 18) << std::endl;
// // // // // // // //     std::cout << Fib<902>::val << std::endl;
// // // // // // // //     std::cout << Fact<65>::val << std::endl;
// // // // // // // //     std::cout << max<5,4>::val << std::endl;
// // // // // // // //     std::cout << min<4,5>::val << std::endl;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // #include <algorithm>
// // // // // // // // #include <vector>
// // // // // // // // #include <list>
// // // // // // // // #include <forward_list>
// // // // // // // // #include <string>

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     const int size = 26;
// // // // // // // //     std::vector<std::list<std::string>> vec(size);
// // // // // // // //     std::vector<std::string> NamesVector(size);


// // // // // // // //     for (auto it = NamesVector.begin(); it != NamesVector.end(); ++it) {
// // // // // // // //         std::cin >> *it;
// // // // // // // //     }

// // // // // // // //     for (auto it = NamesVector.begin(); it != NamesVector.end(); ++it) {
// // // // // // // //         vec[*(it->begin()) - 65].push_back(*it);
// // // // // // // //     }

// // // // // // // //     for (auto it = vec.begin(); it != vec.end(); ++it) {
// // // // // // // //         for (auto jt = it->begin(); jt != it->end(); ++jt) {
// // // // // // // //             std::cout << *jt << std::endl;
// // // // // // // //         }
// // // // // // // //     }

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // #include <vector>

// // // // // // // // std::vector<int>::const_iterator Finde_Min(const std::vector<int>::const_iterator& start, const std::vector<int>::const_iterator& end) {

// // // // // // // //     std::vector<int>::const_iterator index = start;

// // // // // // // //     for (auto it = start + 1; it != end; ++it)
// // // // // // // //         if (*index > *it)
// // // // // // // //             index = it;


// // // // // // // //     return index;
// // // // // // // // }

// // // // // // // // const std::vector<int>& SelectionSort(const std::vector<int>& vec) {

// // // // // // // //     for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
// // // // // // // //         std::vector<int>::const_iterator smallest = Finde_Min(it, vec.cend());
// // // // // // // //         std::swap(const_cast<int&>(*smallest), const_cast<int&>(*it));
// // // // // // // //     }

// // // // // // // //     return vec;
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     std::vector<int> vec = {10,9,8,7,6,5,4,3,2,1};
// // // // // // // //     vec = SelectionSort(vec);

// // // // // // // //     for (auto i : vec)
// // // // // // // //         std::cout << i << " ";

// // // // // // // //     std::cout << std::endl;

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // #include <stack>
// // // // // // // // #include <queue>
// // // // // // // // #include <deque>

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     const int size = 10;
// // // // // // // //     std::queue<int> qu;
// // // // // // // //     // std::deque<int> dqu;

// // // // // // // //     for (int i = 0; i < size; ++i)
// // // // // // // //         qu.push(i + 1);


// // // // // // // //     //1,2,3,4,5,6,7,8,9,10
// // // // // // // //     // std::cout << qu.front() << std::endl;
// // // // // // // //     // std::cout << qu.back() << std::endl;
// // // // // // // //     // qu.pop();

// // // // // // // //     // std::cout << qu.front() << std::endl;
// // // // // // // //     // std::cout << qu.back() << std::endl;

// // // // // // // //     // std::stack<int> stck;

// // // // // // // //     // for (int i = 0; i < size; ++i)
// // // // // // // //     //     stck.push(i + 1);

// // // // // // // //     // std::cout << stck.top() << std::endl;

// // // // // // // //     // stck.pop();

// // // // // // // //     // std::cout << stck.top() << std::endl;

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // #include <iostream>

// // // // // // // // template <std::size_t n>
// // // // // // // // int foo(int (&arr)[n]) {
// // // // // // // //     return n;
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     int arr[] = {1,2,3,4,5,6,7,8,9,10};
// // // // // // // //     std::cout << foo(arr) << std::endl;

// // // // // // // //     return 0;
// // // // // // // // }


// // // // // // // // #include <iostream>
// // // // // // // // #include <vector>



// // // // // // // // std::size_t gcd(std::size_t f, std::size_t s) {
// // // // // // // //     while (s != 0) {
// // // // // // // //         std::size_t tmp = s;
// // // // // // // //         s = f % s;
// // // // // // // //         f = tmp;
// // // // // // // //     }
// // // // // // // //     return f; 
// // // // // // // // }

// // // // // // // // template <std::size_t f, std::size_t s>
// // // // // // // // struct GCD {
// // // // // // // //     enum : std::size_t { res = GCD<s, f % s>::res };
// // // // // // // // };

// // // // // // // // template <std::size_t f>
// // // // // // // // struct GCD<f, 0> {
// // // // // // // //     enum : std::size_t { res = f};
// // // // // // // // };

// // // // // // // // std::vector<int>::iterator get_pivot(std::vector<int>::iterator beg, std::vector<int>::iterator end) {
// // // // // // // //     std::vector<int>::iterator pvt = end - 1;
// // // // // // // //     std::vector<int>::iterator idx = beg - 1;

// // // // // // // //     for (auto it = beg; it != end; ++it) {
// // // // // // // //         if (*it < *pvt) {
// // // // // // // //             ++idx;
// // // // // // // //             std::swap(*idx, *it);
// // // // // // // //         }
// // // // // // // //     }

// // // // // // // //     std::swap(*(idx + 1), *pvt);
// // // // // // // //     return idx + 1;
// // // // // // // // }

// // // // // // // // void QuickSort(std::vector<int>::iterator& beg, std::vector<int>::iterator& end) {
// // // // // // // //     if (beg < end) {
// // // // // // // //         std::vector<int>::iterator pvt = get_pivot(beg, end);
// // // // // // // //         std::vector<int>::iterator pvtPlusOne = pvt + 1;

// // // // // // // //         QuickSort(beg, pvt);
// // // // // // // //         QuickSort(pvtPlusOne, end);
// // // // // // // //     }
// // // // // // // // }

// // // // // // // // std::vector<int>::iterator Find_Min(std::vector<int>::iterator beg, std::vector<int>::iterator end) {

// // // // // // // //     std::vector<int>::iterator min = beg;

// // // // // // // //     for (auto i = beg + 1; i < end; ++i) 
// // // // // // // //         if (*min > *i)
// // // // // // // //             min = i;

// // // // // // // //     return min;
// // // // // // // // }

// // // // // // // // void Selection_Sort(std::vector<int>& vec) {
// // // // // // // //     for (auto it = vec.begin(); it != vec.end(); ++it) {
// // // // // // // //         std::vector<int>::iterator min = Find_Min(it, vec.end());
// // // // // // // //         std::swap(*it,*min);
// // // // // // // //     }
// // // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // #include <vector>

// // // // // // // std::size_t gcd(std::size_t f, std::size_t s) {
// // // // // // //     while (s != 0) {
// // // // // // //         std::size_t tmp = s;
// // // // // // //         s = f % s;
// // // // // // //         f = tmp;
// // // // // // //     }
// // // // // // //     return f;
// // // // // // // }

// // // // // // // template <std::size_t f, std::size_t s>
// // // // // // // struct GCD {
// // // // // // //     enum : std::size_t { res = GCD<s, f % s>::res };
// // // // // // // };

// // // // // // // template <std::size_t f>
// // // // // // // struct GCD<f, 0> {
// // // // // // //     enum : std::size_t { res = f };
// // // // // // // };

// // // // // // // std::vector<int>::iterator get_pivot(std::vector<int>::iterator beg, std::vector<int>::iterator end) {

// // // // // // //     std::vector<int>::iterator pivot = end - 1;
// // // // // // //     std::vector<int>::iterator idx = beg - 1;

// // // // // // //     for (auto it = beg; it != end; ++it) {
// // // // // // //         if (*it < *pivot) {
// // // // // // //             ++idx;
// // // // // // //             std::swap(*idx, *it);
// // // // // // //         }
// // // // // // //     }

// // // // // // //     std::swap(*(idx + 1), *pivot);
// // // // // // //     return idx + 1;
// // // // // // // }

// // // // // // // void QuickSort(std::vector<int>::iterator beg, std::vector<int>::iterator end) {

// // // // // // //     if (beg < end) {
// // // // // // //         std::vector<int>::iterator pivot = get_pivot(beg, end);
// // // // // // //         std::vector<int>::iterator pivotPlusOne = pivot + 1;
// // // // // // //         QuickSort(beg, pivot);
// // // // // // //         QuickSort(pivotPlusOne, end);
// // // // // // //     }
// // // // // // // }

// // // // // // // std::vector<int>::iterator get_min(std::vector<int>::iterator beg, std::vector<int>::iterator end) {

// // // // // // //     std::vector<int>::iterator min = beg;
// // // // // // //     ++beg;

// // // // // // //     while (beg != end) {
// // // // // // //         if (*min > *beg)
// // // // // // //             min = beg;

// // // // // // //         ++beg;
// // // // // // //     }

// // // // // // //     return min;
// // // // // // // }

// // // // // // // void Selection_Sort(std::vector<int>& vec) {
// // // // // // //     for (auto it = vec.begin(); it != vec.end(); ++it) {
// // // // // // //         std::vector<int>::iterator min = get_min(it, vec.end());
// // // // // // //         std::swap(*min, *it);
// // // // // // //     }
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     std::vector<int> vec = {9,6,8,7,4,5,10,3,20,1};
// // // // // // //     auto bg = vec.begin();
// // // // // // //     auto ed = vec.end();

// // // // // // //     QuickSort(bg, ed);

// // // // // // //     for (auto i : vec)
// // // // // // //         std::cout << i << " ";

// // // // // // //     std::cout << std::endl;

// // // // // // //     std::cout << "End Quick Sort" << std::endl;

// // // // // // //     std::vector<int> vec2 = {9,6,8,7,4,5,10,3,20,1};
// // // // // // //     Selection_Sort(vec2);

// // // // // // //     for (auto i : vec2)
// // // // // // //         std::cout << i << " ";

// // // // // // //     std::cout << std::endl;

// // // // // // //     std::cout << "End Selection Sort" << std::endl;

// // // // // // //     std::cout << gcd(48, 18) << std::endl;
// // // // // // //     std::cout << GCD<48, 18>::res << std::endl;
// // // // // // // }

// // // // // // #include <iostream>
// // // // // // #include <vector>
// // // // // // #include <string>

// // // // // // template <typename T, typename U>
// // // // // // struct pr {
// // // // // // public:
// // // // // //     const T first;
// // // // // //     const U second;
// // // // // //     pr() = delete;
// // // // // //     pr(pr&&) = delete;
// // // // // //     pr(const pr& other)
// // // // // //     : first{other.first}
// // // // // //     , second{other.second}
// // // // // //     {};
// // // // // //     pr(T k, U v) : first{k}, second{v} 
// // // // // //     {

// // // // // //     }
// // // // // // };


// // // // // // int main()
// // // // // // {
// // // // //     // std::vector<pr<std::string, int>> vec = { pr<std::string, int>("Aram", 24)
// // // // //     //                                          ,pr<std::string, int>("Hrach", 27)
// // // // //     //                                          ,pr<std::string, int>("Gegham", 56)                                              
// // // // //     //                                         };

// // // // //     // for (auto i : vec) {
// // // // //     //     std::cout << i.first << " " << i.second << std::endl;
// // // // //     // }
// // // // // //     return 0;
// // // // // // }

// // // // // #include <iostream>
// // // // // #include <string>
// // // // // #include <unordered_map>

// // // // // int main() {

// // // // //     std::unordered_map<double, int> mp = { 
// // // // //         {9.7, 24},
// // // // //         {9.1, 27},
// // // // //         {9.2, 8},
// // // // //     };

// // // // //     // std::cout << mp.find(9.1)->second << std::endl; 
// // // // //     // std::cout << mp.find(9.1)->second << std::endl;
// // // // //     std::unordered_map<double, int>::const_iterator it = mp.begin();
// // // // //     std::cout << it->first << " " << it->second << std::endl;
// // // // //     for (auto i : mp) {
// // // // //         std::cout << i.first << " " << i.second << std::endl;
// // // // //     }
// // // // //     return 0;
// // // // // }

// // // // #include <iostream>
// // // // #include <vector>
// // // // #include <forward_list>
// // // // #include <algorithm>

// // // // void Insertion_Sort(std::vector<int>& vec) {

// // // //     for (auto it = vec.begin() + 1; it != vec.end(); ++it) {
// // // //         int key = *it; 
// // // //         auto j = it - 1;

// // // //         while ((j >= vec.begin()) and (*j > key)) {
// // // //             *(j + 1) = *j; 
// // // //             --j;
// // // //         }

// // // //         *(j + 1) = key;  
// // // //     }

// // // // }

// // // // std::vector<int>::iterator get_min(std::vector<int>::iterator beg, std::vector<int>::iterator end) {

// // // //     std::vector<int>::iterator min = beg;

// // // //     for (auto it = beg + 1; it != end; ++it)
// // // //         if (*min > *it)
// // // //             min = it;

// // // //     return min;
// // // // }

// // // // void Selection_Sort(std::vector<int>& vec) {

// // // //     for (auto it = vec.begin(); it != vec.end(); ++it) {
// // // //         std::vector<int>::iterator min = get_min(it, vec.end());
// // // //         std::swap(*it, *min);
// // // //     }

// // // // }

// // // // std::vector<int>::iterator get_pivot(std::vector<int>::iterator beg, std::vector<int>::iterator end) {

// // // //     std::vector<int>::iterator pivot = end - 1;
// // // //     std::vector<int>::iterator idx = beg - 1;

// // // //     for (auto it = beg; it != end; ++it) {
// // // //         if (*it < *pivot) {
// // // //             ++idx;
// // // //             std::swap(*idx, *it);
// // // //         }
// // // //     }

// // // //     std::swap(*pivot, *(idx + 1));
// // // //     return idx + 1;
// // // // }

// // // // void Quick_Sort(std::vector<int>::iterator beg, std::vector<int>::iterator end) {
// // // //     if (beg < end) {
// // // //         std::vector<int>::iterator pivot = get_pivot(beg, end);
// // // //         std::vector<int>::iterator pivotPlusOne = pivot + 1;

// // // //         Quick_Sort(beg, pivot);
// // // //         Quick_Sort(pivotPlusOne, end);
// // // //     }
// // // // }

// // // // int main()
// // // // {
// // // //     std::vector<int> deSort = {10,9,8,7,6,5,4,3,2,1,0};
// // // //     std::vector<int> vec = deSort;

// // // //     Quick_Sort(vec.begin(), vec.end());

// // // //     for (auto i : vec)
// // // //         std::cout << i << " ";

// // // //     std::cout << std::endl << "End of Quick Sort" << std::endl;
    
// // // //     vec = deSort;
// // // //     Selection_Sort(vec);
    
// // // //     for (auto i : vec)
// // // //         std::cout << i << " ";

// // // //     std::cout << std::endl << "End of Selection Sort" << std::endl;

// // // //     vec = deSort;
// // // //     Insertion_Sort(vec);
    
// // // //     for (auto i : vec)
// // // //         std::cout << i << " ";

// // // //     std::cout << std::endl << "End of Insertion Sort" << std::endl;

// // // //     return 0;
// // // // }


// // // #include <iostream>

// // // class Matrix {
// // // private:
// // //     int row = 3;
// // //     int row2 = 3;
// // //     int cal = 3;
// // //     int*** __matrix = nullptr;
// // // public:
// // //     Matrix()
// // //     : __matrix(new int**[row])
// // //     {
// // //         for (int i = 0; i < cal; ++i)
// // //             __matrix[i] = new int*[row2];

// // //         int counter = 0;

// // //         for (int i = 0; i < row; ++i)
// // //             for (int j = 0; j < row2; ++j)
// // //                 __matrix[i][j] = new int[cal];

// // //         for (int i = 0; i < row; ++i)
// // //             for (int j = 0; j < row2; ++j)
// // //                 for (int k = 0; k < cal; ++k)
// // //                     __matrix[i][j][k] = counter++;

// // //     }
// // // private:
// // //     class proxy2 {
// // //         int*** mx = nullptr;
// // //         int i = 0;
// // //         int j = 0;
// // //     public:
// // //         proxy2(int*** matrix, int i, int j) 
// // //         : mx(matrix)
// // //         , i(i)
// // //         , j(j)
// // //         {

// // //         }
// // //         int& operator[](std::size_t k) {
// // //             return mx[i][j][k];
// // //         }
// // //     };

// // //     class proxy {
// // //         int*** mx = nullptr;
// // //         int i = 0;
// // //     public:
// // //         proxy(int*** matrix, int i) 
// // //         : mx(matrix)
// // //         , i(i)
// // //         {

// // //         }
// // //         proxy2 operator[](std::size_t j) {
// // //             return proxy2(mx, i, j);
// // //         }
// // //     };

// // // public:
// // //     proxy operator[] (std::size_t i) {
// // //         return proxy(__matrix, i);
// // //     }

// // // };


// // // int main() {
// // //     Matrix mat;

// // //     for (int i = 0; i < 3; ++i)
// // //     {
// // //         for (int j = 0; j < 3; ++j) {
// // //             for (int k = 0; k < 3; ++k) {
// // //                 std::cout << mat[i][j][k] << " ";
// // //             }
// // //             std::cout << std::endl;
// // //         }
// // //         std::cout << std::endl;
// // //     }

// // //     return 0;
// // // }

// // #include <iostream>
// // #include <queue>
// // #include <vector>

// // using namespace std;

// // // Function to perform Breadth First Search on a graph
// // // represented using adjacency list
// // void bfs(vector<vector<int> >& adjList, int startNode,
// //          vector<bool>& visited)
// // {
// //     // Create a queue for BFS
// //     queue<int> q;

// //     // Mark the current node as visited and enqueue it
// //     visited[startNode] = true;
// //     q.push(startNode);

// //     // Iterate over the queue
// //     while (!q.empty()) {
// //         // Dequeue a vertex from queue and print it
// //         int currentNode = q.front();
// //         q.pop();
// //         cout << currentNode << " ";

// //         // Get all adjacent vertices of the dequeued vertex
// //         // currentNode If an adjacent has not been visited,
// //         // then mark it visited and enqueue it
// //         for (int neighbor : adjList[currentNode]) {
// //             if (!visited[neighbor]) {
// //                 visited[neighbor] = true;
// //                 q.push(neighbor);
// //             }
// //         }
// //     }
// // }

// // // Function to add an edge to the graph
// // void addEdge(vector<vector<int> >& adjList, int u, int v)
// // {
// //     adjList[u].push_back(v);
// // }

// // int main()
// // {
// //     // Number of vertices in the graph
// //     int vertices = 5;

// //     // Adjacency list representation of the graph
// //     vector<vector<int> > adjList(vertices);

// //     // Add edges to the graph
// //     addEdge(adjList, 0, 1);
// //     addEdge(adjList, 0, 2);
// //     addEdge(adjList, 1, 3);
// //     addEdge(adjList, 1, 4);
// //     addEdge(adjList, 2, 4);

// //     // Mark all the vertices as not visited
// //     vector<bool> visited(vertices, false);

// //     // Perform BFS traversal starting from vertex 0
// //     cout << "Breadth First Traversal starting from vertex " 
// //             "0: ";

// //     bfs(adjList, 0, visited);
// //     cout << endl;
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <string>
// #include <unordered_map>


// #define __foo2
// #define __foo3

// void foo();
// #ifdef __foo2
// void foo2();
// #endif



// int main() {

//     foo();

// #ifdef __linux__
//     std::cout << "Linux" << std::endl;
// #elif __APPLE__
//     std::cout << "MacOS" << std::endl;
// #elif _WIN32
//     std::cout << "Windows" << std::endl;
// #endif
//     // std::unordered_map<std::string, std::vector<std::string>> mp = 
//     // {
//     //     {"Aram",    {"1", "2", "3"}},
//     //     {"Hrach",   {"4", "5", "6"}},
//     //     {"Gegham",  {"7", "8", "9"}},
//     //     {"Tyom",    {"10", "11", "12"}}
//     // };
//     // mp.insert({"Abo", {"13", "14", "15"}});

//     // for (auto i : mp) {
//     //     std::cout << i.first << " ";

//     //     for (auto j : i.second)
//     //         std::cout << j << " ";

//     //     std::cout << std::endl;
//     // }

//     // mp["Abo"].push_back("16");
//     // std::cout << std::endl;

//     // for (auto i : mp) {
//     //     std::cout << i.first << " ";

//     //     for (auto j : i.second)
//     //         std::cout << j << " ";

//     //     std::cout << std::endl;
//     // }

//     return 0;
// }

// void foo() {
//     void foo2();
//     foo2();
// }

// void foo2() {
//     std::cout << "Hello" << std::endl;
// }