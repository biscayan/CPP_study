// STL has four components : Algorithms, Containers, Functions, Iterators

#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void sequence_containers()
{
    // vector
    {
        vector<int> vec;
        for (int i = 0; i < 10; i++)
            vec.push_back(i);
            // vector doesn't have push_front method
        for (auto &e : vec)
            cout << e << " ";
        cout << endl;
    }

    // deque
    {
        deque<int> deq;
        for (int i = 0; i < 10; i++)
        {
            deq.push_back(i);
            deq.push_front(i);
        }

        for (auto &e : deq)
            cout << e << " ";
        cout << endl;
    }
}

void associative_containers()
{
    // set
    {
        set<string> str_set;

        // components are not duplicated
        str_set.insert("Hello");
        str_set.insert("World");
        str_set.insert("Hello");

        cout << str_set.size() << endl;

        for (auto &e : str_set)
            cout << e << " ";
        cout << endl;
    }

    // multiset
    {
        std::multiset<string> str_set;

        // duplication is allowed
        str_set.insert("Hello");
        str_set.insert("World");
        str_set.insert("Hello");

        cout << str_set.size() << endl;

        // sort automatically
        for (auto &e : str_set)
            cout << e << " "; // Hello Hello World
        cout << endl;
    }

    // map : key/value
    {
        std::map<char, int> map;

        map['c'] = 50;
        map['a'] = 10;
        map['b'] = 20;

        cout << map['a'] << endl;

        map['a'] = 100;

        cout << map['a'] << endl;

        // sort automatically (a->b->c)
        // first = key, second = value
        for (auto& e : map)
            cout << e.first << " " << e.second << " ";
        cout << endl;
    }

    // multimap
    {
        // allow duplicated keys
        std::multimap<char, int> map;
        // Before c++14, use std::pair<char, int>('a', 10)
        map.insert(std::pair('a', 10));
        map.insert(std::pair('b', 10));
        map.insert(std::pair('c', 10));
        map.insert(std::pair('a', 100));

        cout << map.count('a') << endl;

        // first = key, second = value
        for (auto& e : map)
            cout << e.first << " " << e.second << " ";
        cout << endl;
    }
}

void container_adapter()
{
    // stack
    {
        cout << "Stack" << endl;

        std::stack<int> stack;
        stack.push(1);      // push adds a copy
        stack.emplace(2);   // emplace constructs a new object
        stack.emplace(3);
        
        cout << stack.top() << endl; // 3
        stack.pop(); // 3
        cout << stack.top() << endl; // 2
    }

    // queue
    {
        cout << "Queue" << endl;

        std::queue<int> queue;
        queue.push(1);
        queue.push(2);
        queue.push(3);

        cout << queue.front() << " " << queue.back() << endl; // 1 3
        queue.pop(); // 1
        cout << queue.front() << " " << queue.back() << endl; // 2 3
    }

    // priority queue
    {
        cout << "Priority Queue" << endl;

        std::priority_queue<int> pri_queue;

        for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
            pri_queue.push(n);

        // 9->8->7->6->...
        for (int i = 0; i < 10; i++)
        {
            cout << pri_queue.top() << endl;
            pri_queue.pop();
        }
    }
}

int main()
{
    sequence_containers();
    associative_containers();
    container_adapter();

    return 0;
}