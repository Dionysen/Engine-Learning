#pragma once

#include <map>
#include <string>
#include <vector>
using namespace std;

// trie�1�7�1�7�1�7�1�1�1�7
struct ACNode
{
    ACNode(int p, char c)
        : parent(p)
        , ch(c)
        , fail(-1)
    {
    }

    char           ch;
    map<char, int> sons;
    int            fail;
    vector<int>    output;
    int            parent;
};

// AC�1�7�1�1�1�7�1�7
class ACSearcher
{
  public:
    ACSearcher();
    ~ACSearcher();

    void LoadPattern(const vector<string>& paterns);
    void BuildGotoTable();
    void BuildFailTable();
    vector<int> ACSearch(const string& text);  // �1�7�1�7�1�7�1�7�0�5�1�7�5�3�1�7�1�7�0�0�0�4�1�7�1�7�1�7�1�7�1�7�1�7

  private:
    int            maxState;  // �1�7�1�7�1�7�0�8�0�0�1�7�1�7
    vector<ACNode> nodes;     // trie�1�7�1�7
    vector<string> paterns;   // �1�7�1�7�0�8�0�5�1�7�1�7�1�7�0�0�0�4

    void AddState(int parent, char ch);  // �1�7�1�7�0�3�1�7�1�7�1�7�1�7�0�8�0�0
};
