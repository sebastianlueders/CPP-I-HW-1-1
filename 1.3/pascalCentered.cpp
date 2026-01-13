#include <format>
#include <iostream>
#include <string>
#include <vector>


constexpr int TRI_DEPTH = 8;


int main()
{
    std::vector<std::vector<int>> tri(TRI_DEPTH);

    tri[0].push_back(1);
    tri[1].push_back(1);
    tri[1].push_back(1);

    for (int i = 2; i < TRI_DEPTH; ++i)
    {
        tri[i].push_back(1);
        for (int j = 1; j < i; ++j)
        {
            int nxt = tri[i - 1][j-1] + tri[i-1][j];
            tri[i].push_back(nxt);
        }
        tri[i].push_back(1);
    }

    for (int i = 0; i < TRI_DEPTH; ++i)
    {
        int spaces = (TRI_DEPTH - i - 1) * 2;
        std::cout << std::string(spaces, ' ');
        
        for (int j = 0; j < tri[i].size(); ++j)
        {
            std::cout << std::format("{:^3d} ", tri[i][j]);
        }
        std::cout << '\n';
    }

    return 0;
}