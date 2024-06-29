#include <vector>
#include <unordered_map>
#include <queue>
#include <string>

namespace Computer
{
    class AhoCorasick
    {
      public:
        AhoCorasick(const std::vector<std::string>& patterns);
        AhoCorasick();

        std::vector<int> search(const std::string& text);

        void LoadPatterns(const std::vector<std::string>& patterns);

      private:
        struct TrieNode
        {
            std::unordered_map<char, TrieNode*> children;
            TrieNode*                           failureLink;
            std::vector<int>                    output;
            TrieNode()
                : failureLink(nullptr)
            {
            }
        };

        TrieNode*                root;
        std::vector<std::string> patterns;

        void buildTrie();
        void buildFailureLinks();
    };

}  // namespace Computer
