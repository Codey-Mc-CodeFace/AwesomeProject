#include <vector>
#include <string>
#include <set>

struct Token {
    explicit(false) Token(std::string source) : val(std::move(source)) {}

    std::string const val;

    friend auto operator<=>(const Token& lhs, const Token& rhs) = default;
};

std::vector<std::string> const raw_tokens {
        "const", "mutable", "volatile", "if", "for", "while", "switch", "do",
        "bool", "char", "short", "int", "long", "unsigned", "float", "double",
        "<", ">", "<=", ">=", "==", "!=", "||", "&&", "!",
        "+", "-", "*", "/", "%", "=", "+=", "-=", "*=", "/=", "%=",
        // much more
};
std::set<Token, std::less<>> const tokens( raw_tokens.begin(), raw_tokens.end() );

bool token_exists( std::string const& to_find ) {
    auto it = tokens.find( to_find );
    return it == tokens.end();
}
