
#include "AhoCorasick.h"
namespace Computer
{
    AhoCorasick::AhoCorasick(const std::vector<std::string>& patterns)
        : patterns(patterns)
    {
        root = new TrieNode();
        buildTrie();
        buildFailureLinks();
    }
    AhoCorasick::AhoCorasick()
    {
        root = new TrieNode();
    }

    void AhoCorasick::LoadPatterns(const std::vector<std::string>& patterns)
    {
        this->patterns = patterns;
        buildTrie();
        buildFailureLinks();
    }
    void AhoCorasick::buildTrie()
    {
        for (int i = 0; i < patterns.size(); ++i)
        {
            TrieNode* node = root;
            for (char c : patterns[i])
            {
                if (node->children.find(c) == node->children.end())
                {
                    node->children[c] = new TrieNode();
                }
                node = node->children[c];
            }
            node->output.push_back(i);
        }
    }

    void AhoCorasick::buildFailureLinks()
    {
        std::queue<TrieNode*> q;
        root->failureLink = root;

        for (auto& [key, node] : root->children)
        {
            node->failureLink = root;
            q.push(node);
        }

        while (!q.empty())
        {
            TrieNode* current = q.front();
            q.pop();

            for (auto& [key, child] : current->children)
            {
                TrieNode* failure = current->failureLink;
                while (failure != root && failure->children.find(key) == failure->children.end())
                {
                    failure = failure->failureLink;
                }
                if (failure->children.find(key) != failure->children.end())
                {
                    child->failureLink = failure->children[key];
                }
                else
                {
                    child->failureLink = root;
                }

                child->output.insert(child->output.end(), child->failureLink->output.begin(), child->failureLink->output.end());
                q.push(child);
            }
        }
    }

    std::vector<int> AhoCorasick::search(const std::string& text)
    {
        std::vector<int> result;
        TrieNode*        node = root;

        for (char c : text)
        {
            while (node != root && node->children.find(c) == node->children.end())
            {
                node = node->failureLink;
            }
            if (node->children.find(c) != node->children.end())
            {
                node = node->children[c];
            }
            else
            {
                node = root;
            }

            for (int patternIndex : node->output)
            {
                result.push_back(patternIndex);
            }
        }

        return result;
    }

}  // namespace Computer
