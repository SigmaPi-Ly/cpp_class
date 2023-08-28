#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
namespace rg = std::ranges;
namespace vw = std::views;

// clang-format off
auto &operator<<(auto &ostr, ranges::forward_range auto const &arr) { for (auto const &i : arr | views::take(arr.size() - 1)) ostr << i << ' '; return ostr << arr.back(); }
void print(auto t0, auto... t) { std::cout << t0; if constexpr (sizeof...(t) > 0) std::cout << ' ', print(t...); else std::cout << '\n'; }
// clang-format on

#ifdef DEBUG
#include "debug.h"
#else
#define debug(...) 0
#endif

// * input values
// int n;
// int arr[(int)2e5 + 1];

// * input
__forceinline void input() {
    // cin >> n;
    // for (int i = 0; i < n; i++) cin >> arr[i];
}

// * function solve
__forceinline void solve() {
    
}

int main() {
    // * input optimization
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) input(), solve();

    return 0;
}