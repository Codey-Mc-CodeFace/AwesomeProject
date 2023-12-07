#include <string>
#include <set>


bool find() {
    std::set<std::string, std::less<>> m = { "Dory", "Marlin", "Nemo", "Emo" };
    auto it = m.find("Nemo");

    // ...

    return it != m.end();
}
