#include <string>
#include <iostream>

void use_wrapper();
bool token_exists( std::string const& to_find );

// From non-const.cpp
int add_one( int* i );
size_t get_size( std::string& s );

// From dory.cpp
bool find();

// From Token.cpp
bool token_exists( std::string const& to_find );

// from i_like_to_move_it_move_it.cpp
#include "i_like_to_move_it_move_it.cpp"
//void what_happens_when_an_unstoppable_force_meets_an_immovable_object();
//int use_A_and_B();

int use_A_and_B() {
    A a(7);
    B b( 8 );
    return a.a + b.a;
}

int main() {
    std::cout << "Hello, SonarWorld\n";

    int result = use_A_and_B();
    use_wrapper();
    token_exists("hello");

    int i = 7;
    add_one(&i);

    std::string s;
    get_size(s);

    find();

    token_exists("");
    what_happens_when_an_unstoppable_force_meets_an_immovable_object();
    return result;
}
