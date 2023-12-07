#include <string>

// clang-tidy and SL both warn about non-const pointers that are not mutated through:

int add_one( int* i ) {
    return *i+1;
}

// For references only SL warnings about it (at time of writing)

size_t get_size( std::string& s ) {
    return s.size();
}
